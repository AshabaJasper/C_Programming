#include <stdio.h>

int main (){
    //this program changes temperature from degree Celsius to Fahrenheit
    float temp_c, temp_f;
    printf("Please enter temperature in Degrees Celsius");
    scanf("%f", &temp_c);

    temp_f=((9/5) * temp_c + 32);

    printf("\n\n The Temperature in Fahrenheit is %.2f", temp_f);
}

