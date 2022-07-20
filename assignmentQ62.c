//accept number of rows and number of columns from user  and display below pattern
//input:iRow=3 iCol=5
//output:
/*    A A A A A
      B B B B B 
      C C C C C     */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;
   char ch='A';

   for(iCnt=1,ch='A';iCnt<=iRow;iCnt++,ch++)
   {
       for(jCnt=1;jCnt<=iCol;jCnt++)
       {
           printf("%c\t",ch);
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
    