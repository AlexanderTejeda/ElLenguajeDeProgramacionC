#include <stdio.h>

int main(){
    float celsius, fhar;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius to Fahrenheit conversion table\n");
    while(celsius <= upper){
        fhar = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.2f\n", celsius, fhar);
        celsius = celsius + step;
    }
}