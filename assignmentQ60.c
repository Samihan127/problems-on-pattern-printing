//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4 iCol=4
//output:
/*    A B C D
      A B C D
      A B C D
      A B C D     */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;
   char ch='A';

   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
       for(jCnt=1,ch='A';jCnt<=iCol;jCnt++,ch++)
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
    