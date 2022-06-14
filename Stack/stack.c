#include<stdio.h>
#include<stdlib.h>
#include "D:\Phuc_hard\TMA_SOLUTIONS\code\Makefile\Stack\stack.h"

node Create_stack(int value){
    node temp;
    temp =(node)malloc(sizeof(struct Stack));
    temp->next = NULL;
    temp->top = value;
    return temp;
}

node init(){
    node head;
    head = NULL;
    return head;
}

int getsize(node stack){
    int size = 0;
    node p;
    for(p = stack; p != NULL; p = p->next){
        size++;
    }
    return size;
}

node remove_top(node top){
    if (top == NULL)
    {
        printf("linker list rong, khong co gi de xoa ");
    }
    else{

        top = top->next;
    }
    return top;   
}
node remove_tail(node top){
    if (top == NULL || top->next == NULL)
    {
        return remove_top(top);
    }
    node p = top;
    while (p->next->next != NULL)
    {   
        p = p->next;
    }
    p->next = p->next->next;
    return top;   
}

node removeAtIndex(node head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        remove_top(head);
    }
    else{
        int k =1;
        node p = head;
        while (p->next->next != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            head = remove_tail(head);
        }
        else{
            p->next = p->next->next;
        }   
    return head;
    }
}

node add_head(node head, int value){
    node temp, p;
    temp = Create_stack(value);
    if (head == NULL)
    {
        head = temp;    
    }
    else{
        temp->next = head;
        head = temp;
    }
    return head;
}
node add_tail(node head, int value){
    node temp, p ;
    temp = Create_stack(value);
    if (head == NULL)
    {
        head = temp;    
    }
    else{
        p = head;
        while (p->next !=NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

node addAtIndex(node head, int value, int position){
    if (position == 0 || head == NULL)
    {
        head = add_head(head, value);
    }
    else{
        int k =1;
        node p = head;
        while (p != NULL && k!= position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            head = add_tail(head,value);
        }
        else{
            node temp = Create_stack(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;    
}

int SearchValueAndReturnAtIndex(node head, int value){
    int position =0;
    node p;
    for (p = head; p !=NULL ; p=p->next)
    {
        if (p->top == value)
        {
            return position;
        }
        position++;
    }
    return -1;
}

node ClearAll(node head){
    node p;    
    for (p = head; p !=NULL ; p=p->next)
    {
        head = NULL;
    }
    return head;
}

node Input(){
    node head = init();
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = add_tail(head, value);
    }
    return head;
}

void printf_list(node head){
    printf("\n");
    node p;
    for(p = head; p != NULL; p = p->next){
        printf("%5d", p->top);
    }
}
int main(){
    
    // printf("\n==Tao 1 danh sach lien ket==");
    // node head = Input();
    node head = init(); 
    int i;
    for(i = 0; i < 10; ++i){
        head = add_tail(head, i);
    }

    
    printf(" linker list dang co ");
    printf_list(head);

    printf("\nGET SIZE ");
    int a = getsize(head);
    printf("%d", a);

    // int b;
    // printf("\n==Nhap so can xoa=  ");
    // scanf("%d", &b);   
    // printf("\n==Thu xoa 1 phan tu khoi linked list==  ");
    // head = removeAtIndex(head, b);
    // printf_list(head);

    // printf("\n==Thu them 1 phan tu vao linked list==");
    // int c,d;
    // printf("\n==Nhap vi tri can them =  ");
    // scanf("%d", &c); 
    // printf("\n==Nhap gia tri can them =  ");  
    // scanf("%d",&d); 
    // head = addAtIndex(head, d, c);
    // printf_list(head);

    // printf("\n==Nhap so can tim== ");
    // int e;
    // scanf("%d",&e);
    // printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    // int index = SearchValueAndReturnAtIndex(head, e);
    // printf("\nTim thay tai chi so %d", index);

    printf("\n==clear clear all==");
    head = ClearAll(head);
    printf_list(head);

    return 0;
}