#include<stdio.h>
#include<conio.h>
#define max_size 10
// this code show you how stack is performed 
int a[max_size],top=-1;
void push(){
    int n;
    if(top==max_size-1){
        printf("stack is overflow");
        
    }
    else{
        printf("enter the element ");
        scanf("%d",&n);
        top++;
        a[top]=n;
        
    }
}

void display(){
    if(top == -1){
        printf("stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",a[i]);
        }
    }
}

void pop(){
    int n;
    if(top == -1){
        printf("stack is empty");
    }
    else{
        n = a[top];
        top--;
        printf("poped element is %d",n);
    }
}



void main(){
    int choice;
    do{
    printf("\t\t\tStack\t\t\t\n");
    printf("1.push\n2.pop\n3.display\n4.exit");
    printf("\n");
    printf("enter the choice ");
    scanf("%d",&choice);
    
    
    switch(choice){
        case 1: push();break;
        case 2 : pop(); break;
        case 3 : display();break;
        default : printf("invalid choice");
        
    }
    }while(choice!=4);
}
