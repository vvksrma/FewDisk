# FewDisk 🔥

**FewDisk** is a clean, minimal, and beginner-friendly open-source tool to create bootable USB drives for Linux and Windows systems — inspired by the simplicity of tools like Rufus, but cross-platform and built with a clear, educational design.

## ✨ Features
- Detect connected USB drives
- Write ISO images to USB (Ubuntu, Windows, etc.)
- Cross-platform: Windows + Linux
- CLI first, GUI later (Qt-based)
- Designed to be fast, minimal, and beginner-safe

## 📦 Build Instructions

### Linux
```bash
sudo apt install g++ cmake
git clone https://github.com/yourname/fewdisk.git
cd fewdisk
mkdir build && cd build
cmake ..
make
./fewdisk
