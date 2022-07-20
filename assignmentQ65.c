//accept number of rows and number of columns from user  and display below pattern
//input:iRow=4 iCol=4
//output:
/*    1 2 3 4
      5 6 7 8
      9 1 2 3
      4 5 6 7     */

  #include<stdio.h>

void pattern(int iRow,int iCol)
{
   int iCnt=0,jCnt=0,iNo=1;

	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(jCnt=1;jCnt<=iCol;jCnt++)
		{   
	        if(iNo<=9)
			{
				printf("%d ",iNo);
			}
			iNo++;
			if(iNo>9)
			{
				iNo=1;
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
    