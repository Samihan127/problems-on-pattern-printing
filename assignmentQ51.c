//accept number from user and display below pattern
//input:5
//output: 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>
void pattern(int iNo)
{
   int iCnt=0;

   for(iCnt=iNo;iCnt>0;iCnt--)
   {
      printf("%d\t#\t",iCnt);
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