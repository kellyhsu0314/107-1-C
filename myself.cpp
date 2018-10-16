#include<stdio.h>

int main(){
    int num,ans;
    printf("how many people:");
    scanf("%d",&num);
    while(num>0){
        ans=num/11*1000+num%11*100;
        printf("you need %d money\n",ans);
        printf("how many people:");
        scanf("%d",&num);
    }
}

/*現在有 N 個人要揪團一起團購一盒100元的蛋糕，而該蛋糕目前推出買十送一的優惠方案，請問要讓這 N 個人每人至少都可以得到一盒蛋糕，則至少需要多少錢呢？
輸入說明：
輸入一個正整數 N 代表要參加團購的人數。
輸出說明：
請輸出要買到 N 盒蛋糕至少需要多少錢。
範例輸入：help

輸入1:
8

輸入2:
12
範例輸出 ：

輸出1:
800

輸出2:
1100
*/
