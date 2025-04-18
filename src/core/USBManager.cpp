// USBManager.cpp
extern "C" void list_usb_devices();

#include <iostream>
#include "../../include/lowlevel/usb_detect.h" // Correct header include

class USBManager {
public:
    void detectUSBs();
};

void USBManager::detectUSBs() {
    std::cout << "Detecting USB devices...\n";
    list_usb_devices(); // Call the C function
}
