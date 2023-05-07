#include <stdio.h>
int main()
{
    int ch,year;
    printf("Enter your choice to check whether a Year is a Leap year or not ::\n1)Leap Year\n2)Normal Year\nYour Choice is = ");
    scanf("%d",&ch);
    if((ch>2)||(ch<1))
    {
        printf("\nERROR!!!! Please check your choice, you have given wrong input\n");
        exit(0);
    }
    else
    {
    printf("Enter the Year you want to check =");
    scanf("%d",&year);
    }
    switch(ch)
    {
      case 1:
        if(year%100==0)
        {
            if(year%400==0)
               printf("\nThe year %d is a Leap Year\n",year);
            else
               printf("\nThe year %d is not a Leap Year\n",year);
        }
        else if(year%4==0)
            printf("\nThe year %d is a Leap Year\n",year);
        else
               printf("\nThe year %d is not a Leap Year\n",year);
               break;
      case 2:
          if(year%100==0)
        {
            if(year%400==0)
               printf("\nThe year %d is not a Normal Year\n",year);
            else
               printf("\nThe year %d is a Normal Year\n",year);
        }
        else if(year%4==0)
            printf("\nThe year %d is not a Normal Year\n",year);
        else
               printf("\nThe year %d is a Normal Year\n",year);
               break;
    }
    return 0;
}
