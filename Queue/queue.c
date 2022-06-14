#include<stdio.h>
#include<stdlib.h>
#include "queue.h"


node Create_node(int value){
    node temp;
    temp =(node)malloc(sizeof(struct queue));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

node init(node front){
    front = NULL;
    return front;
}

int getsize(node front){
    int size = 0;
    node p;
    for(p = front; p != NULL; p = p->next){
        size++;
    }
    return size;
}

node remove_front(node front){
    if (front == NULL)
    {
        printf("Queue list rong, khong co gi de xoa ");
    }
    else{

        front = front->next;
    }
    return front;   
}

node add_rear(node front, int value){
    node temp, p;
    temp = Create_node(value);
    if (front == NULL)
    {   
        front = temp;
    }
    else{
        p = front;
        while (p->next !=NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return front;
}

int SearchValueAndReturnAtIndex(node front, int value){
    int position =0;
    node p;
    for (p = front; p !=NULL ; p=p->next)
    {
        if (p->data == value)
        {
            return position;
        }
        position++;
    }
    return -1;
}

node ClearAll(node front){
    node p;
    for (p = front; p !=NULL ; p=p->next)
    {
        front = NULL;
    }
    return front;
}
node Input(){
    node front;
    front = init(front);
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        front = add_rear(front, value);
    }
    return front;
}
void printf_stack(node front){
    printf("\n");
    node p;
    for(p = front; p != NULL; p = p->next){
        printf("     %d", p->data);
    }
}

int main(){
    node front;
    front = init(front); 
    int i;
    for(i = 0; i < 10; ++i){
        front = add_rear(front, i);
    }
    // node front;
    // front = Input();
    // printf(" stack dang co ");
    // printf_stack(front);

    printf("\nGET SIZE ");
    int a = getsize(front);
    printf("%d", a);

    // printf("\n==Xoa phan tu dau==  ");
    // front = remove_front(front);
    // printf_stack(front);

    // printf("\n==Thu them 1 phan tu vao linked list==");
    // int c;
    // printf("\n==Nhap gia tri can them=  ");  
    // scanf("%d",&c); 
    // front = add_rear(front,c);
    // printf_stack(front);

    // printf("\n==Nhap tri so can tim==");
    // int e;
    // scanf("%d",&e);
    // printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    // int index = SearchValueAndReturnAtIndex(front, e);
    // printf("\nTim thay tai chi so %d", index);

    printf("\n==clear clear all==");
    front= ClearAll(front);
    printf_stack(front);
    return 0;
}