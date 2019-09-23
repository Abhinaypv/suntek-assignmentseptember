#include <stdio.h>
#include <string.h>
int isvowel(char c)
{
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    int i;
    for(i=0;i<10;i++)
    {
        if(vowels[i]==c)
            return 1;
    }
    return 0;
}
int main()
{
    int i,k=0;
    char n[50],t[50]="",a[50]="";
    printf("\n enter a string:");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
        if(!isvowel(n[i]))
        {
            t[k]=n[i];
            k++;
        }
    }
    strrev(t);
    k=0;
    for(i=0;n[i]!='\0';i++)
    {
        if(isvowel(n[i]))
        {
            a[i]=n[i];

        }
        else
        {
            a[i]=t[k];
            k++;
        }
    }
    printf("\n%s",a);

}
