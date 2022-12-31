#include<stdio.h>
struct queue
{
    int data[100];//队列的主体，用来储存内容
    int head;
    int tail;//队尾
};
int main()
{
    struct queue q;
    int i;
    //初始化队列;
    q.head=1;
    q.tail=1;
    for(i=1;i<=9;i++)
    {
        scanf("%d",&q.data[q.tail]);
        q.tail++;
    }    
    while (q.head<q.tail)
    {
        printf("%d ",q.data[q.head]);
        q.head++;
        q.data[q.tail]=q.data[q.head];
        q.tail++;
        q.head++;
    }
    getchar();getchar();
    return 0;
}