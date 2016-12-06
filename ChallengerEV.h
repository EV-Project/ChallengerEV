/**
 * This Library contains the various CAN addresses and configuration values of the EV.
 * 
**/
#ifndef CHALLENGER_EV_H
#define CHALLENGER_EV_H

//Bit packing for the pedals.
const uint8_t reverseSwBit = 0;
const uint8_t keySwitchBit = 1;
//const uint8_t frontSDBit = 1;
//const uint8_t rearSDBit = 2;
//const uint8_t estopBit = 3;
const uint8_t brakeWarnBit = 4;
const uint8_t throttleWarnBit = 5;
//const uint8_t redLightBit = 6;
//const uint8_t greenLightBit = 7;

//byte packing for pedal message
const uint8_t pedalThrottleByte = 0;
const uint8_t pedalBrakeByte = 1;
const uint8_t pedalFlagsByte = 2;




struct WheelID{
  const uint32_t managerID;   //ID of the wheel manager board
  const uint32_t motorReqID;  //ID of requests to the motor controller
  const uint32_t motorResID;  //ID of responses from the motor controller
  const uint32_t dashID;      //ID the dashboard can recieve on.
  const bool isFront;
  const uint32_t serialNumber[4];
};  

const uint32_t pedalsToDashID = 150;  //ID for the padals that is used by the display	

const uint32_t allPowerID = 29;	//ID for vehicle start/stop instructions
const uint8_t allPowerFlagsByte = 0;
const uint8_t allPowerOnValue = 255;
const uint8_t allPowerOffValue = 0;
const uint8_t allPowerStopValue = 170;	//0xAA



const int nWheels = 2;
//const WheelID wheel[nWheels] = {
const WheelID wheel[4] = {
  {30,107,115,140, true, {0xAA310000, 0x716C0034, 0x0036400E, 0x31384E45}},
  {31,108,116,141, true, {0xE2710000, 0x879A000F, 0x00089005, 0x32304E45}},
  {32,109,117,142, false, {0,0,0,0}},
  {33,110,118,143, false, {0,0,0,0}}
};




#endif