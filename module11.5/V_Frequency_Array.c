// #include<stdio.h>
// int main(){
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int cnt[m+1];
//     for(int i = 1; i <=m; i++){
//         cnt[i] = 0;
//     }
//     for(int i = 0; i < n; i++){
//         cnt[a[i]]++;
//     }
//      for(int i = 1; i <= m; i++){
//         printf("%d\n",cnt[i]);
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int cnt[m+1];
    for(int i = 1; i <=m; i++){
        cnt[i] = 0;
    }
    for(int i = 0; i < n; i++){
    int num; scanf("%d", &num);
    cnt[num]++;
    }
     for(int i = 1; i <= m; i++){
        printf("%d\n",cnt[i]);
    }
    return 0;
}