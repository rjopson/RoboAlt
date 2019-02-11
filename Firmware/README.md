# RoboAlt Firmware

Overview of the Firmware folder organization:
+ embedded
  + embedded.ino is the "main" file for Arduino. This is what's uploaded to the chip
  + driver folder contains all code which interfaces with hardware. This code is abstracted as used as input for all other altimeter functionality
  + src folder contains all code to process sensor data, flight logic, interact with user, 
+ flightTests
  + real world flight test data which is used in various test programs. Formatted per textxFileFormatting guidelines
+ processDataTest
  + cpp program which simulates flight using flightTests data. All code is tested with the exception of the hardware drivers. flightTests data replaces this.
+ textFileFormatting
  + contains example of ascii text file output from altimeter
+ unit testing 
  + cpp program which uses gtest to impliment unit tests on classes which contain flight logic, process sensor data
