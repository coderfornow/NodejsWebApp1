#include<stdio.h>
int main()
{
    int sum,i,orign,rem,res;
        sum=0;
        res=0;
    int a[4]={60,40,37,40};

    for (i=0;i<=3;i++)
    {
        sum=sum+a[i];
    }
    orign=sum;

    while(orign!=0)
    {
        rem=orign%10;
        res=res + rem*rem*rem;
        orign=orign/10;

    }
    if(res==sum)
    printf("number is  an armstrong num");
    else
    printf("not ");

    return 0;


}
