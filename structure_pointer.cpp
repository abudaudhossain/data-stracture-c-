#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct mystruct {
    int age;
    double height;

};

int main(){
    struct mystruct s1;
    s1.age = 10;
    s1.height = 4.7;
    printf("%f\n", s1.height);
    struct mystruct * ps1;
    ps1 = &s1;

    //(*ps1).age = 21;
    ps1 -> age = 21;
    //(*ps1).height = 5.1;
    ps1 -> height = 6.5;
    printf("%d\n", s1.age);
    printf("%f\n", s1.height);

    struct mystruct * ps;

    ps = (struct mystruct*)malloc(sizeof(struct mystruct));

    ps -> age =30;
    ps -> height = 4.7;
    printf("%d\n", ps -> age);
    printf("%f\n", ps -> height);

    return 0;
}
