#include<stdio.h>

void ArithmeticComputatio(int a,int b){
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
}

void bmi(int m1,int m2){
    if(m1>0 && m2>0){
            for(int i=m1;i<=m2;i++){
                printf("%3d cm: %.1f ~ %.1f(kg)\n",i,18.5*(i/100.)*(i/100.),24*(i/100.)*(i/100.));
            }
    }
}

void prchar(char c,int n){
    for(int i=1;i<=n;i++){
        printf("%c",c);
    }
}

void drawver(int height){
    if(height>=0){
            for(int i=1;i<=height;i++){
                prchar(' ',height-i);
                prchar('*',i);
                printf(" ",2);
                prchar('*',i);
                printf("\n");
            }
    }
}

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
    int a,b;
    int m1,m2;
    int height;
    int num;
    int choice;
    while(1){
        printf("1.Arithmetic Computation\n");
        printf("2.List BMI ranges\n");
        printf("3.draw Four Vertical Triangles\n");
        printf("4.encode\n");
        printf("5.decodn\n");
        printf("6.exit\n");
        printf("=>");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("enter two integers:");
            scanf("%d %d",&a,&b);
            ArithmeticComputatio(a,b);
            break;
        case 2:
            printf("enter h(-1 to exit):");
            scanf("%d %d",&m1,&m2);
            if(m1>0&&m2>0){
                bmi(m1,m2);
            }
            else if(m1==-1&&m2==-1){
                return 0;
            }
            break;
        case 3:
            printf("enter height(-1 to exit):");
            scanf("%d",&height);
            if(height>0){
                drawver(height);
            }
            else if(height==-1){
                return 0;
            }
            break;
        case 4:
            printf("enter n(-1 to exit):");
            scanf("%d",&num);
            if(num>0){
                encode(num);
            }
            else if(num==-1){
                return 0;
            }
            break;
        case 5:
            printf("enter n(-1 to exit):");
            scanf("%d",&num);
            if(num>0){
                decode(num);
            }
            else if(num==-1){
                return 0;
            }
            break;
        case 6:
            return 0;
        }
    }
}
