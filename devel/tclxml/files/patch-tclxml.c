--- tclxml.c.orig	2013-03-30 17:17:07 UTC
+++ tclxml.c
@@ -20,6 +20,8 @@
 #include <tclxslt/tclxslt.h>
 #include <string.h>
 
+int Tcldom_libxml2_Init ( Tcl_Interp *interp );
+
 #define TCL_DOES_STUBS \
     (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
     (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))
