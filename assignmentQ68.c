//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4 iCol=4
//output:
/*    1 2 3 4 5 
      -1 -2 -3 -4 -5
      1 2 3 4 5
      -1 -2 -3 -4 -5 
      1 2 3 4 5 */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;

   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2==0)
            {
                printf("-%d\t",jCnt);
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
      int iValue1=0,iValue2=0;

      printf("enter number of rows:");
      scanf("%d",&iValue1);

      printf("enter number of columns:");
      scanf("%d",&iValue2);


      pattern(iValue1,iValue2);

      return 0;
  }
    
    