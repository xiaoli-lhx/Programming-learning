#include<stdio.h>
#include<string.h>
int main()
{
    char n[101];
    char *pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<=strlen(n);i++){
        sum=sum+n[i]-'0';
    }
    printf("%d",n);
    return 0;
}