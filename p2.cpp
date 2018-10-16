#include<stdio.h>

int main(){
    int m1,m2;
    while(m1>0 && m2>0){
        printf("enter h(-1 to exit):");
        scanf("%d %d",&m1,&m2);
        if(m1>0 && m2>0){
            for(int i=m1;i<=m2;i++){
                printf("%3d cm: %.1f ~ %.1f(kg)\n",i,18.5*(i/100.)*(i/100.),24*(i/100.)*(i/100.));
            }
        }
        else if(m1==-1&&m2==-1){
            printf("coding by 406650241\n");
        }
    }
}
