// usb_detect.c
#include "../../external/libusb/include/libusb.h"
#include <stdio.h>

void list_usb_devices() {
    libusb_context *ctx = NULL;
    libusb_device **devs;
    ssize_t cnt;
    int r;

    r = libusb_init(&ctx);
    if (r < 0) {
        fprintf(stderr, "Error initializing libusb: %s\n", libusb_error_name(r));
        return;
    }

    cnt = libusb_get_device_list(ctx, &devs);
    if (cnt < 0) {
        fprintf(stderr, "Error getting device list\n");
        libusb_exit(ctx);
        return;
    }

    printf("Found %ld devices\n", cnt);
    libusb_free_device_list(devs, 1);
    libusb_exit(ctx);
}