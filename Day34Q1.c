#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int value){
    struct node* newnode = (struct node*)malloc(sizeof(strut node));
    if (newnode == NULL){
        printf("Stack Overflow\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}
int pop(){
    if (top == NULL){
        printf("Stack Underflow\n");
        exit(1);
    }
    struct node* temp = top;
    int value = temp->data;
    top = top->next;
    free(temp);
    return value;
}

int Postfix(char* exp){
    int i=0;

    while(exp[i] != '\0'){
        if (digit(exp[i])){
push(exp[i] - '0');
        }
        else {
            int val2 = pop();
            int val1 = pop();

            swtich (exp[i])
        }
    }
}