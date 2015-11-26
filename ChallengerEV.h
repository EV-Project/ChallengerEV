/**
 * This Library contains the various CAN addresses and configuration values of the EV.
 * 
**/
#ifndef CHALLENGER_EV_H
#define CHALLENGER_EV_H

//Bit packing for the pedals.
const uint8_t reverseSwBit = 0;
const uint8_t frontSDBit = 1;
const uint8_t rearSDBit = 2;
const uint8_t estopBit = 3;
const uint8_t brakeWarnBit = 4;
const uint8_t throttleWarnBit = 5;


struct WheelID{
  const uint32_t managerID;   //ID of the wheel manager board
  const uint32_t motorReqID;  //ID of requests to the motor controller
  const uint32_t motorResID;  //ID of responses from the motor controller
  const uint32_t dashID;      //ID the dashboard can recieve on.
  const bool isFront;
};  

const uint32_t pedalsToDashID = 150;  //ID for the padals that is used by the display	


const int nWheels = 4;
const WheelID wheel[nWheels] = {
  {30,107,115,140, true},
  {31,108,116,141, true},
  {32,109,117,142, false},
  {33,110,118,143, false}
};




#endif