//accept number from user and display below pattern
//input:5
//output: A B C D E
#include<stdio.h>
void pattern(int iNo)
{
   int iCnt=0;
   char ch='A';

   for(iCnt=0,ch='A';iCnt<iNo;iCnt++,ch++)
   {
      printf("%c\t",ch);
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