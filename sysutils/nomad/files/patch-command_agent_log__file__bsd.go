--- command/agent/log_file_bsd.go.orig	2024-11-11 16:35:41 UTC
+++ command/agent/log_file_bsd.go
@@ -1,7 +1,8 @@
 // Copyright (c) HashiCorp, Inc.
 // SPDX-License-Identifier: BUSL-1.1
 
-//go:build darwin || freebsd || netbsd || openbsd
+//go:build !386 && (darwin || freebsd || netbsd || openbsd)
+// +build !386
 // +build darwin freebsd netbsd openbsd
 
 package agent
