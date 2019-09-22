#include <stdio.h>
#include <string.h>
 int main()
{
char Str[100], temp;
int i, j, len;
printf("Please Enter any String");
gets(Str);
len = strlen(Str) - 1;
for (i=0;i<strlen(Str)/2; i++)
{
temp = Str[i];
Str[i] = Str[len];
Str[len--] = temp;
}
printf("\n String after Reversing = %s", Str);
return 0;
}
