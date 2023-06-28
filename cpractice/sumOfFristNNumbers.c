#include<stdio.h>
//find the sum of frist N natural numbers
int main (){
    int sum =0;
    int a =10 ;
    //scanf("%d",&a);
    for(int i = 1; i<= a; i++){
        sum +=i;
    }
    printf("%d",sum);
    return 0;
}