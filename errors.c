#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
typedef struct Error{
    char str[INT_MAX];
    struct Error* next;
}Error;
Error* add_error(char put[]){
    Error* temp=(Error*) malloc(sizeof(Error));
    strcpy(temp->str,put);
    temp->next=NULL;

    return temp;
}

Error* push_error(char put[],Error* head){
    if(head==NULL) head=add_error(put);
    else{
        Error* ptr=head;
        while(ptr->next!=NULL) ptr=ptr->next;

        ptr->next=add_error(put);
    }
    return head;
}