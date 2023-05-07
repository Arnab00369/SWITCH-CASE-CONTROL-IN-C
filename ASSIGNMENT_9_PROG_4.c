#include <stdio.h>
int main()
{
    float a,b,c,max,min,min1;char ch;

    printf("Enter your choice for the following options ::\na)To check for Isosceles Triangle\nb)To check for Right-Angled Triangle\nc)To check for Equilateral Triangle\nd)Exit\nYour Choice is = ");
    scanf("%c",&ch);
     if(ch=='d')
     {
         printf("Thank you !!!!");
         exit(0);
     }
    else
    {
    printf("Enter the sides of a Triangle ::\nA = ");
    scanf("%f",&a);
    printf("B = ");
    scanf("%f",&b);
    printf("C = ");
    scanf("%f",&c);


            if((a>b)&&(b>c))
            {
             max=a;min=b;min1=c;
            }
            else if((b>a)&&(a>c))
            {
             max=b;min=a;min1=c;
            }
            else
            {
             max=c;min=a;min1=b;
            }
    }
    switch(ch)
    {
        case 'a' :
              if((a==b)||(b==c)||(c==a))
                printf("It is a Isosceles Triangle with sides of length = %.2f, %.2f and %.2f units",a,b,c);
              else
                printf("It is not a Isosceles Triangle ");
                break;
          case 'b' :
             if((max*max)==((min*min)+(min1*min1)))
                printf("It is a Right Angled Triangle with sides of length = %.2f, %.2f and %.2f units",a,b,c);
             else
                printf("It is not a Right Angled Triangle ");
                break;
          case 'c' :
                if((a==b)&&(b==c))
                    printf("It is a Equilateral Tr iangle with sides of length = %.2f, %.2f and %.2f units",a,b,c);
                else
                     printf("It is not a Equilateral Triangle ");
                     break;
          default :
            printf("ERROR!!!! Please check your input");
    }
    return 0;
}
