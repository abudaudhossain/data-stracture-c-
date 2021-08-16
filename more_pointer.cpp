#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    //char ch = 'a';
    //char* c = NULL;
    //c = &ch;
    //printf("%d\n", &ch);
    //printf("%d\n", c);

    int x = 10;
    int* px1 = &x;
    int* px2 = px1;
    *px2 = 20;
    printf("%d\n", *px1);


    return 0;
}
