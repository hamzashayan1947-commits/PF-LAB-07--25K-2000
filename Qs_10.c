#include <stdio.h>

int main(){
    int mileage[8] , i , need_mnt = 0 ;
    for(i=0;i<8;i++){
        printf("Enter mileage of car %d : " , i+1);
        scanf("%d" , &mileage[i]);
        if(mileage[i] >= 18){
            printf("Efficient.\n");
        }
        else if (mileage[i]>=12 && mileage[i<=17])
        {
            printf("Average\n");
        }
        else if (mileage[i<12])
        {
            printf("Needs Maintainance.\n");
            need_mnt =need_mnt + 1 ;
        }
    }
    printf("---------------------------------\n");
    printf("Car         Milage \n");
    printf("---------------------------------\n");
    for(i=0;i<8;i++){
        printf("%d \t     %d \n" , i+1 , mileage[i]);
    }
    if(need_mnt>3){
        printf("Fleet Efficiency Alert!\n");
    }
    
    return 0;
}