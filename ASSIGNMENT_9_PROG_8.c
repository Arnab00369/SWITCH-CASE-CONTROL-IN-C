#include <stdio.h>
int main()
{
    float a;int ch;
    printf("Enter a Positive or a Negative number to print its complement = ");
    scanf("%f",&a);
    if(a>0)
        ch=1;
    else if(a<0)
        ch=2;
    else
        printf("The number is %.0f",a);
    switch(ch)
    {
    case 1:
        printf("\nOutput is ::\nThe %.2f is converted to %.2f\n",a,-a);
        break;
    case 2:
        printf("\nOutput is ::\nThe %.2f is converted to %.2f\n",a,-a);
        break;
    }
    return 0;
}

