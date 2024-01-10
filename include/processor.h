#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp


  // TODO: Declare any necessary private members
 private:
  float utilization_ = 0.0;
  float prevtotal_ = 0.0;
  float prevactive_ = 0.0;
  float previdle_ = 0.0;
};


// remember to send to the terminal: cat /proc/stat in order to understand it

#endif