#include<stdio.h>
int recursion(int i, int n){
if(i>n) return 0;
int s=recursion(i+1,n);
return s+i;
}

int main(){
int n;
scanf("%d", &n);
int ans=recursion(1,n);
printf("%d", ans);
return 0;
}
