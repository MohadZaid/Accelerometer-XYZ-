/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME 1000 //msec

AnalogIn Xaxis(PA_0);
AnalogIn Yaxis(PA_1);
AnalogIn Zaxis(PA_4);



int main()
{
    while (true)
    {
        float valueX = Xaxis.read();
        float valueY = Yaxis.read();
        float valueZ =Zaxis.read();
        
        printf("X axis: %f, Y axis: %f, Z axis: %f \n", valueX,valueY,valueZ);
        printf("\n");
         thread_sleep_for(WAIT_TIME);

    }
}
