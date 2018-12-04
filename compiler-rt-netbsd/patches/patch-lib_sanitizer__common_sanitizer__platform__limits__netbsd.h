$NetBSD$

--- lib/sanitizer_common/sanitizer_platform_limits_netbsd.h.orig	2018-12-04 02:10:16.000000000 +0000
+++ lib/sanitizer_common/sanitizer_platform_limits_netbsd.h
@@ -2212,6 +2212,78 @@ extern unsigned IOCTL_SNDCTL_DSP_SILENCE
 
 extern const int si_SEGV_MAPERR;
 extern const int si_SEGV_ACCERR;
+
+extern const unsigned SHA1_CTX_sz;
+extern const unsigned SHA1_return_length;
+extern const unsigned MD2_CTX_sz;
+extern const unsigned MD2_return_length;
+extern const unsigned MD4_CTX_sz;
+extern const unsigned MD4_return_length;
+extern const unsigned MD5_CTX_sz;
+extern const unsigned MD5_return_length;
+extern const unsigned RMD160_CTX_sz;
+extern const unsigned RMD160_return_length;
+
+#define SHA2_EXTERN(LEN)\
+  extern const unsigned SHA##LEN##_CTX_sz; \
+  extern const unsigned SHA##LEN##_return_length; \
+  extern const unsigned SHA##LEN##_block_length; \
+  extern const unsigned SHA##LEN##_digest_length
+
+SHA2_EXTERN(224);
+SHA2_EXTERN(256);
+SHA2_EXTERN(384);
+SHA2_EXTERN(512);
+
+#undef SHA2_EXTERN
+
+extern const int unvis_valid;
+extern const int unvis_validpush;
+
+typedef struct __sanitizer_modctl_load {
+  const char *ml_filename;
+  int ml_flags;
+  const char *ml_props;
+  uptr ml_propslen;
+} __sanitizer_modctl_load_t;
+extern const int modctl_load;
+extern const int modctl_unload;
+extern const int modctl_stat;
+extern const int modctl_exists;
+extern const unsigned fpos_t_sz;
+
+struct __sanitizer_cdbr {
+  void (*unmap)(void *, void *, uptr);
+  void *cookie;
+  u8 *mmap_base;
+  uptr mmap_size;
+
+  u8 *hash_base;
+  u8 *offset_base;
+  u8 *data_base;
+
+  u32 data_size;
+  u32 entries;
+  u32 entries_index;
+  u32 seed;
+
+  u8 offset_size;
+  u8 index_size;
+
+  u32 entries_m;
+  u32 entries_index_m;
+  u8 entries_s1, entries_s2;
+  u8 entries_index_s1, entries_index_s2;
+};
+
+struct __sanitizer_sockaddr_storage {
+  u8 ss_len;
+  u8 ss_family;
+  char *__ss_pad1[sizeof(u64) - 2];
+  u64 __ss_align;
+  char __ss_pad2[128 - 2 - (sizeof(u64) - 2) - sizeof(u64)];
+};
+
 }  // namespace __sanitizer
 
 #define CHECK_TYPE_SIZE(TYPE) \
