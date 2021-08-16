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
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node -> data = value;
    new_node -> link = head;
    head = new_node;

}
void printList(){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> link;
    }
    printf("NULL \n");
}

void printMiddleValue(){
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    if(head != NULL){
        while(fast_ptr != NULL && fast_ptr -> link != NULL){
            fast_ptr = fast_ptr -> link -> link;
            slow_ptr = slow_ptr -> link;
        }
        printf("The middle element is [%d]\n\n", slow_ptr -> data);
    }

}

int main(){

    head = NULL;
    int i;
    for(i = 5; i > 0; i--){
        insertValue(i);
        printList();
        printMiddleValue();
    }


    return 0;
}
