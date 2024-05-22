#include<stdio.h>
#include<stdlib.h>

#include "./linkedlist.h"

node Create_node(int value){
    node temp;
    temp =(node)malloc(sizeof(struct Linker_list));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

node init(){
    node head;
    head = NULL;
    return head;
}

int getsize(node head){
    int size = 0;
    node p;
    for(p = head; p != NULL; p = p->next){
        size++;
    }
    return size;
}

node remove_head(node head){
    if (head == NULL)
    {
        printf("NO DATA TO DELETE");
    }
    else{

        head = head->next;
    }
    return head;   
}
node remove_tail(node head){
    if (head == NULL || head->next == NULL)
    {
        return remove_head(head);
    }
    node p = head;
    while (p->next->next != NULL)
    {   
        p = p->next;
    }
    p->next = p->next->next;
    return head;   
}

node removeAtIndex(node head, int position){
    if(position == 0 || head == NULL || head->next == NULL){
        remove_head(head);
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
    temp = Create_node(value);
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
    temp = Create_node(value);
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
            node temp = Create_node(value);
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
        if (p->data == value)
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
        printf("\nINPUT QUANTITY OF ELEMENT = ");
        scanf("%d", &n);
    }while(n <= 0);
    int i;
    for(i = 0; i < n; ++i){
        printf("\nINPUT VALUE:");
        scanf("%d", &value);
        head = add_tail(head, value);
    }
    return head;
}

void printf_list(node head){
    printf("\n");
    node p;
    for(p = head; p != NULL; p = p->next){
        printf("     %d", p->data);
    }
}
int main(){
    node head = init(); 
    int i;
    for(i = 0; i < 10; ++i){
        head = add_tail(head, i);
    }
    
    printf("CURRENT VALUE:");
    printf_list(head);

    printf("\nCLEAR ALL");
    head = ClearAll(head);
    printf_list(head);

    return 0;
}