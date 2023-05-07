#include <stdio.h>
int main()
{
    float a,b,c,D,x,y;int ch;
    printf("Enter the co-efficients a,b, and c ::\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    D=(b*b)-(4*a*c);
     if(D==0)
        ch=1;
      else if(D>0)
        ch=2;
      else if(D<0&&D!=-1)
        ch=3;
      else if(D==-1)
        ch=4;
      switch(ch)
      {
        case 1:
            printf("The Roots of the Quadratic Equation for the given co-efficients are Real and Equal and the values are = %.2f and %.2f",((-b)/(2*a)),((-b)/(2*a)));
            break;
        case 2:
            printf("The Roots of the Quadratic Equation for the given co-efficients are Real and Distinct and the values are = %.2f and %.2f",(((-b)+sqrt(D))/(2*a)),(((-b)-sqrt(D))/(2*a)));
            break;
        case 3:
            printf("The Roots of the Quadratic Equation for the given co-efficients are Imaginary and the values are = %.2f+%.0fi and %.2f-%.0fi",((-b)/(2*a)),-D,((-b)/(2*a)),-D);
            break;
        case 4:
            printf("The Roots of the Quadratic Equation for the given co-efficients are Imaginary and the values are = %.2f+i and %.2f-i",((-b)/(2*a)),((-b)/(2*a)));
      }
    return 0;
}
