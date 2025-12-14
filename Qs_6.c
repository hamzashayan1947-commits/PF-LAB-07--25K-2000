#include <stdio.h>

int main()
{
    int stu[15], i, late[15], fine[15], total = 0;
    for (i = 0; i < 15; i++)
    {
        printf("Enter student fees.\n0 = Not paid.\n1 = Paid : ");
        scanf("%d", &stu[i]);

        if (stu[i] == 0)
        {
            printf("Enter payment late(months) : ");
            scanf("%d", &late[i]);
            if (late[i] == 1)
            {
                printf("Fine = 500.\n");
                fine[i] = 500;
                total = total + fine[i];
            }
            else if (late[i] >= 2)
            {
                printf("Fine = 1000.\n");
                fine[i] = 1000;
                total = total + fine[i];
            }
            else
            {
                late[i] = 0;
                fine[i] = 0;
            }
        }
        // else{
        //     late[i] = 0;
        //     fine[i] = 0;

        // }
    }
    printf("------------------------------------------------------------------------\n");
    printf("-----------------------------Fee Payment Record-------------------------\n");
    printf("------------------------------------------------------------------------\n");
    printf("Student status        Fine           late(months)            Remark   \n ");
    for (i = 0; i < 15; i++)
    {
        if (stu[i] == 1)
        {
            fine[i] = 0;
            late[i] = 0;
            printf("Paid\t\t\t%d \t\t %d \t\t    Cleared.\n", fine[i], late[i]);
        }
        else
        {
            printf("UnPaid\t\t\t%d \t\t %d \t\t   Defaulter.\n", fine[i], late[i]);
        }
    }
    printf("------------------------------------------------------------------------\n");
    printf("Total Fine Collected : %d$\n", total);
    return 0;
}