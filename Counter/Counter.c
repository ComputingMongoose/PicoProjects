#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define PA 6
#define PB 5
#define PC 4
#define PD 3
#define PE 2
#define PF 0
#define PG 1

void displayClear(){
            gpio_put(PA,false);
            gpio_put(PB,false);
            gpio_put(PC,false);
            gpio_put(PD,false);
            gpio_put(PE,false);
            gpio_put(PF,false);
            gpio_put(PG,false);
}

void displayN(int n){

    switch(n){
        case 0:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PE,true);
            gpio_put(PF,true);
            break;
        case 1:
            gpio_put(PB,true);
            gpio_put(PC,true);
            break;
        case 2:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PD,true);
            gpio_put(PE,true);
            gpio_put(PG,true);
            break;
        case 3:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PG,true);
            break;
        case 4:
            gpio_put(PB,true);
            gpio_put(PC,true);
            gpio_put(PF,true);
            gpio_put(PG,true);
            break;
        case 5:
            gpio_put(PA,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PF,true);
            gpio_put(PG,true);
            break;
        case 6:
            gpio_put(PA,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PE,true);
            gpio_put(PF,true);
            gpio_put(PG,true);
            break;
        case 7:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PC,true);
            break;
        case 8:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PE,true);
            gpio_put(PF,true);
            gpio_put(PG,true);
            break;
        case 9:
            gpio_put(PA,true);
            gpio_put(PB,true);
            gpio_put(PC,true);
            gpio_put(PD,true);
            gpio_put(PF,true);
            gpio_put(PG,true);
            break;
        default:
        break;
    }
}

int main()
{
    gpio_init(0);
    gpio_init(1);
    gpio_init(2);
    gpio_init(3);
    gpio_init(4);
    gpio_init(5);
    gpio_init(6);
    gpio_set_dir(0, true);
    gpio_set_dir(1, true);
    gpio_set_dir(2, true);
    gpio_set_dir(3, true);
    gpio_set_dir(4, true);
    gpio_set_dir(5, true);
    gpio_set_dir(6, true);
    int n=0;
    while (true) {
        displayClear();
        displayN(n);
        sleep_ms(1000);
        n++;
        if(n>9)n=0;
    }
}
