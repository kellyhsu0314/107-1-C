#include<stdio.h>

int main(){
    float height,weight;
    double bmi;
    while(height>0,weight>0){
        printf("Enter height and weight(-1 to exit):");
        scanf("%f %f",&height,&weight);
        bmi=weight/(height/100.)/(height/100.);
         if(height==-1&&weight==-1){
            printf("coding by 406650241");
            break;
        }
        else if(bmi<18.5){
            printf("your bmi = %.1f (too thin)\n",bmi);
            printf("the normal bmi(18.5) = %.1f. you need to gain %.1f kg to normal.\n",18.5*(height/100.)*(height/100.),18.5*(height/100.)*(height/100.)-weight);
        }
        else if(bmi>=18.5 && bmi<24){
            printf("your bmi = %.1f (normal)\n",bmi);
        }
        else if(bmi>=24 && bmi<27){
            printf("your bmi = %.1f (a little fat)\n",bmi);
            printf("the normal bmi(24) = %.1f. you need to reduce %.1f kg to normal.\n",24*(height/100.)*(height/100.),weight-24*(height/100.)*(height/100.));
        }
        else if(bmi>=27 && bmi<30){
            printf("your bmi = %.1f (fat)\n",bmi);
            printf("the normal bmi(24) = %.1f. you need to reduce %.1f kg to normal.\n",24*(height/100.)*(height/100.),weight-24*(height/100.)*(height/100.));
        }
        else if(bmi>=30 && bmi<35){
            printf("your bmi = %.1f (too fat)\n",bmi);
            printf("the normal bmi(24) = %.1f. you need to reduce %.1f kg to normal.\n",24*(height/100.)*(height/100.),weight-24*(height/100.)*(height/100.));
        }
        else if(bmi>=35){
            printf("your bmi = %.1f (very fat)\n",bmi);
            printf("the normal bmi(24) = %.1f. you need to reduce %.1f kg to normal.\n",24*(height/100.)*(height/100.),weight-24*(height/100.)*(height/100.));
        }

    }
}
