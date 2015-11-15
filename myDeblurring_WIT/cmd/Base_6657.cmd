-c
-heap  0x7800   /* for malloc */
-stack 0x8000
-l rts6600_elf.lib
-m link.map

/**/
MEMORY
{
  VECTORS_RAM:	o = 0x00800000	l = 0x00000400
  L2SRAM:     	o = 0x00800400  l = 0x000ffc00
  MSMCSRAM:		o = 0x0c000000  l = 0x00100000
}

SECTIONS
{
  .csl_vect		>	L2SRAM
  .stack		>	L2SRAM
  .text			>	L2SRAM
  .const		>	L2SRAM
  .cinit		>	L2SRAM
  .switch		>	L2SRAM
  .stack		>	L2SRAM
  .bss			>	L2SRAM
  ".neardata"	>	L2SRAM
  ".rodata"		>	L2SRAM
  .fardata  	>	L2SRAM
  .far			>	L2SRAM
  .cio			>	L2SRAM
  ".testMem"	>	L2SRAM
  "IMEM"		>	L2SRAM
  ".L2_buffers" >	MSMCSRAM
  "MSMC"		> 	MSMCSRAM
  ".sysmem" > L2SRAM
  "C1PL" > L2SRAM
}
