#include<stdio.h>

int main()
{
	double height=1, weight=1, BMI=0;
	while(height>0 && weight>0)
	{ 
		printf("請輸入你的身高:");
		scanf("%lf", &height);
		printf("請輸入你的體重:");
		scanf("%lf", &weight);
		height=height/100;
		BMI=weight/(height*height);
		printf("你的BMI為%.5lf\n", BMI);
		if(BMI<18.5)
        	printf("你的體重過輕!\n");
		else if(18.5<=BMI<24)
			printf("你的體重正常!\n");	
		else if(24<=BMI<27)
			printf("你的體重過重!\n");	
		else if(27<=BMI<30)
			printf("輕度肥胖!\n");	
		else if(30<=BMI<35)
			printf("中度肥胖!\n");
		else if(BMI>=35)
			printf("重度肥胖!\n");
		else
		printf("輸入不合法!\n!");
		printf("程式結束!\n");
	} 
	return 0;
} 
