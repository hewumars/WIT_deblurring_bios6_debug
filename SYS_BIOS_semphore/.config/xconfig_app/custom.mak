## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e66 linker.cmd package/cfg/app_pe66.oe66

linker.cmd: package/cfg/app_pe66.xdl
	$(SED) 's"^\"\(package/cfg/app_pe66cfg.cmd\)\"$""\"F:/myproject/SYS_BIOS_semphore/.config/xconfig_app/\1\""' package/cfg/app_pe66.xdl > $@
