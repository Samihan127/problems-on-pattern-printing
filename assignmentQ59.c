//accept number of rows and number of columns from user  and display below pattern
//input:iRow=3  iCol=4
//output:
/*   1 1 1 1
     2 2 2 2 
     3 3 3 3
     4 4 4 4        */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;

   for(iCnt=1;iCnt<=iRow;iCnt++)
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
    