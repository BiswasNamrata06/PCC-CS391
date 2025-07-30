#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value){
    if(top==MAX-1){
        printf("Stack overflow!Cannot push %d\n",value);
    }
    else{
        top++;
        stack[top]=value;
        printf("%d pushed into the stack\n",value);
    }
}
void pop(){
    if(top==-1){
        printf("Stack Underflow!Cannot pop.\n");
    }
    else{
        printf("%d popped from stack.\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("Stack is Empty.\n");
    }
    else{
        printf("Top element is %d\n",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice,value,flag=1;
    while(flag==1){
        printf("Stack Menu:");
    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the value to push:\n");
        scanf("%d",&value);
        push(value);
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
    case 5:
        flag=0;
        break;
    
    default:
        printf("Invalid Input!\n");
        break;
    }
    }
    
}