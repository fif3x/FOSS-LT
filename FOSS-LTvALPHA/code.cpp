#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <algorithm>
#include <thread>
#include <chrono>
#include "othrFOSS-LT.h"
#include "networkFOSS-LT.h"
#include "systmFOSS-LT.h"

//------------------------------------------------------------------------------------------------------

class kernel {
public:
    static int krnl(){
        std::cout << "011011   O1O1O  00111  10111        0      001011\n";
        std::cout << "1        1   O  1      0            0        00\n";
        std::cout << "0101     O   1   001    101  ______ 1        11\n";
        std::cout << "1        O   1      1      0        1        10\n";
        std::cout << "1        1O1OO  01101  10110        011011   01\n";
        std::cout << "                                                                        -written by fif3x\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        system("cls");

        std::string command;

        while (true) { // Infinite loop

            std::cout << "$>";
            std::getline(std::cin, command); // Use getline to capture full input, including spaces

            if (command == "exit" || command == "0o0001" || command == "quitToDesktop") {
                quitToDesktop();
            }

            else if (command == "parrot" || command == "0o0002" || command == "animatedParrot") {
                parrot();
            }

            else if (command == ""){}

            else if (command == "Help"){
                std::cout << "Commands:" << std::endl;
                std::cout << "show ip - shows IP (ipconfig)" << std::endl;
                std::cout << "exit - Exit program" << std::endl;
                std::cout << "parrot - shows a colourful animated parrot (curl parrot.live)" << std::endl;
                std::cout << "ping - pings an IP that is chosen" << std::endl;
            }

            else if (command == "ping" || command == "0n0001") {
                ping();
            }

            else if (command == "ip" || command == "showip" || command == "show ip" || command == "show_ip"){
                show_ip();
            }

            else if (command == "stats" || command == "netstats" || command == "stat"){
                stats();
            }

            else if (command == "trcrt" || command == "traceroute"){
                traceRoute();
            }

            else if (command == "showSystemInfo" || command == "info" || command == "ssi" || command == "systemInfo" || command == "showInfo"){
                showSystemInfo();
            }

            else {
                std::cout << "Unknown command; Enter \"Help\" to see available commands.\n";
            }

        }

        std::cout << "Exiting... Press Enter to close. ";
        std::cin.ignore();
        std::cin.get();

        return 0;
    }
};

//------------------------------------------------------------------------------------------------------

int main() {

    kernel::krnl(); //call the kernel

    return 0; //return 0 (success)

}