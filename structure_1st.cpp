#include <iostream>
#include <stdio.h>

using namespace std;

struct myStruct {
    string name;
    int age;
    double height;
};

int main() {

    struct myStruct s1;
    struct myStruct s2;

    s1.name = "Abu Daud Hossain";

    s1.age = 10;
    s2.age = 20;

    cout << "my name is " <<s1.name << " and I'm "<< s1.age <<" year's old" <<endl;
    return 0;
}
