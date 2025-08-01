--- components/policy/core/common/policy_pref_names.cc.orig	2025-06-30 07:04:30 UTC
+++ components/policy/core/common/policy_pref_names.cc
@@ -191,7 +191,7 @@ const char kBuiltInAIAPIsEnabled[] = "policy.built_in_
 // A boolean value indicating whether the built-in AI APIs are enabled.
 const char kBuiltInAIAPIsEnabled[] = "policy.built_in_ai_apis_enabled";
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
 // List of urls for which password manager is disabled/blocked.
 const char kPasswordManagerBlocklist[] = "policy.password_manager_blocklist";
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_WIN) ||
