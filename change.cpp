#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void change(int *px) {
    *px = 20;
    printf("%d\n", px);
}

int main() {

    int x = 10;
    change(&x);
    printf("%d\n", x);

    return 0;
}
