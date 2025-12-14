#include <stdio.h>

int main(){
    int stu[6] ,  i ,  total =0;
    int inv[6] , total_inv = 0 ;
    for(i=0;i<6;i++){
        printf("Enter number os students in section %d : " , i+1);
        scanf("%d" , &stu[i]);
        if(stu[i]<=30){
            inv[i] = 1 ;
            total_inv = total_inv + inv[i];
            total = total + stu[i] ;
        }
        else if (stu[i] >30 && stu[i] <=60)
        {
            inv[i] = 2;
            total_inv = total_inv + inv[i];
            total = total + stu[i] ;
        }
        else if (stu[i] >60)
        {
            inv[i] = 3;
            total_inv = total_inv + inv[i];
            total = total + stu[i] ;
        }   
    }
    printf("------------------------------------------------------\n");
    printf("section     students #     Invigilator    \n");
    printf("------------------------------------------------------\n");
    for(i=0;i<6;i++){
        printf("%d \t      %d \t          %d \t  \n" , i+1 , stu[i] , inv[i]);
    }
    printf("------------------------------------------------------\n");
    if (total > 300){
        printf("Assign Chief Invigilator.\n");
    }
    else{
        printf("No Chief invigilator assigned.\n");
    }

    return 0;
}