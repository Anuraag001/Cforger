#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Line{
    int line;
    struct Line* next;
} Line;

typedef struct symbol {
    char name[100];
    char token[100];
    int length;
    Line* line_num;
    int scope;
    struct symbol* next;
} symbol;

symbol* hash[100];

void initialize() {
    for (int i = 0; i < 100; i++) {
        hash[i] = NULL;
    }
}
Line* create_ll(int c){
    Line* temp=(Line*) malloc(sizeof(Line));
    temp->line=c;
    temp->next=NULL;
    return temp;
}

symbol* create(const char* str,int len,char* type) {
    symbol* temp = (symbol*)malloc(sizeof(symbol));
    strcpy(temp->name, str);
    strcpy(temp->token,type);
    temp->length = len;
    temp->line_num=NULL;
    temp->next = NULL;
    temp->scope=-1;

    return temp;
}
symbol* present(char str[],int check){

    symbol* ptr=hash[check];
    while(ptr!=NULL){
        if(!strcmp(ptr->name,str)) return ptr;
        ptr=ptr->next;
    }

    return NULL;

}
void hash_algo(char str[],int length,char type[],int line_p) {
    symbol* temp = create(str,length,type);
    int i = 0, c, ans = 0;
    while (str[i] != '\0') {
        c = str[i];
        ans += c;
        i++;
    }
    ans %= 100;
    if (hash[ans] == NULL) {
        hash[ans] = temp;
        temp->line_num=create_ll(line_p);
        return;
    } 
    if(present(str,ans)){
        symbol* p=present(str,ans);
        Line* ptr=p->line_num;
        if(ptr==NULL) ptr=create_ll(line_p);
        while(ptr->next!=NULL) ptr=ptr->next;

        ptr->next=create_ll(line_p);
        
    }
    else {
        symbol* ptr = hash[ans];
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->line_num=create_ll(line_p);
    }
}


