//gcd using recursion
#include <stdio.h>
int gcd(int n1, int n2);
int main()
{
   int n1,n2;
   printf("Enter two positive integers");
   scanf("%d %d",&n1,&n2);
   printf("GCD is %d."gcd(n1,n2));
   return 0;
}
int gcd(int n1,int n2)
{
    if (n2!=0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}
//gcd without recursion
#include <stdio.h>
int main()
{
    int a,b,big;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    for(big=a>b?a:b; big>=1;big--)
    {
        if(a%big==0 && b%big==0)
        {
            break;
        }
    }
    printf("gcd is %d",big);
    return 0;
}
