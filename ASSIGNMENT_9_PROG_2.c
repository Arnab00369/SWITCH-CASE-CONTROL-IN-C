#include <stdio.h>
int main()
{

    char ch;
    printf("Enter your choice ::\na. ADDITION\nb. SUBTRACTION\nc. MULTIPLICATION\nd. DIVISION\ne. EXIT\nYour choice is = ");
    scanf("%c",&ch);
    if(ch=='e')
            exit(0);
    else if(isdigit(ch))
    {
        printf("ERROR !!!! You are only allowed to enter provided letters as input");
       exit(0);

    }

    else
    {
       float b,c;
        printf("Enter two Numbers ::\nA = ");
        scanf("%f",&b);
        printf("B = ");
        scanf("%f",&c);


     switch(ch)
    {
    case 'a':
        printf("The Addition of %.2f and %.2f is = %.2f",b,c,b+c);
        break;
    case 'b':
        printf("The Subtraction of %.2f and %.2f is = %.2f",b,c,b-c);
        break;
     case 'c':
        printf("The Multiplication of %.2f and %.2f is = %.2f",b,c,b*c);
        break;
      case 'd':
        printf("The Division of %.2f and %.2f is = %.2f",b,c,b/c);
        break;

    }
    }
    return 0;

}
