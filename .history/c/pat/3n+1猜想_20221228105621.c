#include<stdio.h>
int main()
{
    int n=0;//次数
    int i;//待检测的数
    printf("请输入待检测的数: ");
    scanf("%d",&i);
    while (i>1)
    {
        if(i%2==0){
            i=i/2;
        }else{
            i=(3*i+1)/2;
        }
        n++;
    }
    printf("循环的次数为%d",n);
    return 0;
}