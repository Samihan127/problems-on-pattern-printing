//accept number of rows and number of columns from user  and display below pattern
//input:iRow=5 iCol=5
//output:
/*    a b c d e
      1 2 3 4 5
      a b c d e
      1 2 3 4 5
      a b c d e  */

#include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;
   char ch='a';

   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
       for(jCnt=1,ch='a';jCnt<=iCol;jCnt++,ch++)
       {
            if(iCnt%2!=0)
            {
               printf("%c\t",ch);
               
            }
            if(iCnt%2==0)
            {
                printf("%d\t",jCnt);
            } 
       }
       printf("\n");
   }

}
  int main()
  {
      int iValue1=0,iValue2=0;

      printf("enter number of rows:");
      scanf("%d",&iValue1);

      printf("enter number of columns:");
      scanf("%d",&iValue2);


      pattern(iValue1,iValue2);

      return 0;
  }
    