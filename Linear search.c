/* When the city planners developed your neighborhood, they accidentally numbered the houses wrong.
As such, the addresses of the houses on the street are in a random order.
Write a program using linear search algorithm to help the postman find a house*/

#include<stdio.h>
void main()
{
    int address[50], range, i, key, flag=0;
    printf("Linear search");
    printf("\nEnter the number of houses: ");
    scanf("\n%d", &range);
    printf("\nEnter the values: ");
    for(i=0;i<range;i++)
    {
        scanf("%d",&address[i]);
    }
    printf("\nEnter the house to be searched :");
    scanf("\n%d", &key);
    for(i=0;i<range;i++)
    {
        if(address[i]==key)
        {
            printf("\nThe house %d is found at position %d ", key, i+1);
            flag = 1;
            break;
        }

    }
     if (flag == 0)
        {
            printf("\nValue not found");
        }
}

