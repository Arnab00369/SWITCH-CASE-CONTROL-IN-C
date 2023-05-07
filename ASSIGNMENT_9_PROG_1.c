#include <stdio.h>
int main()
{
    int ch;
    printf("Enter the Month Number ::\nMonth Number = ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("The Number of Days in Month Number 1, i.e. January is 31 Days");break;
      case 2: printf("The Number of Days in Month Number 2, i.e. February is 28 Days");break;
      case 3: printf("The Number of Days in Month Number 3, i.e. March is 31 Days");break;
      case 4: printf("The Number of Days in Month Number 4, i.e. April is 30 Days");break;
      case 5: printf("The Number of Days in Month Number 5, i.e. May is 31 Days");break;
      case 6: printf("The Number of Days in Month Number 6, i.e. June is 30 Days");break;
      case 7: printf("The Number of Days in Month Number 7, i.e. July is 31 Days");break;
      case 8: printf("The Number of Days in Month Number 8, i.e. August is 31 Days");break;
      case 9: printf("The Number of Days in Month Number 9, i.e. September is 30 Days");break;
      case 10: printf("The Number of Days in Month Number 10, i.e. October is 31 Days");break;
      case 11: printf("The Number of Days in Month Number 11, i.e. November is 30 Days");break;
      case 12: printf("The Number of Days in Month Number 12, i.e. December is 31 Days");break;
      default: printf("ERROR !!!! You have given the Wrong Input");

    }
     return 0;
}
