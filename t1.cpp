#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter two integers:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2&&n1%2==0&&n2%2==0){
        printf("%d > %d\n",n1,n2);
        printf("%d is even;%d is even\n",n1,n2);
        printf("coding by 406650241");
        }
    if(n1>n2&&n1%2==0&&n2%2!=0){
        printf("%d > %d\n",n1,n2);
        printf("%d is even;%d is odd\n",n1,n2);
        printf("coding by  406650241");
        }
    if(n1>n2&&n1%2!=0&&n2%2==0){
        printf("%d > %d\n",n1,n2);
        printf("%d is odd;%d is even\n",n1,n2);
        printf("coding by 406650241");
        }
    if(n1>n2&&n1%2!=0&&n2%2!=0){
        printf("%d > %d\n",n1,n2);
        printf("%d is odd;%d is odd\n",n1,n2);
        printf("coding by 406650241");
        }
    if(n1<n2&&n1%2==0&&n2%2==0){
        printf("%d < %d\n",n1,n2);
        printf("%d is even;%d is even\n",n1,n2);
        printf("coding by 406650241");
    }
    if(n1<n2&&n1%2!=0&&n2%2==0){
        printf("%d < %d\n",n1,n2);
        printf("%d is odd;%d is even\n",n1,n2);
        printf("coding by 406650241");
    }
    if(n1<n2&&n1%2==0&&n2%2!=0){
        printf("%d < %d\n",n1,n2);
        printf("%d is even;%d is odd\n",n1,n2);
        printf("coding by 406650241");
    }
    if(n1<n2&&n1%2!=0&&n2%2!=0){
        printf("%d < %d\n",n1,n2);
        printf("%d is odd;%d is odd\n",n1,n2);
        printf("coding by 406650241");
    }
    if(n1==n2&&n1%2==0&&n2%2==0){
        printf("%d = %d\n",n1,n2);
        printf("%d is even\n",n1);
        printf("coding by 406650241");
    }
    if(n1==n2&&n1%2!=0&&n2%2!=0){
        printf("%d = %d\n",n1,n2);
        printf("%d is odd\n",n1);
        printf("coding by 406650241");
    }
}
