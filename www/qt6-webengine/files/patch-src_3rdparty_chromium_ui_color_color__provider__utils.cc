--- src/3rdparty/chromium/ui/color/color_provider_utils.cc.orig	2023-12-10 06:10:27 UTC
+++ src/3rdparty/chromium/ui/color/color_provider_utils.cc
@@ -187,7 +187,7 @@ base::StringPiece SystemThemeName(ui::SystemTheme syst
   switch (system_theme) {
     case ui::SystemTheme::kDefault:
       return "kDefault";
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     case ui::SystemTheme::kGtk:
       return "kGtk";
     case ui::SystemTheme::kQt:
