#include<stdio.h>
//Input:5
//Outout:120
int Factorial(int);   //Function Declaration
int main()
{
    int iNo=0,iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet=Factorial(iNo);      //Function call

    printf("Factorial is :%d\n",iRet);
}
int Factorial(int iValue)
{
   int iFact=1;
   int iCnt=0;
   if(iValue<0)    //Updator
   {
       iValue=-iValue;
   }
   //    1         2          3
   for(iCnt=1;iCnt<=iValue;iCnt++)
   {
       iFact=iFact*iCnt;   //4     iSum+=icnt;
   }
   return iFact;
}