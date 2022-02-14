/*  Sensor-Read-Template
*   Use the AnalogIn to read signals from light, temperature and force sensors. Add code to convert the read values into meaningful user outputs and print.
*
*   Author: James Chandler 2022
*/

#include "mbed.h"

#define WAIT_TIME_MS 100 

BufferedSerial pc(USBTX, USBRX, 115200);        //establish serial communications between PC and NUCLEO

AnalogIn LDR(PC_2); //LDR pin
AnalogIn TMP(PC_3); //TEMP Sensor pin
AnalogIn FSR(PA_1); //Force sensor pin


int main()
{

    
    while (true)
    {

        thread_sleep_for(WAIT_TIME_MS);
    }
}

