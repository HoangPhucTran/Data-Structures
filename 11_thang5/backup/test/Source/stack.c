#include<stdio.h>
#include<stdlib.h>
// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Stack/stack.h"
#include "C:\Users\LENOVO\Downloads\test\Include\Stack\stack.h"




node Create_stack(int value){
    node temp;
    temp =(node)malloc(sizeof(struct Stack));
    temp->next = NULL;
    temp->top = value;
    return temp;
}

node init_stack(){
    node head;
    head = NULL;
    return head;
}

int getsize_stack(node stack){
    int size = 0;
    node p;
    for(p = stack; p != NULL; p = p->next){
        size++;
    }
    return size;
}

node remove_top_stack(node top){
    if (top == NULL)
    {
        printf("linker list rong, khong co gi de xoa ");
    }
    else{

        top = top->next;
    }
    return top;   
}
node remove_tail_stack(node top){
    if (top == NULL || top->next == NULL)
    {
        return remove_top_stack(top);
    }
    node p = top;
    while (p->next->next != NULL)
    {   
        p = p->next;
    }
    p->next = p->next->next;
    return top;   
}

node removeAtIndex_stack(node head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        remove_top_stack(head);
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
            head = remove_tail_stack(head);
        }
        else{
            p->next = p->next->next;
        }   
    return head;
    }
}

node add_head_stack(node head, int value){
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
node add_tail_stack(node head, int value){
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

node addAtIndex_stack(node head, int value, int position){
    if (position == 0 || head == NULL)
    {
        head = add_head_stack(head, value);
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
            head = add_tail_stack(head,value);
        }
        else{
            node temp = Create_stack(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;    
}

int SearchValueAndReturnAtIndex_stack(node head, int value){
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

node ClearAll_stack(node head){
    node p;    
    for (p = head; p !=NULL ; p=p->next)
    {
        head = NULL;
    }
    return head;
}

node Input_stack(){
    node head = init_stack();
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = add_tail_stack(head, value);
    }
    return head;
}

void printf_list_stack(node head){
    printf("\n");
    node p;
    for(p = head; p != NULL; p = p->next){
        printf("%5d", p->top);

    }
        printf("\n");
}
// int main(){
    
//     printf("\n==Tao 1 danh sach lien ket==");

//     node head = init_stack(); 
//     int i;
//     for(i = 0; i < 10; ++i){
//         head = add_tail_stack(head, i);
//     }
//     printf(" linker list dang co ");
//     printf_list_stack(head);

//         printf("\n==clear clear all==");
//     head = ClearAll_stack(head);
//     printf_list_stack(head);
//             printf("\n==clear adadasdasd all==");
// }

    
    // printf(" linker list dang co ");
    // printf_list_stack(head);

    // printf("\nGET SIZE ");
    // int a = getsize_stack(head);
    // printf("%d", a);

    // int b;
    // printf("\n==Nhap so can xoa=  ");
    // scanf("%d", &b);   
    // printf("\n==Thu xoa 1 phan tu khoi linked list==  ");
    // head = removeAtIndex_stack(head, b);
    // printf_list_stack(head);

    // printf("\n==Thu them 1 phan tu vao linked list==");
    // int c,d;
    // printf("\n==Nhap vi tri can them =  ");
    // scanf("%d", &c); 
    // printf("\n==Nhap gia tri can them =  ");  
    // scanf("%d",&d); 
    // head = addAtIndex_stack(head, d, c);
    // printf_list_stack(head);

    // printf("\n==Nhap so can tim== ");
    // int e;
    // scanf("%d",&e);
    // printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    // int index = SearchValueAndReturnAtIndex_stack(head, e);
    // printf("\nTim thay tai chi so %d", index);

//     printf("\n==clear clear all==");
//     head = ClearAll_stack(head);
//     printf_list_stack(head);

//     return 0;
// }