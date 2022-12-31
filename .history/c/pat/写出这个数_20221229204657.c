#include<stdio.h>
#include<string.h>
int main()
{
    char n[101];
    char pinyin[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    scanf("%s",&n);
    for(int i=0;i<=strlen(n);i++){
        sum+=n[i];
    }
    printf("%d",n);
    return 0;
}