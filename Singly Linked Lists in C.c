#include <stdio.h>
#include <stdlib.h>
typedef struct List
{
    int data;
    struct List *next;
}list;

void insert(list *head, int num)
{
    while(head -> next != NULL)
    {
        head = head -> next;
    }
    head -> next = (list*)malloc(sizeof(list));
    head -> next -> data = num;
    head -> next -> next = NULL;
}

void print(list *head)
{
    while(head -> next != NULL)
    {
        printf("%d -> ", head -> next -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

void count(list *head)
{
    int count = 0;
    while(head -> next != NULL)
    {
        count++;
        head = head -> next;
    }

    printf("Total Numbers : %d\n", count);
}

void search(list *head, int search)
{
    int found = 0;
    while(head -> next != NULL)
    {
        if(head -> next -> data == search)
        {
            found++;
            printf("Number Found!\n");
        }
         head = head -> next;
    }
    printf("Found Numbers = %d\n", found);
}

void delet(list *head, int num)
{
    while(head -> next != NULL)
    {
        if(head -> next -> data == num)
        {
            head -> next = head -> next -> next;
            printf("Number deleted!\n");
        }

        head = head -> next;
    }
}

void insertfront(list *head, int num)
{
    list *temp = head -> next;
    head -> next = (list*)malloc(sizeof(list));
    head -> next -> data = num;
    head -> next -> next = temp;
}

int main()
{
    list *head = (list*)malloc(sizeof(list));
    head -> next = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    print(head);
    count(head);
    search(head, 5);
    delet(head, 3);
    count(head);
    print(head);
    insertfront(head, 8);
    insertfront(head, 9);
    print(head);
    count(head);
    insert(head, 1);
    print(head);
    count(head);
}

