#include <stdio.h>

int sum(int a) {
    if(a % 2 == 0){
        return a*a;
    }else{
        return 0;
    }
}

int main() {
    int a,s;
    printf("Enter fact size: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        s += sum(i);
    }
    printf("sum of even numbers squre : %d\n",s);
    main();
}
 