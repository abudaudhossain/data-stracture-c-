#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct Node {
    int data;
    struct Node* link;
};
struct Node* head;

void insert_value(int value){
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;

    if(head == NULL){
        head = temp;
    }else{
        struct Node* temp2;
        temp2 = head;
        while(temp2 ->link != NULL){
            temp2 = temp2 -> link;
        }
        temp2 ->link = temp;
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

int deleteNode (int position){
    if(position == 1){
        struct Node* temp;
        temp = head;
        free(temp);
    }else{
        struct Node* temp1;
        temp1 = head;
        for(int i = 1; i <= position-2; i++){
            temp1 = temp1 -> link;
        }
        struct Node* temp2;
        temp2 = temp1 -> link;
        temp1 -> link = temp2 -> link;
        free(temp2);

    }
}


int main(){

    head = NULL;
    insert_value(3);
    insert_value(4);
    insert_value(5);

    print();
    printf("\n");
    deleteNode(2);
    print();
    return 0;
}
