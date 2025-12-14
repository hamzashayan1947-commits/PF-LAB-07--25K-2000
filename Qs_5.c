#include <stdio.h>

int main()
{
    int ward[7], i, sum = 0, ar[7];
    for (i = 1; i <= 7; i++)
    {
        printf("Enter number of patients in ward %d.\n", i );
        scanf("%d", &ward[i]);
        if (ward[i] > 10)
        {
            printf("Overcrowded.\n");
            sum = sum + ward[i];
            ar[i] = i;
            printf("ward %d need adminstrative review .\n" , ar[i]);
        }
        else if (ward[i] >= 6 && ward[i] <= 10)
        {
            printf("Stable.\n");
            sum = sum + ward[i];
            ar[i] = i;
            printf("ward %d does not need adminstrative review .\n" , ar[i]);
        }
        else if (ward[i] < 6)
        {
            printf("Underutilized.\n");
            sum = sum + ward[i];
            ar[i] = i;
            printf("ward %d need adminstrative review .\n" , ar[i]);
        }
    }
    printf("Total number of patients in hospital : %d\n", sum);
    
    return 0;
}
