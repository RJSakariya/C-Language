#include <stdio.h>

main(){
    float weight,height;
    printf("Enter weight in kilograms :");
    scanf("%f",&weight);
    printf("Enter height in meters :");
    scanf("%0.2f",&height);
    printf("Body Mass Index (BMI) :%0.2f",weight/(height*height));
}