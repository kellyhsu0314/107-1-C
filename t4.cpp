#include<stdio.h>

void temperature(float f){
    float c;
    c=(f-32)*5/9;
    printf("%.1f F = %.1f C\n",f,c);
}
//here have problem;
void year(int y1,int y2){
    int days;
    if(y2>y1){
        days=(y2-y1+1)*365+(y2-y1+2)/4;
        printf("days(%d,%d) = %d\n",y1,y2,days);
    }
    if(y2==y1){
        days=365;
        printf("days(%d,%d) = %d\n",y1,y2,days);
    }
}

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
    printf("%c", c);
}


void drawdiamond(int height){
    if(height%2!=0){
        for(int i=1;i<=height;i++){
            if(i<=5){
                prchar(' ',height-i-4);
                prchar('*',2*i-1);
            }
            if(i>5){
                prchar(' ',4-(height-i));
                prchar('*',2*(height-i)+1);
            }
        printf("\n");
        }
    }
}


int main(){
    float f;
    int y1,y2;
    int height;
    int choice;
    while(1){
        printf("1. f2c(f)\n");
        printf("2. daypassed(y1,y2)\n");
        printf("3. drawdiamond\n");
        printf("4. exit\n");
        printf("=>");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter temperature in F:");
                scanf("%f",&f);
                temperature(f);
                break;
            case 2:
                printf("enter year1 and year2:");
                scanf("%d %d",&y1,&y2);
                year(y1,y2);
                break;
            case 3:
                printf("enter height(-1 to exit):");
                scanf("%d",&height);
                if(height==-1){
                    printf("coding by 406650241");
                    return 0;
                }
                else if(height>=0){
                        drawdiamond(height);
                }
            break;
            case 4:
                printf("coding by 406650241");
                return 0;
        }
    }
}
