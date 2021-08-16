#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;

void insertAtEnd(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;

    if(head == NULL){
        head = temp;
    }else{
        struct Node* temp2;
        temp2 = head;

        while(temp2 -> link != NULL){
            temp2 = temp2 -> link;
        }
        temp2 -> link = temp;
    }
}
void print(){
    struct Node* temp;
    temp = head;

    while(temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
}

void sort_insert(int value) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;

    if(head == NULL || temp -> data < head ->data ){
        temp -> link = head;
        head = temp;
    }else{
        struct Node* prep;
        struct Node* p;
        prep = head;
        p = prep -> link;

        while (p != NULL && p -> data < temp -> data){
            prep = p;
            p = p -> link;
        }
        prep -> link = temp;
        temp -> link = p;
    }

}

int main(){

    head = NULL;
    insertAtEnd(5);
    insertAtEnd(9);
    insertAtEnd(12);

    sort_insert(4);
    sort_insert(8);
    sort_insert(15);

    print();
    return 0;

}
