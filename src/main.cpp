#include "ncurses_display.h"
#include "system.h"
#include <iostream>
#include "linux_parser.h"
#include "processor.h"

int main() {
  System system;
  //Processor processor;
  //std::cout << processor.Utilization() << "\n";
  //std::cout << LinuxParser::IdleJiffies() << "\n";
  //std::cout << LinuxParser::User(4326) << "\n";
  //std::cout << LinuxParser::UpTime(3792);
  /*std::vector<Process>& processes = system.Processes();
  for (Process& process : processes) {
    // Example operations:
    std::cout << "Process ID: " << process.Pid() << "\n";
    // ... other operations on process ...
  }*/
  //std::cout << LinuxParser::Command(3448);
  NCursesDisplay::Display(system);
}