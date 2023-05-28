#include "uart.h"
//#include <iostream>
//#include <string>
//#include <cstring>
//#ifdef _WIN32
//#include <windows.h>
#include <termiWin>
//#else
//#include <fcntl.h>
//#include <unistd.h>
//#include <termios.h>
//#endif
//
//Uart::Uart(const char* port_name, int baud_rate) {
//#ifdef _WIN32
//    file_descriptor_ = CreateFileA(port_name, GENERIC_READ | GENERIC_WRITE,
//                                   0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
//                                   NULL);
//    if (file_descriptor_ == INVALID_HANDLE_VALUE) {
//        std::cerr << "Failed to open serial port" << std::endl;
//        return;
//    }
//#else
//    file_descriptor_ = open(port_name, O_RDWR | O_NOCTTY | O_NDELAY);
// if (file_descriptor_ == -1) {
// std::cerr << "Failed to open serial port" << std::endl;
// return;
// }
//
// struct termios options;
// tcgetattr(file_descriptor_, &options);
// options.c_cflag = baud_rate | CS8 | CLOCAL | CREAD;
// options.c_iflag = IGNPAR;
// options.c_oflag = 0;
// options.c_lflag = 0;
//
//#ifdef __APPLE__
// options.c_cc[VTIME] = 1;
//#else
// options.c_cc[VTIME] = 0;
//#endif
//
//#ifdef __APPLE__
// options.c_cc[VMIN] = 0;
//#else
// options.c_cc[VMIN] = 1;
//#endif
//
//#ifdef __APPLE__
// cfsetispeed(&options, baud_rate);
//#else
// cfsetspeed(&options, baud_rate);
//#endif
//
//#endif // _WIN32
//
//#ifdef __APPLE__
//    tcsetattr(file_descriptor_, TCSANOW, &options);
//#else
//    struct termios old_options;
//    tcgetattr(file_descriptor_, &old_options);
//    tcsetattr(file_descriptor_, TCSAFLUSH, &options);
//#endif // __APPLE__
//}
//
//
//
//
//Uart::~Uart() {
//    if (file_descriptor_ != -1) {
//        close(file_descriptor_);
//        file_descriptor_ = -1;
//    }
//}
//
//bool Uart::Write(const std::string& data) {
//    if (file_descriptor_ == -1) {
//        return false;
//    }
//    int bytes_written = write(file_descriptor_, data.c_str(), data.length());
//    if (bytes_written != static_cast<int>(data.length())) {
//        return false;
//    }
//    return true;
//}
//
//std::string Uart::Read() {
//    std::string read_data;
//    char data[1];
//    DWORD bytes_read;
//    while (true) {
//        if (ReadFile(file_descriptor_, data, sizeof(data), &bytes_read, NULL)) {
//            read_data += data[0];
//            if (data[0] == '\n') {
//                break;
//            }
//        } else {
//            break;
//        }
//    }
//    return read_data;
//}
//
//void Uart::Write(std::string data) {
//    DWORD bytes_written;
//    if (!WriteFile(file_descriptor_, data.c_str(), data.size(), &bytes_written,
//                   NULL)) {
//        std::cerr << "Failed to write to serial port" << std::endl;
//        CloseHandle(file_descriptor_);
//        return;
//    }
//}