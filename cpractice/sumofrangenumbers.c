#include<stdio.h>
//sum of numbers between range
int main()
{
    int num=5,im=8,sum=0;
    //printf("please enter");
    //scanf("%d %d",&num,&im);
    for (int i = num; i <= im; i++)
    {
        sum +=i;
    }
    printf("%d",sum);
    return 0;
}
