find_package(libusb CONFIG REQUIRED)
target_link_libraries(fewdisk PRIVATE libusb::libusb)

#Include Directories here
include_directories(external/libusb/include)


target_link_libraries(fewdisk PRIVATE libusb)