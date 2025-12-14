#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cars[10], total = 0, final_total = 0, over_s = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter time in hours : ");
        scanf("%d", &cars[i]);

        if (cars[i] > 0 && cars[i] <= 2)
        {
            int fare = 50;
            total = fare * cars[i];
            final_total = final_total + total;
            printf("Parking fee of car %d : %d\n", i + 1, total);
        }
        else if (cars[i] > 2 && cars[i] < 6)
        {
            int fare = 40;
            total = fare *cars[i];
            final_total = final_total + total;
            printf("Parking fee of car %d : %d\n", i + 1, total);
        }
        else if (cars[i] > 5 && cars[i] < 9)
        {
            int fare = 30;
            total = fare * cars[i];
            final_total = final_total + total;
            printf("Parking fee of car %d : %d\n", i + 1, total);
        }
        else if (cars[i] > 8)
        {
            printf("Overstay warning\n");
            over_s = over_s + 1;
        }
    }

    printf("overstaying cars = %d\n", over_s);
    printf("total Revenue = %d\n", final_total);
    return 0;
}