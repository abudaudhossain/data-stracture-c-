#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void insertValue(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp ->link = NULL;

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

}
void print(){
    struct Node* temp;
    temp = head;

    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
}

//Find Length of a Linked List (Iterative and Recursive)
int getCount(){
    int countElement = 0;
    struct Node* current;
    current = head;

    while(current != NULL){
        current = current -> link;
        countElement++;
    }
    return countElement;
}


int main(){
    insertValue(5);
    insertValue(6);
    insertValue(9);
    insertValue(15);
    insertValue(6);
    insertValue(7);

    print();

    int numberElement = getCount();
    printf("\nNumber of Element:%d ",numberElement);

    return 0;
}
