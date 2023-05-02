#include <stdio.h>

#define MAX_QUEUE 10
#define EMPTY_QUEUE -1

int main(){
    int queue[MAX_QUEUE];
    int front, rear, i, menu;

    front = rear = EMPTY_QUEUE;

    while (menu != 4){
        printf("1: Enqueue\n");
        printf("2: Dequeue\n");
        printf("3: Show\n");
        printf("4: Exit\n");
        printf("Enter menu: ");
        scanf("%d", &menu);

        // Enqueue
        if (menu == 1){
            if ((rear + 1) % MAX_QUEUE == front){
                printf("Queue overflow.\n");
            }
            else{
                if (front == EMPTY_QUEUE){
                    rear = front = 0;
                }
                else{
                    rear = (rear + 1) % MAX_QUEUE;
                }
                printf("Enter data: ");
                scanf("%d", &queue[rear]);
            }
        }
        // Dequeue
        else if (menu == 2){
            if (front == EMPTY_QUEUE){
                printf("Queue empty.\n");
            }
            else{
                printf("Dequeue: %d\n", queue[front]);
                if (front == rear){
                    front = rear = EMPTY_QUEUE;
                }
                else{
                    front = (front + 1) % MAX_QUEUE;
                }
            }
        }
        //  Show
        else if (menu == 3){
            if (front == EMPTY_QUEUE){
                printf("Queue empty.\n");
            }
            else{
                i = front;
                while (i != rear){
                    printf("%d ", queue[i]);
                    i = (i + 1) % MAX_QUEUE;
                }
                printf("%d\n", queue[i]);
            }
        }
        // Exit
        else if (menu == 4){
            printf("Exit your program.\n");
            break;
        }
        else{
            printf("Please enter menu only 1-4.\n");
        }
    }
}
