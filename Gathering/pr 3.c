#include <stdio.h>

int fact(int f) {
    if(f == 1){
        return f;
    }
    else if(f <= 0){
        return 0;
    }else{
        return f *= fact(f-1);
    }
}
int main() {
    int fac;
    printf("Enter fact size : ");
    scanf("%d", &fac);
    if(fact(fac)==0){
        printf("Invalid Number");
    }else{
        printf("%d\n",fact(fac));
    }
}
 