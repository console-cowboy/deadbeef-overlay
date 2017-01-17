--- a/junklib.c	2016-04-24 21:38:13 UTC
+++ b/junklib.c
@@ -33,7 +33,6 @@
 #include <string.h>
 #undef HAVE_ICI
 #if HAVE_ICONV
-  #define LIBICONV_PLUG
   #include <iconv.h>
 #elif HAVE_ICU
   #warning icu
