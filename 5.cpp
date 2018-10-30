#include<stdio.h>

drawRect(int height,int width){
    for(int i=1;i<=height;i++){
        for(int j=1;j<=width;j++){
            printf("*");
        }
    printf("\n");
    }
}
void prchar(char c, int n){
	for(int i=1; i<=n; i++){
		printf("%c", c);
	}
}

void rdrawRect(int height,int width){
    if(height==1){
        prchar('*',width);
        printf("\n");
    }

    else{
        rdrawRect(height-1,width);
        prchar('*',width);
        printf("\n");
    }
}



int main(){
    int height, width;
    printf("Enter height and width: ");
    scanf("%d %d",&height,&width);
    printf("Draw using iteration\n");
    drawRect(height,width);
    printf("Draw using recursion\n");
    rdrawRect(height,width);
}

