//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4  iCol=4
//output:
/*    A B C D
      a b c d
      A B C D
      a b c d      */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0;
   char ch='A';
   char _ch='a';
   
   for(iCnt=1;iCnt<=iRow;iCnt++)
   {
        if(iCnt%2!=0)
        {
             for(jCnt=1,ch='A';jCnt<=iCol ;jCnt++,ch++)
             {
               printf("%c\t",ch);
             }
             printf("\n");
        }
        else
        {
              for(jCnt=1,_ch='a';jCnt<=iCol ;jCnt++,_ch++)
              {
                printf("%c\t",_ch);
              }
              printf("\n");
        }
   
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
    