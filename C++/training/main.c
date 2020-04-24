#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch (a)
    {

    case 1:
        printf("january");
        break;
    case 2:
        printf("febuary");
        break;
    case 3:
        printf("march");
        break;
    default :
        printf("month is not found");
        break;

    }

    return 0;
}


