## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e66 linker.cmd \
  package/cfg/edma3_drv_bios6_c6657_st_sample_pe66.oe66 \

linker.cmd: package/cfg/edma3_drv_bios6_c6657_st_sample_pe66.xdl
	$(SED) 's"^\"\(package/cfg/edma3_drv_bios6_c6657_st_sample_pe66cfg.cmd\)\"$""\"F:/myproject/git/loc_git/edma3_drv_bios6_c6657_st_sample_configuration/Debug/configPkg/\1\""' package/cfg/edma3_drv_bios6_c6657_st_sample_pe66.xdl > $@
