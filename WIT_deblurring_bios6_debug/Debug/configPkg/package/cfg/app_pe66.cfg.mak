# invoke SourceDir generated makefile for app.pe66
app.pe66: .libraries,app.pe66
.libraries,app.pe66: package/cfg/app_pe66.xdl
	$(MAKE) -f F:\myproject\git\loc_git\WIT_deblurring_bios6_debug/src/makefile.libs

clean::
	$(MAKE) -f F:\myproject\git\loc_git\WIT_deblurring_bios6_debug/src/makefile.libs clean

