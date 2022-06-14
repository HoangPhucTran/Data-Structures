#include<stdio.h>
#include<stdlib.h>

// #include "/home/phuc/phuc_coder/code_test/make_file/test/Include/Linked_List/linkedlist.h"
#include "C:\Users\LENOVO\Downloads\test\Include\Linked_List\linkedlist.h"


linker Create_node_linkerlist(int value){
    linker temp;
    temp =(linker)malloc(sizeof(struct Linker_list));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

linker init_linker_list(){
    linker head;
    head = NULL;
    return head;
}

int getsize_linker_list(linker head){
    int size = 0;
    linker p;
    for(p = head; p != NULL; p = p->next){
        size++;
    }
    return size;
}

linker remove_head_linker_list(linker head){
    if (head == NULL)
    {
        printf("linker list rong, khong co gi de xoa ");
    }
    else{

        head = head->next;
    }
    return head;   
}
linker remove_tail_linker_list(linker head){
    if (head == NULL || head->next == NULL)
    {
        return remove_head_linker_list(head);
    }
    linker p = head;
    while (p->next->next != NULL)
    {   
        p = p->next;
    }
    p->next = p->next->next;
    return head;   
}

linker removeAtIndex_linker_list(linker head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        remove_head_linker_list(head);
    }
    else{
        int k =1;
        linker p = head;
        while (p->next->next != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            head = remove_tail_linker_list(head);
        }
        else{
            p->next = p->next->next;
        }   
    return head;
    }
}

linker add_head_linker_list(linker head, int value){
    linker temp, p;
    temp = Create_node_linkerlist(value);
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
linker add_tail_linker_list(linker head, int value){
    linker temp, p ;
    temp = Create_node_linkerlist(value);
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
linker addAtIndex_linker_list(linker head, int value, int position){
    if (position == 0 || head == NULL)
    {
        head = add_head_linker_list(head, value);
    }
    else{
        int k =1;
        linker p = head;
        while (p != NULL && k!= position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            head = add_tail_linker_list(head,value);
        }
        else{
            linker temp = Create_node_linkerlist(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;    
}

int SearchValueAndReturnAtIndex_linker_list(linker head, int value){
    int position =0;
    linker p;
    for (p = head; p !=NULL ; p=p->next)
    {
        if (p->data == value)
        {
            return position;
        }
        position++;
    }
    return -1;
}

linker ClearAll_linker_list(linker head){
    linker p;
    for (p = head; p !=NULL ; p=p->next)
    {
        head = NULL;
    }
    return head;
}

linker Input_linker_list(){
    linker head = init_linker_list();
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = add_tail_linker_list(head, value);
    }
    return head;
}

void printf_linker_list(linker head){
    printf("\n");
    linker p;
    for(p = head; p != NULL; p = p->next){
        printf("     %d", p->data);
    }

}

// int main(){
    
//     printf("\n==Tao 1 danh sach lien ket==");
//     linker head = Input_linker_list();

    // linker head = init_linker_list(); 
    // int i;
    // for(i = 0; i < 10; ++i){
    //     head = add_tail_linker_list(head, i);
    // }

    
//     printf(" linker list dang co ");
//     printf_linker_list(head);

//     head = ClearAll_linker_list(head);
//     printf(" aaa ");
//     printf_linker_list(head);
// }
    // printf("\nGET SIZE ");
    // int a = getsize_linker_list(head);
    // printf("%d", a);

    // int b;
    // printf("\n==Nhap so can xoa=  ");
    // scanf("%d", &b);   
    // printf("\n==Thu xoa 1 phan tu khoi linked list==  ");
    // head = removeAtIndex(head, b);
    // printf_linker_list(head);

    // printf("\n==Thu them 1 phan tu vao linked list==");
    // int c,d;
    // printf("\n==Nhap so can them =  ");
    // scanf("%d", &c); 
    // printf("\n==Nhap gia tri can them =  ");  
    // scanf("%d",&d); 
    // head = addAtIndex_linker_list(head, d, c);
    // printf_linker_list(head);

    // printf("\n==Nhap tri so can tim==");
    // int e;
    // scanf("%d",&e);
    // printf("\n==Thu tim kiem 1 phan tu trong linked list==");
    // int index = SearchValueAndReturnAtIndex_linker_list(head, e);
    // printf("\nTim thay tai chi so %d", index);

//     printf("\n==clear clear all==");
//     head = ClearAll_linker_list(head);
//     printf_linker_list(head);
//     return 0;
// }