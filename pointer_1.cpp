#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int x;
    x = 10;
   // printf("%d\n", *(&x));
    int* px;
    px = &x;
    printf("%d\n", px);
    //printf("%d\n", *px);

    //*px = 20;
    printf("%d\n", *px);
    printf("%d\n", &px);

    int** pxx = &px;
    //printf("%d\n", pxx);
    //printf("%d\n",&pxx);
    printf("%d\n",*pxx);
    //printf("%d\n",**pxx);





    return 0;
}
