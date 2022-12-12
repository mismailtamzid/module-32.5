/*
#include<stdio.h>
int recursion(int n, int m){
if(m != 0){
    return(n* recursion(n, m-1));
}
else
    return 1;
}

int main(){
int n, m;
scanf("%d%d", &n, &m);
int result = recursion(n, m);
printf("%d", result);
return 0;
}
*/
#include<stdio.h>
int pow(int n, int m){
if(m !=0){
    return(n*pow(n, m-1));
}
else{
    return 1;
}
}

int main(){
int n,m, result;
scanf("%d%d", &n, &m);
result = pow(n,m);
printf("%d", result);
return 0;
}
