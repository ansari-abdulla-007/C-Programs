// WAP to store and display book details(book id,title,price) using structure.
#include <stdio.h>
struct book{
    int id;
    char title[20];
    int price;
};
int main(){
    struct book s={101,"Kshitij",453};
    printf("Book id: %d\nTitle: %s\nPrice: %d",s.id,s.title,s.price);

    return 0;
}