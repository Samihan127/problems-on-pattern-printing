//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4 iCol=4
//output:
/*    2 4 6 8 
      1 3 5 7 
      2 4 6 8 
      1 3 5 7    */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0,iNo1=1,iNo2=2;

   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
           if(iCnt%2!=0)
           {
              printf("%d\t",iNo2);
              iNo2++;
              iNo2++;
           }
           else
           {
              printf("%d\t",iNo1);
              iNo1++;
              iNo1++;
           }
           
        }
        printf("\n");
        iNo1=1;
        iNo2=2;
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
    
    