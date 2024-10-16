#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[18];
    cin >> fgets(a, 7, stdin);
    int sz = sizeof(a) / sizeof(a[0]);
    cout << sz << "\n";
    cout << a;
    return 0;
}