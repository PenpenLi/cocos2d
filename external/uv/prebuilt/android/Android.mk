LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := ext_uv
LOCAL_SRC_FILES := $(TARGET_ARCH_ABI)/libuv.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include

include $(PREBUILT_STATIC_LIBRARY)
