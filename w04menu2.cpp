#include<stdio.h>

void prchar(char c, int n){
	for(int i=1; i<=n; i++){
		printf("%c", c);
	}
}

void drawRect(int height, int width, int filled){
	if(filled==1){
		for(int i=1; i<=height; i++){
			prchar('*', width);
			printf("\n");
		}
	}
	else{
		for(int i=1; i<=height; i++){
			if(i==1 || i==height){
				prchar('*', width);
			}
			else{
				printf("*");
				prchar(' ', width-2);
				printf("*");
			}
		printf("\n");
		}
	}
} 

void drawVertTri(int height, int type, int filled){
	switch(type){
		case 1:
			if(filled==1){
				for(int i=1; i<=height; i++){
					prchar('*', i);
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=1; j<=height; j++){
						if(j==1 || i==j || i==height)
							printf("*");
						else
							printf(" ");
					}
					printf("\n");
				}
			}
			break;
		case 2:
			if(filled==1){
				for(int i=1; i<=height; i++){
					prchar(' ', height-i);
					prchar('*', i);
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=height; j>=1; j--){
						if(i==height || j==1 || i==j)
							printf("*");
						else
							printf(" ");
					}
					printf("\n");
				}
			}
			break;
		case 3:
			if(filled==1){
				for(int i=height; i>=1; i--){
					prchar('*', i);
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=1; j<=height; j++){
						if(i==1 || i+j==height+1 || j==1){
							printf("*");
						}
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			break;
		case 4:
			if(filled==1){
				for(int i=1; i<=height; i++){
					prchar(' ', i-1);
					prchar('*', (height-i)+1);
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=1; j<=height; j++){
						if(i==1 || i==j || j==height){
							printf("*");
						}
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			break;
	}
}
void drawTri(int height, int type, int filled){
	switch(type){
		case 1:
			if(filled==1){
				for(int i=1; i<=height; i++){
					prchar(' ', height-i);
					prchar('*', (2*i-1));
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=1; j<=2*height-1; j++){
						if(i+j==height+1 || i==height || j==(height+i)-1)
							printf("*");
						else{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			break;
		case 2:
			if(filled==1){
				for(int i=height; i>=1; i--){
					prchar(' ', height-i);
					prchar('*', 2*i-1);
					printf("\n");
				}
			}
			else{
				for(int i=1; i<=height; i++){
					for(int j=1; j<=2*height-1; j++){
						if(i==1 || i==j || i+j==(2*height-1)+1)
							printf("*");
						else
							printf(" ");
					}
					printf("\n");
				}
			}
			break;
	}
}
int main(void){
	int choice;
	int height, width, filled, type;

	while(1){
		printf("Main Menu\n");
		printf("1. Rectangle\n");
		printf("2. Vertical Triangle\n");
		printf("3. Tsosceles Triangle\n");
		printf("4. Exit\n");
		printf("=>");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("Enter height, width, filled: ");
				scanf("%d %d %d", &height, &width, &filled);
				drawRect(height, width, filled);
				break;
			case 2:
				printf("Enter height, type, filled: ");
				scanf("%d %d %d", &height, &type, &filled);
				drawVertTri(height, type, filled);
				break;
			case 3:
				printf("Enter height, type, filled: ");
				scanf("%d %d %d", &height, &type, &filled);
				drawTri(height, type, filled);
				break;
			case 4:
				return 0;

		}

	}
}
