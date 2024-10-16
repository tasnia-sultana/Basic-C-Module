#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx = INT_MIN, mn = INT_MAX, mn_index = 0, mx_index = 0 ;
    for(int i = 0; i < n; i++){
        if(a[i] < mn){
            mn = a[i];
            mn_index = i;
        }

           if(a[i] > mx){
            mx = a[i];
            mx_index = i;
        }
    }
          swap(a[mn_index],a[mx_index]);
   
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}