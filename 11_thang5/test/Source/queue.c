#include<stdio.h>
#include<stdlib.h>
// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Queue/queue.h"
#include "D:\Phuc_hard\TMA_SOLUTIONS\code\Makefile\11_thang5\test\Include\Queue\queue.h"


QUEUE Create_node_queue(int value){
    QUEUE temp;
    temp =(QUEUE)malloc(sizeof(struct queue));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

QUEUE init_queue(QUEUE front){
    front = NULL;
    return front;
}

int getsize_queue(QUEUE front){
    int size = 0;
    QUEUE p;
    for(p = front; p != NULL; p = p->next){
        size++;
    }
    return size;
}

QUEUE remove_front_queue(QUEUE front){
    if (front == NULL)
    {
        printf("Queue list rong, khong co gi de xoa ");
    }
    else{

        front = front->next;
    }
    return front;   
}

QUEUE add_rear_queue(QUEUE front, int value){
    QUEUE temp, p;
    temp = Create_node_queue(value);
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

int SearchValueAndReturnAtIndex_queue(QUEUE front, int value){
    int position =0;
    QUEUE p;
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

QUEUE ClearAll_queue(QUEUE front){
    QUEUE p;
    for (p = front; p !=NULL ; p=p->next)
    {
        front = NULL;
    }
    return front;
}
QUEUE Input_queue(){
    QUEUE front;
    front = init_queue(front);
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        front = add_rear_queue(front, value);
    }
    return front;
}
void printf_queue(QUEUE front){
    printf("\n");
    QUEUE p;
    for(p = front; p != NULL; p = p->next){
        printf("     %d", p->data);
    }
    printf("\n");
}

// int main(){
//     QUEUE front;
//     front = init_queue(front); 
//     int i;
//     for(i = 0; i < 10; ++i){
//         front = add_rear_queue(front, i);
//     }

//     printf_queue(front);

// }

//     front = Input_queue();
//     printf(" stack dang co ");
//     printf_queue(front);

//     printf("\nGET SIZE ");
//     int a = getsize_queue(front);
//     printf("%d", a);

//     printf("\n==Xoa phan tu dau==  ");
//     front = remove_front_queue(front);
//     printf_queue(front);

//     printf("\n==Thu them 1 phan tu vao linked list==");
//     int c;
//     printf("\n==Nhap gia tri can them=  ");  
//     scanf("%d",&c); 
//     front = add_rear_queue(front,c);
//     printf_queue(front);

//     printf("\n==Nhap tri so can tim==");
//     int e;
//     scanf("%d",&e);
//     printf("\n==Thu tim kiem 1 phan tu trong linked list==");
//     int index = SearchValueAndReturnAtIndex_queue(front, e);
//     printf("\nTim thay tai chi so %d", index);

//     printf("\n==clear clear all==");
//     front= ClearAll_queue(front);
//     printf_queue(front);
//     return 0;
// }