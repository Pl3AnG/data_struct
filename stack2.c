#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *ptr;
} NODE;

int main()
{
    NODE *newNode, *head = NULL, *pp = NULL;
    int menu;

    while (menu != 4)
    {
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Show\n");
        printf("4: Exit\n");
        printf("Enter menu: ");
        scanf("%d", &menu);

        // push
        if (menu == 1)
        {
            newNode = (NODE *)malloc(sizeof(NODE));
            printf("Enter new value: ");
            scanf("%d", &newNode->value);
            newNode->ptr = head;
            head = newNode;
        }
        // pop
        else if (menu == 2)
        {
            if (head == NULL)
            {
                printf("Stack is empty.\n");
            }
            else
            {
                newNode = head;
                head = head->ptr;
                free(newNode);
            }
        }
        // show
        else if (menu == 3)
        {
            if (head == NULL)
            {
                printf("Empty.\n");
            }
            else
            {
                newNode = head;
                while (newNode != NULL)
                {
                    printf("%d", newNode->value);
                    newNode = newNode->ptr;
                    printf("\n");
                }
            }
        }
        // exit
        else if (menu == 4)
        {
            printf("Exit your program.");
        }
        else
        {
            printf("Please enter menu only 1-4.\n");
        }
    }
}
