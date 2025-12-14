#include <stdio.h>

int main(){
    int posts[10] , i , avg , sum = 0 , high_post = 0 ,streak = 0 ;
    for(i=0;i<10;i++){
        printf("Enter # of posts on day %d : " , i+1);
        scanf("%d" , &posts[i]);
        if(posts[i] > high_post){
            high_post = posts[i];
        }
        sum = sum + posts[i];
    }
    avg = sum /10 ;
    for(i=0;i<8;i++){
        if(posts[i]<posts[i+1] && posts[i+1]<posts[i+2])
        streak = streak + 1 ;
    }
    printf("-------------------------------------------\n");
    printf("Days             Posts\n");
    printf("-------------------------------------------\n");
    for(i=0;i<10;i++){
        printf("%d \t\t%d \t\n" , i+1 , posts[i]);
    }
    printf("-------------------------------------------\n");
    printf("Highest post in a day : %d\n" , high_post);
    printf("Average of 10 days : %d\n" , avg);
    if(streak == 0){
        printf("No streak found.\n");

    }
    else{
        printf("Streaks found : %d" , streak);
    }


    return 0;
}