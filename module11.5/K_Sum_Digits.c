#include<stdio.h>
#include<string.h>

int main(){
  int n; scanf("%d",&n);
  char a[1000001];scanf("%s",a);
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += a[i]-'0';
  }
  printf("%d\n", sum);
  return 0;
}