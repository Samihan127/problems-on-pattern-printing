//input: 4   4
/*output: 
         $ 2 3 4
         1 $ 3 4 
         1 2 $ 4
         1 2 3 $
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
   int iCnt=0;
   int jCnt=0;
   if(iRow!=iCol)
   {
       printf("invalid input....enter row number equal to column number\n");
       return;
   }
   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
        for(jCnt=1;jCnt<=iCol;jCnt++)
     {
         if(iCnt==jCnt)
         {
             printf("$\t");
         }
         else
         {
             printf("%d\t",jCnt);
         }
     }
     printf("\n");
   }
}
int main()
{
  int iValue1=0;
  int iValue2=0;

  printf("enter number of rows\n");
  scanf("%d",&iValue1);

  printf("enter number of columns\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);

  return 0;
}