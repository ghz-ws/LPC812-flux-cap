#include "mbed.h"
DigitalOut a1(P0_17);   //led. Hi blink
DigitalOut a2(P0_13);
DigitalOut a3(P0_14);
DigitalOut a4(P0_7);
DigitalOut a5(P0_8);
DigitalOut a6(P0_9);
DigitalOut a7(P0_15);
DigitalOut a8(P0_16);

#define wait_time 0.03

int main(){
    a1=1;
    a2=1;
    a3=1;
    a4=1;
    a5=1;
    a6=1;
    a7=1;
    a8=1;
    wait(1);
    
    while(1){
        a8=1;
        wait(wait_time);
        a7=1;
        wait(wait_time);
        a8=0;
        a6=1;
        wait(wait_time);
        a7=0;
        a5=1;
        wait(wait_time);
        a6=0;
        a4=1;
        wait(wait_time);
        a5=0;
        a3=1;
        wait(wait_time);
        a4=0;
        a2=1;
        wait(wait_time);
        a3=0;
        a1=1;
        wait(wait_time);
        a2=0;
        wait(wait_time);
        a1=0;
        wait(0.3);
    }
}
