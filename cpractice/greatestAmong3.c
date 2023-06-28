#include<stdio.h>
//greatest numbet among 3 numbers
int main()
{
    int a = 50, b= 10,c=45;
   if (a > b){
    if(a>c)
    printf("the greatest number is %d",a);
    else
    printf("the greatest number is %d",c);
   }
    else if(b>c)
    printf("the greatest number is %d",b);
    else
    printf("the greatest number is %d",c);
    return 0;
}
