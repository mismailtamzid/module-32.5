#include<stdio.h>
int recursion(int i, int n){
   if(i>n) return ;

    printf("%d ", i);
    recursion(i+1, n);

}

int main(){
    int n;
    scanf("%d", &n);
    recursion(1,n);

return 0;
}
