#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define fastio ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

using namespace std;
int main()
{
    int C,n;
    cin >> C;
    for(int Case = 0; Case < C; Case++)
    {
        cin >> n;
        string s[100] = {},l = "";
        for(int i = 0; i <n; i++) l += "*";
        for(int i = 1; i < (n-1)/2; i++)
        {
            string tp = "";
            tp = tp + "*";
            for(int j = 1; j < i; j++)
                tp = tp + " ";
            tp = tp + "*";
            for(int j = 1; j < (n-1)/2 - i; j++)
                tp += " ";
            s[i] = tp;
        }
        cout << l << endl;
        for(int i = 1; i < (n-1)/2; i++)
        {
            string tp2 = s[i];
            reverse(tp2.begin(),tp2.end());
            s[i] += "*";
            s[i] += tp2;
            cout << s[i] << endl;
        }
        cout << l << endl;

        for(int i = (n-2)/2; i >= 1; i--){
             cout << s[i] << endl;
        }

        cout << l << endl << endl;

    }
    return 0;
}
