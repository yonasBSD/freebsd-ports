--- src/3rdparty/chromium/base/base_switches.h.orig	2023-10-11 18:22:24 UTC
+++ src/3rdparty/chromium/base/base_switches.h
@@ -62,7 +62,7 @@ extern const char kPackageVersionName[];
 extern const char kPackageVersionCode[];
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 // TODO(crbug.com/1176772): Remove kEnableCrashpad and IsCrashpadEnabled() when
 // Crashpad is fully enabled on Linux.
 extern const char kEnableCrashpad[];
