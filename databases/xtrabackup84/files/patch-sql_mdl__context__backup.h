--- sql/mdl_context_backup.h.orig	2024-08-08 10:30:27 UTC
+++ sql/mdl_context_backup.h
@@ -47,7 +47,7 @@ class MDL_context_backup_manager {
   /**
     Key for uniquely identifying MDL_context in the MDL_context_backup map.
   */
-  typedef std::basic_string<uchar> MDL_context_backup_key;
+  typedef std::vector<uchar> MDL_context_backup_key;
 
   class MDL_context_backup;
 
