#
_XDCBUILDCOUNT = 0
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/uia_1_00_03_25/packages;C:/ti/ccsv5/ccs_base;F:/myproject/git/loc_git/SYS_BIOS_semphore/.config
override XDCROOT = C:/ti/xdctools_3_25_04_88
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_33_06_50/packages;C:/ti/uia_1_00_03_25/packages;C:/ti/ccsv5/ccs_base;F:/myproject/git/loc_git/SYS_BIOS_semphore/.config;C:/ti/xdctools_3_25_04_88/packages;..
HOSTOS = Windows
endif
