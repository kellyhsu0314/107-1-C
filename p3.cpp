#include<stdio.h>

void prchar(char c,int n){
    for(int i=1;i<=n;i++){
        printf("%c",c);
    }
}

int main(){
    int height;
    while(height>=0){
        printf("enter height(-1 to exit):");
        scanf("%d",&height);
        if(height>=0){
            for(int i=1;i<=height;i++){
                prchar(' ',height-i);
                prchar('*',i);
                printf(" ",2);
                prchar('*',i);
                printf("\n");
            }
        }
        else if(height==-1){
            printf("coding by 406650241");
        }
    }
}
