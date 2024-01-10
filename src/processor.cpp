#include "processor.h"
#include "linux_parser.h"
//#include <chrono>
//#include <thread>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
    /*
    prevtotal_ = LinuxParser::Jiffies();
    prevactive_ = LinuxParser::ActiveJiffies();
    previdle_ = LinuxParser::IdleJiffies();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    utilization_ = (LinuxParser::ActiveJiffies() - prevactive_ ) / (LinuxParser::Jiffies() - prevtotal_) ;
    return utilization_;
    */
    long prevtotal = prevtotal_;
    long prevactive = prevactive_;

    prevtotal_ = LinuxParser::Jiffies();
    prevactive_ = LinuxParser::ActiveJiffies();

    long totald = prevtotal_ - prevtotal;
    long actived = prevactive_ - prevactive;

    utilization_ = static_cast<float>(actived) / totald;
    return utilization_;
    //std::this_thread::sleep_for(std::chrono::milliseconds(500));
}