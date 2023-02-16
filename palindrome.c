#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrom(iValue);

    if(bRet==true)
    {
        printf("Number is Palindrom\n");
    }
    else
    {
        printf("Number is Not palindrom\n");
    }
    return 0;
}
bool CheckPalindrom(int iNo)
{
    int iDigit=0,iRev=0,iTemp=0;
    iTemp=iNo;
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

}//modular approch