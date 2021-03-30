// 201221 Aarhan ali khan
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
struct node *create(struct node *p, int n);
void print(struct node *p);
void reverseList();

int main()
{
    struct node *main, *a, *b, *odd, *even;
    main = (struct node *)malloc(sizeof(struct node));
    odd = (struct node *)malloc(sizeof(struct node));
    even = (struct node *)malloc(sizeof(struct node));
    main->data = 1;
    a = main;
    b = main;
    head = main;
    int l = 1;
    int n = 0;
    while (l != 0)
    {
        printf("enter the data:");
        scanf("%d", &n);
        b = create(b, n);
        printf("enter 0 to stop:");
        scanf("%d", &l);
    }
    print(a);

    odd->data = a->data;
    b = odd;

    while (a->next->next != NULL)
    {

        b = create(b, a->next->next->data);
        a = a->next->next;
    }

    b = odd;
    printf("first list\n");
    print(b);
    printf("second list\n");
    reverseList();
    b = even;
    even->data = head->data;
    while (head->next->next != NULL)
    {

        b = create(b, head->next->next->data);
        head = head->next->next;
    }
    b = even;
    print(b);

    return 0;
}

struct node *create(struct node *p, int n)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    p->next = new;
    new->data = n;
    new->next = NULL;
    return new;
}
void print(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
void reverseList()
{
    struct node *prevNode, *curNode;

    if (head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while (head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;

        
    }
}


