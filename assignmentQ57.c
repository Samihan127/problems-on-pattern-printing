//accept number of rows and number of columns from user  and display below pattern
//input:iRow=3  iCol=5
//output:
/*    5 4 3 2 1
      5 4 3 2 1
      5 4 3 2 1  */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;

   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
       for(jCnt=iCol;jCnt>0;jCnt--)
       {
           printf("%d\t",jCnt);
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
    