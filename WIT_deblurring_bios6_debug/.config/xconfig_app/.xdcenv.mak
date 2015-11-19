#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;C:/ti/pdk_C6657_1_1_2_6/packages;C:/ti/ccsv5/ccs_base;F:/myproject/WIT_deblurring_bios6_debug/.config
override XDCROOT = C:/ti/xdctools_3_25_04_88
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;C:/ti/pdk_C6657_1_1_2_6/packages;C:/ti/ccsv5/ccs_base;F:/myproject/WIT_deblurring_bios6_debug/.config;C:/ti/xdctools_3_25_04_88/packages;..
HOSTOS = Windows
endif
