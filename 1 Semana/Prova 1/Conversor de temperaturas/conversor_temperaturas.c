#include <stdio.h>

int main(){
    float temp, celsius,farenheit,kelvin;
    char letra;
    
    scanf("%f %s", &temp, &letra);

    switch(letra){
        case 'C': celsius = temp; break;
        case 'F': farenheit = temp; 
        celsius = (farenheit-32)/1.8;
        break;
        case 'K': kelvin = temp; 
        celsius = kelvin - 273.15;
        break;
        default: printf("essa escala não existe\n");
    }
    
    kelvin = celsius + 273.15;
    farenheit = celsius*1.8 + 32;

    printf("Celsius: %.2f \nFarenheit: %.2f \nKelvin: %.2f", celsius, farenheit, kelvin);

    return 0;
}
