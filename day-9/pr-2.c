#include <stdio.h>
main()
{
    float unit,ans;
    printf("Enter electricity units :");
    scanf("%f", &unit);
    if(unit <= 50 && unit > 0){
        ans =unit*0.50;
        printf("Electricity Bill = Rs. %0.2f",ans+((ans*20)/100)); 
    }
    else if(unit <= 150 && unit > 50){
        ans = ((unit-50)*0.75)+25;
        printf("Electricity Bill = Rs. %0.2f",ans+((ans*20)/100));
    }
    else if(unit <= 250 && unit > 150){
        ans = ((unit-150)*1.20)+100;
        printf("Electricity Bill = Rs. %0.2f",ans+((ans*20)/100)); 
    }
    else{
        ans = ((unit-250)*1.50)+220;
        printf("Electricity Bill = Rs. %0.2f",ans+((ans*20)/100));
    }
}