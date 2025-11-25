#include<stdio.h>
#include<string.h>
struct book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
struct book b1= {101,"C Programming","Dennis Ritchie"};
struct book b2= {102,"data structures","Mark weiss"};
struct book b3= {103,"Operating Systems","silberschatz"};
struct book*books[3]={&b1,&b2,&b3};
int search_id,i,found=0;
printf("Enter book id to search:");
scanf("%d",&search_id);
for(i=0;i<3;i++)
{
    if(books[i]->id==search_id)
    {
        printf("\nBook Found:\n");
        printf("ID: %d\n",books[i]->id);
        printf("Title: %s\n",books[i]->title);
        printf("Author: %s\n",books[i]->author);
        found=1;
        break;
    }
}
 if(!found)
    printf("Book with ID %d not found.\n",search_id);
return 0;
}