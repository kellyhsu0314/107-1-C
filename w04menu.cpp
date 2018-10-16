#include<stdio.h>

void prchar(char c,int n){
	for(int i=1;i<=n;i++){
		printf("%c",c);
	}
}

int main(){
	int choice,height,width,type;
	while(1){
		printf("1.Rectangle\n");
		printf("2.Vertical Triangle\n");
		printf("3.exit\n");
		printf("=>");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("enter height and width:");
				scanf("%d %d",&height,&width);
				for(int i=1;i<=height;i++){
					if(i==1 || i==height){
						prchar('*',width);
					}
					else{
						printf("*");
						prchar(' ',width-2);
						printf("*");
					}
					printf("\n");
				}
				break;
			case 2:
				printf("enter height and type:");
				scanf("%d %d",&height,&type);
				switch(type){
					case 1:
						for(int i=1;i<=height;i++){
							for(int j=1;j<=height;j++){
								if(i==height||j==1||i==j){
									printf("*");
								}
								else{
									printf(" ");
								}
							}
						printf("\n");
						}
						break;
					case 2:
						for(int i=1;i<=height;i++){
							for(int j=1;j<=height;j++){
								if(i+j==height+1||j==height||i==height){
									printf("*");
								}
								else{
									printf(" ");
								}
							}
						printf("\n");
						}
						break;	
					case 3:
						for(int i=1;i<=height;i++){
							for(int j=1;j<=height;j++){
								if(i+j==height+1||j==1||i==1){
									printf("*");
								}
								else{
									printf(" ");
								}
							}
						printf("\n");
						}
						break;
					case 4:
						for(int i=1;i<=height;i++){
							for(int j=1;j<=height;j++){
								if(i==1||j==height||i==j){
									printf("*");
								}
								else{
									printf(" ");
								}
							}
						printf("\n");
						}
						break;	
				}
				break;
			case 3:
				return 0;
		}
	}
}
