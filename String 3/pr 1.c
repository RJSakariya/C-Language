#include<stdio.h>
#include<string.h>
main(){
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("WELCOME ");
    puts(strupr(name));
    main();
}