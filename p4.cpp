#include<stdio.h>

void encode(int num){
    int ans,a,b,c,d;
    a=num/1000;
    b=num%1000/100;
    c=num%1000%100/10;
    d=num%1000%100%10;
    ans=(a+5)%10*10+c*1000+b*1+d*100;
    printf("encode(%d)=%d\n",num,ans);
}
void decode(int num){
    int ans,a,b,c,d;
    a=num/1000;
    b=num%1000/100;
    c=num%1000%100/10;
    d=num%1000%100%10;
    ans=(a+5)%10*10+c*1000+b*1+d*100;
    printf("decode(%d)=%d\n",ans,num);
}

int main(){
    int num;
    while(num>0){
        printf("enter n(-1 to exit):");
        scanf("%d",&num);
        if(num>0){
            encode(num);
            decode(num);
        }
        else if(num==-1){
            printf("coding by 406650241\n");
        }
    }
}
