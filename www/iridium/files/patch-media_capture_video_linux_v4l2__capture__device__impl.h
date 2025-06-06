--- media/capture/video/linux/v4l2_capture_device_impl.h.orig	2025-05-07 06:48:23 UTC
+++ media/capture/video/linux/v4l2_capture_device_impl.h
@@ -19,7 +19,7 @@ class CAPTURE_EXPORT V4L2CaptureDeviceImpl : public V4
  public:
   int open(const char* device_name, int flags) override;
   int close(int fd) override;
-  int ioctl(int fd, int request, void* argp) override;
+  int ioctl(int fd, unsigned long request, void* argp) override;
   void* mmap(void* start,
              size_t length,
              int prot,
