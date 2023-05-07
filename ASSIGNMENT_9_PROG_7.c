#include <stdio.h>
#include <math.h>
int main()
{
   int unit,ch;float bill;
   printf("Enter the Number of Units for the Month = ");
   scanf("%d",&unit);
   if((unit<=50)&&(unit>0))
    ch=1;
   else if((unit>50)&&(unit<=150))
    ch=2;
   else if((unit>150)&&(unit<=250))
   ch=3;
   else if(unit>250)
    ch=4;
   else
   {
       printf("ERROR!!!! You have given Wrong Input ");
       exit(0);
   }
   switch(ch)
   {
      case 1:
       bill = (0.5*unit)+(0.2*0.5*unit);
       printf("\nThe Electricity Bill of the User is = Rs. %.0f for consumption of %d units\n",round(bill),unit);
       break;
      case 2:
           bill = 25 +(0.75*(unit-50))+(0.2*(25 +(0.75*(unit-50))));
           printf("\nThe Electricity Bill of the User is = Rs. %.0f for consumption of %d units\n",round(bill),unit);
           break;
      case 3:
           bill = 100 +(1.2*(unit-150))+(0.2*(100 +(1.2*(unit-150))));
           printf("\nThe Electricity Bill of the User is = Rs. %.0f for consumption of %d units\n",round(bill),unit);
           break;
      case 4:
           bill = 220 +(1.5*(unit-250))+(0.2*(220 +(1.5*(unit-250))));
           printf("\nThe Electricity Bill of the User is = Rs. %.0f for consumption of %d units\n",round(bill),unit);
           break;

   }
    return 0;
}
