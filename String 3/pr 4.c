#include<stdio.h>
#include<string.h>
main(){
    char name_1[100];
    printf("Enter your name: ");
    gets(name_1);
    printf("your name is: ");
    puts(name_1);
    main();
}