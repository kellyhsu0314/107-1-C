#include<stdio.h>

long fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    printf("fib(3)=%ld\n",fib(3));
    printf("fib(10)=%ld\n",fib(10));
    printf("fib(30)=%ld\n",fib(30));
}
