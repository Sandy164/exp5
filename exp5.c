#include <stdio.h>
#include <stdlib.h>

int top = -1, stack[10];
void push();
void pop();
void display();

int main(){
    int choice;

    while (1){
        printf("\nSelect the operations to be performed on the stack:");
        printf("\n1.Push \n2.Pop\n3.Display\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);


        // if(choice==1){
        //     push();
        //     break;
        // }
        // else if(choice==2)
        // {
        //     pop();
        //     break;
        // }
        // else if(choice==3){
        //     display();
        //     break;
        // }
        // else{
        //     printf("Invalid Choice");
        // }
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!\n");
        }
    }
}

void push(){
    int x;

    if (top ==9)
    {
        printf("\nOverflow!!\n");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
}

void pop(){
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", stack[top]);
        top = top - 1;
    }
}

void display(){
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}