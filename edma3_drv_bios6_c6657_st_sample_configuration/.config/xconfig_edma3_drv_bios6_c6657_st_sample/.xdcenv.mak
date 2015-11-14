#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/ccsv5/ccs_base;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/.config
override XDCROOT = C:/ti/xdctools_3_23_04_60
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/ccsv5/ccs_base;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/.config;C:/ti/xdctools_3_23_04_60/packages;..
HOSTOS = Windows
endif
