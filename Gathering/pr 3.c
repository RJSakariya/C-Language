#include <stdio.h>

int fact(int f) {
    if(f <= 1){
        return f;
    }else{
        return f *= fact(f-1);
    }
}

int main() {
    int fac;
    printf("Enter fact size : ");
    scanf("%d", &fac);
    printf("%d\n",fact(fac));
}
 