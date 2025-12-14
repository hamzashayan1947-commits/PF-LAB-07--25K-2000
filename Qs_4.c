#include <stdio.h>

int main()
{
    int product[10], i ;
    float sum = 0 , a;
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d product price : ", i + 1);
        scanf("%d", &product[i]);
        if (product[i] < 1000)
        {
            printf("5%% discount.\n");
            a = product[i] * 0.05;
            product[i] = product[i] - a ;
            sum = sum + product[i];
        }
        else if (product[i] > 999 && product[i] < 5001)
        {
            printf("10%% discount.\n");
            a = product[i] * 0.1;
            product[i] = product[i] - a ;
            sum = sum + product[i];
        }
        else if (product[i] > 5000)
        {
            printf("15%% discount.\n");
            a = product[i] * 0.15;
            product[i] = product[i] - a ;
            sum = sum + product[i];
        }
    }
    printf("%.2f\n", sum);
    if (sum>25000){
        printf("Gold voucher.\n");
    }
    else{
        printf("No voucher .\n");
    }
    return 0;
}
