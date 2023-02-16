//Accept Number from user from and Check Even or not

////////////////////////////////////////////////////////////////////
//
// Function Name  : CheckEven
// Description    : Perform Check Even or Not Even
// Input          : Integer
// Output         : Integer
// Author Name    : Kunal Sarangdhar Narkhede
// Date           : 8-Sept-2021
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>  //for Printf() abd Scanf()
#include<stdbool.h> //for bool datatype

bool CheckEven(int);  //Declaration

int main()    //Entry point function
{
    int iNo=0;
    bool bRet=false;

    printf("Enter the Number :\n");
    scanf("%d",&iNo);

    bRet=CheckEven(iNo);     //Function Call
    if(bRet==true)
    {
        printf("%d is even number\n",iNo);
    }
    else
    {
        printf("%d is not even number\n",iNo);
    }
    return 0;
}
bool CheckEven(int iValue)
{
   if((iValue%2)==0)
   {
       return true;
   }
   else
   {
       return false;
   }
}