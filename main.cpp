/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME 1000 //msec

AnalogIn Xaxis(PA_0); // X axis
AnalogIn Yaxis(PA_1); // Y axis 
AnalogIn Zaxis(PA_4); // Y axis



int main()
{
    while (true)
    {
        float valueX = Xaxis.read(); //Read X axis
        float valueY = Yaxis.read(); //Read Y axis
        float valueZ =Zaxis.read(); //Read Z axis 
        
        printf("X axis: %f, Y axis: %f, Z axis: %f \n", valueX,valueY,valueZ); //print values of X Y Z
        printf("\n"); //new line 
         thread_sleep_for(WAIT_TIME);

    }
}
