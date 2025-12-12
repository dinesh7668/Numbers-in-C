#include<stdio.h>
int c=0;
int dig(int x)
{
   // int c=0;
    while(x>0)
    {
        x=x/10;
        c++;
    }
    printf("there are %d digits in noumber \n",c);
    return 0;
}
int main()
{
   int n,a[100],i=0,x=0,j;
   printf("enter a no. ");
   scanf("%d",&n);
   dig(n);
    while(n>0)
    {
         a[i]=n%10;
         n=n/10;
         i++;
         x++;
    }
     for(j=x-1;j>=0;j--)
     {
      switch (a[j])
        {
            case 0:
            printf("zero ");break;
            
            case 1:
            printf("one ");break;
            case 2:
            printf("two ");break;
            case 3:
            printf("three ");break;
            case 4:
            printf("four ");break;
            case 5:
            printf("five ");break;
            case 6:
            printf("six ");break;
            case 7:
            printf("seven ");break;
            case 8:
            printf("eight ");break;
            case 9:
            printf("nine ");break;
        }
     }
 return 0;
}