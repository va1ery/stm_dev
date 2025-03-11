/* Linker script for BlackPill F411  (STM32F411CEU6, 512K flash, 128K RAM). */

/* Define memory regions. */
MEMORY
{
        rom (rx) : ORIGIN = 0x08000000, LENGTH = 512K
        ram (rwx) : ORIGIN = 0x20000000, LENGTH = 128K
}

/* Include the common ld script. */
INCLUDE cortex-m-generic.ld