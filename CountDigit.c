#include<stdio.h>
int CountDigit(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);
    printf("Count is %d\n",iRet);
    return 0;
}
int CountDigit(int iNo)
{
    int iCount=0;
    int iDigit=0;
    if(iNo==0)
    {
        return 1;
    }
    if(iNo<0)    //Input updator
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iCount++;      //iCount=iCount+1;
        iNo=iNo/10;
    }
    return iCount;
}

