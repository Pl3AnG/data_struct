#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK 5
#define EMPTY_STACK -1

int main()
{
    int stack[MAX_STACK];
    int tos = EMPTY_STACK;
    int menu, i;

    while (menu != 4)
    {
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Show\n");
        printf("4: Exit\n");
        printf("Enter menu: ");
        scanf("%d", &menu);

        // Push
        if (menu == 1)
        {
            if ((tos + 1) == MAX_STACK)
            {
                printf("STACK IS OVERFLOW.\n");
            }
            else
            {
                tos++;
                printf("Enter data: ");
                scanf("%d", &stack[tos]);
                printf("Push complete.\n");
            }
        }

        // Pop
        else if (menu == 2)
        {
            if (tos == EMPTY_STACK)
            {
                printf("STACK IS EMPTY.\n");
            }
            else
            {
                printf("Pop: %d\n", stack[tos]);
                tos--;
            }
        }

        // Show
        else if (menu == 3)
        {
            for (i = tos; i >= 0; i--)
            {
                if (i == tos)
                {
                    printf("  |------|\n");
                    printf("%d |  %d  |\n", i, stack[i]);
                }
                else if (i == 0)
                {
                    printf("%d |  %d  |\n", i, stack[i]);
                    printf("  |------|\n");
                }
                else
                {
                    printf("%d |  %d  |\n", i, stack[i]);
                }
            }
        }
        else
        {
            printf("Exit your program.\n");
            break;
        }
    }
}
