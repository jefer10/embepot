/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
Amplitud con el potenciometro
Cambio de frecuencia con pulsadores

Mecánica:
- Hacer el periodo del Timer igual al de 256 veces la frecuencia deseada (para las 256 muestras)
- En cada flanco de subida del timer el DAC se actualiza con el registro de control
- En cada flanco de bajada del timer se actualiza el registro de control, y se incrementa el indice.
- Cada medio segundo se hace una conversion ADC. Una vez completada, se recalcula toda la tabla
- 
UPD_DAC lee el siguiente valor de la tabla y lo escribe en el DAC

*/
#include "project.h"
#include <math.h>

#define PI 3.14159265

/* Defines for DMA */
#define DMA_BYTES_PER_BURST 1
#define DMA_REQUEST_PER_BURST 1
#define DMA_SRC_BASE (CYDEV_SRAM_BASE)
#define DMA_DST_BASE (CYDEV_PERIPH_BASE)

CYCODE char tabla[256];

int main(void)
{
    int i;
    

    CyGlobalIntEnable; /* Enable global interrupts. */
    for (i=0;i<512;i++)
        tabla[i]=(char)((sin(2.0*PI*i/512.0)+1)*100.0/2.0+(sin(2.0*PI*i/256.0)+1)*100.0/2.0);

    /* Variable declarations for DMA */
    /* Move these variable declarations to the top of the function */
    uint8 DMA_Chan;
    uint8 DMA_TD[1];

    /* DMA Configuration for DMA */
    DMA_Chan = DMA_DmaInitialize(DMA_BYTES_PER_BURST, DMA_REQUEST_PER_BURST, 
    HI16(DMA_SRC_BASE), HI16(DMA_DST_BASE));
    DMA_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_TD[0], 512, DMA_TD[0], CY_DMA_TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_TD[0], LO16((uint32)tabla), LO16((uint32)DAC_Data_PTR));
    CyDmaChSetInitialTd(DMA_Chan, DMA_TD[0]);
    CyDmaChEnable(DMA_Chan, 1);

    DAC_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */

    }
}

/* [] END OF FILE */
