#include<stdio.h>
#include<ctype.h>

int checkSqrt(int n){
    for(int i=1;i<=n;i++){
        if(n==i*i){
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    int i;
    char cont='Y';
    while(cont=='Y'){
        printf("enter n:");
        scanf("%d",&n);
        checkSqrt(n);
        if (i=checkSqrt(n)){
            printf("yes. %d = %d x %d\n",n,i,i);
        }else{
            printf("no.\n");
        }
        printf("continue(Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    return 0;
}
