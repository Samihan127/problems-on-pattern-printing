//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4 iCol=5
//output:
/*    4 4 4 4 4 
      3 3 3 3 3
      2 2 2 2 2
      1 1 1 1 1    */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;

   for(iCnt=iRow;iCnt>0;iCnt--)
   {
       for(jCnt=1;jCnt<=iCol;jCnt++)
       {
           printf("%d\t",iCnt);
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
    