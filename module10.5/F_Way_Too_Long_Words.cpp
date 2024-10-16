#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        char s[101]; cin >> s;
        int length = strlen(s);
        if(length <= 10){
            cout << s;
        }
        else{
            cout << s[0] << length - 2 << s[length - 1];
        }
        cout << "\n";

    }
    return 0;
}