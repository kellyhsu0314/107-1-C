#include<stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
    printf("%c", c);
}

int main(){
    int height;
    while(1){
        if(height==-1){
            printf("coding by 406650241");
            break;
        }
        else if(height>0){
            printf("enter height(-1 to exit):");
            scanf("%d",&height);
            for(int i=1;i<=height;i++){
                prchar(' ',i-1);
                prchar('*',(height-i)+1);
                printf("  ");
                prchar('*',i);
                printf("\n");
            }
        }
    }
}
