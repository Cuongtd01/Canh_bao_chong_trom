#include <16F877A.h>
#device ADC=10
#fuses HS
#use delay(crystal=20000000)

#define sensor1 input(PIN_B2)
#define sensor2 input(PIN_B3)
#define reset  input(PIN_B4)

#define buzzer1(x) output_bit(PIN_B0,x)
#define buzzer2(x) output_bit(PIN_B1,x)

#define value 1
