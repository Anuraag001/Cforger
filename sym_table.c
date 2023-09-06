#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct symbol {
    char name[100];
    char datatype[100];
    int value;
    int line_number[5];
    int scope;
    struct symbol* next;
} symbol;

symbol* hash[100];

void initialize() {
    for (int i = 0; i < 100; i++) {
        hash[i] = NULL;
    }
}

symbol* create(const char* str,int length,char* type,int line_num) {
    symbol* temp = (symbol*)malloc(sizeof(symbol));
    strcpy(temp->name, str);
    strcpy(temp->datatype,type);
    temp->value = length;
    temp->line_number[0]=line_num;
    temp->next = NULL;
    temp->scope=-1;
    for (int i = 1; i < 5; i++) {
        temp->line_number[i] = 0;
    }
    return temp;
}

void hash_algo(char str[],int length,char type[],int line_num) {
    symbol* temp = create(str,length,type,line_num);
    int i = 0, c, ans = 0;
    while (str[i] != '\0') {
        c = str[i];
        ans += c;
        i++;
    }
    ans %= 100;
    if (hash[ans] == NULL) {
        hash[ans] = temp;
    } else {
        symbol* ptr = hash[ans];
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
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

