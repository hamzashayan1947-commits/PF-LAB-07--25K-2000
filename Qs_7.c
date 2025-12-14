#include <stdio.h>

int main(){
    int units[10] , i ,bill[10] , high = 0 , total = 0;
    for(i=0;i<10;i++){
        printf("Enter units used : ");
        scanf("%d" , &units[i]);
        if(units[i] <=200){
            bill[i] = units[i] * 15 ;
            total = total + bill[i];
        }
        else if (units[i]>200 && units[i]<=500){
            bill[i] = units[i] * 20;
            total = total + bill[i];
        }
        else if (units[i]>500){
            bill[i] = units[i] * 25 ;
            total = total + bill[i];
        }
        if(units[i] > 700){
            high = high + 1;
        }
    }
    printf("------------------------------------------------------------------------\n");
    printf("House         Units          Bill         Consumption    \n");
    printf("------------------------------------------------------------------------\n");
    for(i=0;i<10;i++){
        if(units[i] > 700){
            printf("%d \t\t %d \t     %d \t    High \n" , i+1 , units[i] , bill[i]);
        }
        else{

            printf("%d \t\t %d \t     %d \t    Normal\n",i+1 , units[i] , bill[i]);
        }
    }
    printf("Total revenue : %d" , total);
    return 0;
}