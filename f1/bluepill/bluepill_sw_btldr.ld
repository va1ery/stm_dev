/* Linker script for BluePill (STM32F103C8T6, 64K flash, 20K RAM) with a software bootloader */

/* Define memory regions. */
MEMORY
{
        rom (rx) : ORIGIN = 0x08002000, LENGTH = 64K
        ram (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

/* Include the common ld script. */
INCLUDE cortex-m-generic.ld