#include<stdio.h>
int main()
{
    int fnum,Snum,Tnum;
    printf("enter your first number");
    scanf("%d",&fnum);
    printf("enter your Second number");
    scanf("%d",&Snum);
    printf("enter your Third number");
    scanf("%d",&Tnum);
    
    if(fnum>Snum && fnum>Tnum)
    {
         printf("%d is greater",fnum);
    }
    else  if(fnum<Snum && Snum>Tnum)
    {
         printf("%d is greater",Snum);
    }
    else
    {
        printf("%d is greater",Tnum);
    }
    
    
    return 0;
    
}