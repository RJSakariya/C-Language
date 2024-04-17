#include <stdio.h>
#include <string.h>

struct Book {
    int book_id;
    char book_title[50];
    char book_author[50];
    char book_genre[50];
    char book_publisher[50];
    int book_publication_year;
    float book_price;
};

void main() {
    int N;
    printf("Enter the number of books: ");
    scanf("%d", &N);
    struct Book books[N];

    for (int i = 0; i < N; i++) {
        printf("Enter book %d details:\n", i + 1);
        printf("book_id : ");
        scanf("%d", &books[i].book_id);
        printf("Book Title: ");
        scanf("%s", books[i].book_title);
        printf("Book Author: ");
        scanf("%s", books[i].book_author);
        printf("Book Genre: ");
        scanf("%s", books[i].book_genre);
        printf("Book Publisher: ");
        scanf("%s", books[i].book_publisher);
        printf("Book Publication Year: ");
        scanf("%d", &books[i].book_publication_year);
        printf("Book Price: ");
        scanf("%f", &books[i].book_price);
    }

    printf("\n");
    for (int i = 0; i < N; i++) {
        printf("\n");
        printf("Book %d details:\n", i + 1);
        printf("Book ID: %d\n", books[i].book_id);
        printf("Book Title: %s\n", books[i].book_title);
        printf("Book Author: %s\n", books[i].book_author);
        printf("Book Genre: %s\n", books[i].book_genre);
        printf("Book Publisher: %s\n", books[i].book_publisher);
        printf("Book Publication Year: %d\n", books[i].book_publication_year);
        printf("Book Price: %.2f\n", books[i].book_price);
    }
}