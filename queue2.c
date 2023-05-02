#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *ptr;
} NODE;

int main(){
    NODE *front = NULL, *rear = NULL, *newNode;
    int menu, data;

    while (menu != 4){
        printf("1: Enqueue\n");
        printf("2: Dequeue\n");
        printf("3: Show\n");
        printf("4: Exit\n");
        printf("Enter menu: ");
        scanf("%d", &menu);
        // Enqueue
        if (menu == 1){
            newNode = (NODE *)malloc(sizeof(NODE));
            printf("Enqueued data: ");
            scanf("%d", &newNode->value);
            newNode->ptr = NULL;
            if (rear == NULL){
                front = rear = newNode;
            }
            else{
                rear->ptr = newNode;
                rear = newNode;
            }
        }
        // Dequeue
        else if (menu == 2){
            // check queue empty?
            if (front == NULL){
                printf("Queue empty.\n");
            }
            // not empty
            else {
                // first node
                newNode = front;
                // change from first node => second node
                front = front->ptr;
                // dequeue จน queue not node change rear = NULLL
                if (front == NULL){
                    rear = NULL;
                }
                printf("Dequeue: %d\n", newNode->value);
                free(newNode);
            }
        }
        // Show
        else if (menu == 3){
            if (front == NULL){
                printf("Queue is empty.\n");
            }
            else {
                newNode = front;
                while (newNode != NULL){
                    printf("%d ", newNode->value);
                    newNode = newNode->ptr;
                }
                printf("\n");
            }
        }
        // Exit
        else if (menu == 4){
            printf("Exit your program.\n");
        }
        else{
            printf("Please enter menu only 1-4.\n");
        }
    }    
}
    
