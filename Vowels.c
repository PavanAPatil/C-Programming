#include<stdio.h>
int Count(char *Str)
{
    int Count=0;
    if(Str==NULL)
    {
        return -1;
    }
    while(*Str !='\0')
    {
        if((*Str=='a')||(*Str=='e')||(*Str=='i')||(*Str=='o')||(*Str=='u'))
        {
            Count++;
        }
        Str++;
    }
    return Count;
}
int main()
{
    char Arr[50];
    int iRet=0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    iRet=Count(Arr);
    printf("Number of Vowels are :%d\n",iRet);
}