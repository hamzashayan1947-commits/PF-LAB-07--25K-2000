#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bag[8], i, flag = 0 , total = 0;
    for (i = 0; i < 8; i++)
    {
        printf("Enter weight of baggage %d :", i + 1);
        scanf("%d", &bag[i]);
        if (bag[i] > 0 && bag[i] <= 20)
        {
            printf("Weight = %d\n", bag[i]);
            printf("Free , No fine.\n");
            printf("Category : under 20 kg.\n");
            
        }
        else if (bag[i] > 20 && bag[i] <= 30)
        {
            printf("Weight = %d\n", bag[i]);
            printf("Fine = 500$.\n");
            printf("Category : between (21-30)kg.\n");
            total = total + 500 ;
        }
        else if (bag[i] > 30 )
        {
            printf("Weight = %d\n", bag[i]);
            printf("Fine = 1000$.\n");
            printf("Category : Above 30 kg.\n");
            total = total + 1000 ;
            flag = flag + 1;
        }
    }
    printf("Total fine collected = %d\n" , total);
    printf("Flagged baggages = %d\n" , flag);
    return 0;
}