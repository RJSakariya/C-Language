#include <stdio.h>
main(){
    int l,j=0,a=0,b;
    printf("Enter any number :");
    scanf("%d",&l);
    if (l>=10)
    {
        a=l%10;
        while ((l>=10))
        {
            l/=10;
        }
    }
    b=a+l;
    printf("The sum of the first and the last digit : %d",b);
}