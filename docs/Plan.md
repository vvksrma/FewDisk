
# 💽 FewDisk — Bootable USB Creator (Cross-Platform, C++)

A beginner-friendly, fast and simple bootable USB writer tool for Windows and Linux.

---

## 🚀 Project Vision
_A simple, beginner-friendly tool to create bootable USB drives from ISO files — for both Windows & Linux._

---

## 📚 Learning Modules

| ✅ | Topic                              | What You'll Learn                                           |
|----|------------------------------------|-------------------------------------------------------------|
| ☐  | C++ File I/O (binary)              | `ifstream`, `ofstream`, `read`, `write`                    |
| ☐  | System-level file handling (raw)   | `CreateFile` (Windows), `/dev/sdX` (Linux)                 |
| ☐  | USB drive detection                | Using WinAPI, Linux's `/sys/block` or `lsblk`              |
| ☐  | ISO image structure basics         | Just enough to flash properly                              |
| ☐  | Cross-platform abstraction         | `#ifdef _WIN32` etc.                                       |
| ☐  | Command-line argument parsing      | `argc`, `argv`, flags                                      |
| ☐  | Progress bar in terminal           | UX touch for flashing feedback                             |
| ☐  | (Bonus) Qt GUI Basics              | If you build GUI later                                     |
| ☐  | Error handling & permissions       | Admin mode, `sudo`, disk protection                        |

---

## 🛠️ Development Phases

| Phase     | Goal / Features                                                                 |
|-----------|----------------------------------------------------------------------------------|
| Phase 0   | Setup CMake project, folder structure (`src`, `include`, `build`)                |
| Phase 1   | Detect all connected USB drives (Windows/Linux separately)                       |
| Phase 2   | Select drive & ISO file via CLI                                                  |
| Phase 3   | Flash ISO to USB drive (binary write)                                            |
| Phase 4   | Add progress feedback (bar or % updates)                                         |
| Phase 5   | Handle cross-platform abstractions cleanly                                       |
| Phase 6   | (Optional) GUI via Qt — file picker, flash button, dropdown                      |
| Phase 7   | Polish: Logs, error messages, confirmation before wipe, checksum support         |
| Phase 8   | Package: Windows `.exe` (InnoSetup), Linux `.deb` or AppImage                    |
| Phase 9   | Public release on GitHub + docs + screenshots                                    |

---

## 🧠 Resources

- [C++ File Streams](https://www.geeksforgeeks.org/file-handling-c-classes/)
- [Write ISO to USB in Linux](https://linuxize.com/post/create-a-bootable-usb-stick-on-linux/)
- [Win32 API: CreateFile](https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilea)
- [OSDev Wiki](https://wiki.osdev.org/Main_Page)

---

## 📈 Progress Tracker

| Task                        | Status   | Notes                            |
|-----------------------------|----------|----------------------------------|
| Setup project               | ☐        | Folder structure + CMake         |
| USB detection on Linux      | ☐        | Use `/sys/block` or `lsblk`      |
| USB detection on Windows    | ☐        | Use `GetLogicalDrives()`         |
| ISO selection CLI           | ☐        | `argv` or user prompt            |
| Flashing logic              | ☐        | Binary stream write              |
| GUI Layer                   | ☐        | Optional Qt interface            |

---

## 🎯 Final Deliverables

- ✅ CLI app for Linux and Windows
- ✅ Optionally: GUI version
- ✅ Readme, docs, logo, demo GIF
- ✅ Public GitHub repo

