#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float ans1,ans2;
    int t;
    cin >> t;
    int arr[t][4];
    for( int i =0; i < t; i++){
        cin >> arr[i][0];
        cin >> arr[i][1];
        cin >> arr[i][2];
        cin >> arr[i][3];
    }

    for(int j =0; j< t; j++){
       ans1 = arr[j][2]/arr[j][0];
       ans2 = ans1 / arr[j][1];
       if(ans2 > arr[j][3]){
            cout << (int)ans1 <<" "<< "YES"<<endl;
       }else {cout << (int)ans1 <<" "<< "NO" <<endl;

       }
    }

    return 0;
}
