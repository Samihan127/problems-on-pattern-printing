//accept number from user and display below pattern
//input:5
//output: # 1 * # 2 * # 3 * # 4 *
#include<stdio.h>
void pattern(int iNo)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      printf("#\t%d\t*\t",iCnt);
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