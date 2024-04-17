#include <stdio.h>
#include <string.h>
enum Days{
    Monday=1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Days day;
    for (day = Monday; day <= Sunday; day++) {
        printf("Index is %d\n",day);
    }

    return 0;
}