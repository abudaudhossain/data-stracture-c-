#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    struct Node* link;
};

struct Node* head;

void insert_value (int value) {
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;

    if (head == NULL) {
        head = temp;
    }else{
        struct Node* t;
        t = head;
        while (t -> link != NULL){
            t = t -> link;
        }
        t -> link = temp;
    }

};

void insert_f_value(int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp -> data = value;
    temp -> link = head;
    head = temp;
}

void print(){
    struct Node* temp;
    temp = head;

    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
};

int main() {
    head = NULL;

    insert_value(4);
    insert_value(5);
    insert_value(6);
    insert_f_value(3);

    print();

    return 0;
}
