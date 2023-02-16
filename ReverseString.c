#include<stdio.h>
void StrRevX(char *start)
{
   char *end=start;
   char temp;

   while(*end != '\0')
   {
       end++;
   }
   end--;

   while(start<end)
   {
       temp=*start;
       *start=*end;
       *end=temp;

       start++;
       end--;
   }
}
int main()
{
    char Arr[30];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Reverse String is : %s\n",Arr);

    return 0;
}