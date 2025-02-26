#include "networkFOSS-LT.h"
#include <cstdlib>
#include <string>
#include <iostream>

void show_ip(){
    system("ipconfig");
};
void ping(){
    float ip;
    std::cin >> ip; // Read the IP as a float
    std::string pingCommand = "ping " + std::to_string(ip); // Convert float to string and concatenate
    system(pingCommand.c_str()); // Execute the command
};
void traceRoute(){
    system("systeminfo");
};
void stats(){
    system("netstat");
};