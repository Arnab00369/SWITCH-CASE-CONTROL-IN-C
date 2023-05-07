#include <stdio.h>
int main()
{
    int var;
    printf("Enter your Choice ::\n1)Positive degree of ''Good''\n2)Comparative degree of ''Good''\n3)Superlative degree of ''Good''\nYour Choice is = ");
    scanf("%d",&var);
    switch(var)
    {
      case 1:
        printf("\nOutput is ::\nPositive degree :: Good\n");
        break;
      case 2:
        printf("\nOutput is ::\nComparative degree :: Better\n");
        break;
      case 3:
        printf("\nOutput is ::\nSuperlative degree :: Best\n");
      default:
        printf("\nOutput is ::\nInvalid\n");
    }
    return 0;
}
