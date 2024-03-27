#include <stdio.h>
main(){
    int  num,ans=1; 
    printf("Enter the number :");
    scanf("%d",&num);
    for(int n=1;n<=num;n++){
        ans = ans*n;
    }
    printf(" factorial of a number : %d",ans);
}