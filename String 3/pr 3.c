#include<stdio.h>
#include<string.h>
main(){
    char name[100];
    printf("Enter any string: ");
    gets(name);
    printf("string langth: %d\n" ,strlen(name));
    main();
}