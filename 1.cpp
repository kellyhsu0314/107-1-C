#include<stdio.h>
#include<ctype.h>

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    char cont = 'Y';
    while(cont=='Y'){
            printf("enter n:");
        scanf("%d",&n);
        prime(n);
        if (prime(n)==1){
            printf("%d is a prime\n",n);
        }
        if (prime(n)==0){
            printf("%d is not a prime\n",n);
        }
        printf("continue(Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    return 0;
}
