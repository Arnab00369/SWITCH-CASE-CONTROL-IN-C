#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Day Number of a Week ::\n1-SUNDAY\n2-MONDAY\n3-TUESDAY\n4-WEDNESDAY\n5-THURSDAY\n6-FRIDAY\n7-SATURDAY\nDay Number = ");
    scanf("%d",&a);
    switch(a)
    {
    case 1 :
        printf("Hello!! This is Sunday, the RED LETTER DAY and FISRT DAY OF THE WEEK ");
        break;
    case 2 :
        printf("Hello!! This is Monday, the FIRST WORKING DAY ");
        break;
    case 3 :
        printf("Hello!! This is Tuesday, the SECOND WORKING DAY ");
        break;
    case 4 :
         printf("Hello!! This is Wednesday, the THIRD WORKING DAY ");
        break;
    case 5 :
         printf("Hello!! This is Thursday, the FOURTH WORKING DAY ");
        break;
    case 6 :
         printf("Hello!! This is Friday, the FIFTH WORKING DAY ");
        break;
    case 7 :
         printf("Hello!! This is Saturday, the LAST DAY OF THE WEEK ");
        break;
    default :
         printf("ERROR !! Check your Input ");
        break;

    }
    return 0;
}
