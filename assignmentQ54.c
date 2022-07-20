//accept number from user and display below pattern
//input:5
//output: 2 4 6 8 10
#include<stdio.h>
void pattern(int iNo)
{
   int iCnt=0;

   for(iCnt=2;iCnt<=2*iNo;iCnt++)
   {
       if(iCnt%2==0)
       printf("%d\t",iCnt);
   }
}
int main()
{
    int iValue=0;

    printf("enter number of elements:");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}