#include<stdio.h>
#include<string.h>
main(){
    char name[100];
    printf("Enter any string: ");
    gets(name);
    printf("Lower case string : ");
    puts(strlwr(name));
    main();
}