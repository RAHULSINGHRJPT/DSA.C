#include<stdio.h>
int fact(int n);
void main()
{ 
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int n)
{  
    int res;
    
    if(n==0)
    res =1;
    else if(n==1)
    res=1;
    else
    res=n*fact(n-1);
    return res;
}
