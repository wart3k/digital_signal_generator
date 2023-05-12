// uart.h
#ifndef UART_H_
#define UART_H_

#include <string>
#include <windows.h>

class Uart {
public:
    // Constructor
    // port_name: Name of the serial port
    // baud_rate: Baudrate of the serial port
    Uart(const char* port_name, int baud_rate);

    // Destructor
    ~Uart();

    // Writes data to the serial port
    // data: Data to write
    // return: true on success, false on failure
    bool Write(const std::string& data);

    // Reads data from the serial port
    // return: Read data as std::string
    std::string Read();

private:
#ifdef _WIN32
    HANDLE file_descriptor_; // File descriptor of the serial port
#else
    int file_descriptor_; // File descriptor of the serial port
#endif
};

#endif  // UART_H_