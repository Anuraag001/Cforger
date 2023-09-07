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
    char datatype[100];
    int value;
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

symbol* create(const char* str,int length,char* type) {
    symbol* temp = (symbol*)malloc(sizeof(symbol));
    strcpy(temp->name, str);
    strcpy(temp->datatype,type);
    temp->value = length;
    temp->line_num=NULL;
    //temp->line_number[0]=line_num;
    temp->next = NULL;
    temp->scope=-1;
    /*for (int i = 1; i < 5; i++) {
        temp->line_number[i] = 0;
    }*/

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

/*int main() {
    initialize();

    char string[][100] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "elderberry",
        "fig",
        "grape",
        "honeydew",
        "kiwi",
        "lemon",
        "mango",
        "nectarine",
        "orange",
        "pear",
        "quince",
        "raspberry",
        "strawberry",
        "tangerine",
        "ugli",
        "watermelon",
        "xylophone",
        "yellow",
        "zebra",
        "apple pie",
        "blueberry",
        "cantaloupe",
        "dragonfruit",
        "elephant",
        "fruit salad"
    };
    for (int i = 0; i < 29; i++) {
        hash_algo(string[i]);
    }

    for (int i = 0; i < 20; i++) {
        printf("Index %d", i);
        symbol* current = hash[i];
        while (current != NULL) {
            printf("->%s", current->name);
            current = current->next;
        }
        printf("\n");
    }

    // for (int i = 0; i < 100; i++) {
    //     symbol* current = hash[i];
    //     while (current != NULL) {
    //         symbol* temp = current;
    //         current = current->next;
    //     }
    // }

    return 0;
}*/

