#include <stdio.h>
main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    while (n >0){
        if (n%2 != 0)
        {
            printf("%d\t",n);
        }
        n--;    
    }
}