$NetBSD: patch-etc_uams_uams__randnum.c,v 1.1 2014/03/20 14:27:26 hfath Exp $

--- etc/uams/uams_randnum.c.orig	2014-01-04 15:42:35.000000000 +0000
+++ etc/uams/uams_randnum.c
@@ -25,7 +25,7 @@
 #include <atalk/uam.h>
 
 
-#include <des.h>
+#include <openssl/des.h>
 
 #ifdef USE_CRACKLIB
 #include <crack.h>
