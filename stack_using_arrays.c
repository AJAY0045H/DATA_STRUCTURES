#include <stdio.h>
#include <stdlib.h>

int top = -1;
int cap = 8;

int *stack;

int push(int value){
    if(top == cap - 1){
        printf("Stack Overflow\nallocating new memory");
        cap *= 2;
       int *temp = realloc(stack,cap * sizeof(int));
       if(temp == NULL){
        printf("memory allocation failed");
        return 0;
       }
       stack = temp;
    }
    stack[++top] = value;
    return 1;
}
int pop(int *error){
    if(top < 0){
        *error = 1;
        return 0;
    }
    return stack[top--];
    
}
void display(){
    int right = top;
    while(right >= 0){
        printf("%d ",stack[right--]);
    }
    printf("\n");
}
int main(){
    stack = malloc(cap * sizeof(int));
    if(stack == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    while(1){
        int option;
        printf("Enter the option:\n1.push into stack\n2.pop the stack\n3.display the stack\n4.exit");
        scanf("%d",&option);
        switch(option){
            case 1:
                printf("Enter the element to push\n");
                int element;
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                int error = 0;
               int value = pop(&error);
                if(error){
                    printf("Stack underflow\n");
                    
                }else{
                    printf("popped value: %d\n",value);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                free(stack);
                return 0;
            default:
                printf("Enter the correct option\n");
                break;
        }
    }
    return 0;
}