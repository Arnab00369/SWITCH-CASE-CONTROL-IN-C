#include <stdio.h>
int main()
{
    int n,ch;
    printf("Enter a number :\nN = ");
    scanf("%d",&n);
    if(n%2==0)
        ch=1;
    else
    {
        printf("\nThe number %d is itself an Odd Number\n",n);
        exit(0);
    }
    switch(ch)
    {
      case 1:
          printf("\nThe upper nearest Odd Number of %d is = %d\n",n,n+1);
    }
    return 0;
}
