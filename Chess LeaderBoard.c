#include<stdio.h>
#include<stdlib.h>
#include<math.h>
            long int match_number;
            int match_played=4;
            int ridwan_point=2;
            int mohammad_point=2;
            int first=1;
            int second=1;
            char ridwan[20]="RIDWAN";
            char mohammad[20]="MOHAMMAD";
        int result()
        {
            printf("\n\n\tLeader___Board");
            printf("\n ___________");
            printf("\n|Ridwan:   %d|" , ridwan_point);
            printf("\n|Mohammad: %d|" , mohammad_point);
            printf("\n'''''''''''''''");
            //printf("\n\nTOP: %s" , ridwan );
            //printf("\t%s" , mohammad);
            //printf("\n\nTOP: %s" , ridwan );
            //printf("\n\nTOP: %s" , mohammad );
            if(ridwan_point>mohammad_point)
            {
                printf("\n\nTOP: %s\n\n\n\n" , ridwan );
            }
            else if(ridwan_point<mohammad_point)
            {
                printf("\n\nTOP: %s\n\n\n\n" , mohammad );
            }
            else{
                printf("\n\nTOP: %s\tand" , ridwan );
                printf("\t%s\n\n\n\n" , mohammad);
            }
        }
int main()
{
    int ler;
    printf("\t\t\t###WELCOME###");
    printf("\t\t\n\n%d Match played" , match_played);
    printf("\n\nEnter Match Number: ");
    scanf("%ld" , &match_number);
    if(match_number==1)
    {
        printf("\n\tMatch Number\tWhite\tBalck  \t Result\t\t Point");
        printf("\n\t1\t\tRidwan\tMohammad Mohammad Won\t 1");
        printf("\n\nIf you want to see Leader___Board enter [1]");
        scanf("%d" , &ler);
        if(ler==1)
        {
            result();
        }
    }
    else if(match_number==2)
    {
        printf("\n\tMatch Number\tWhite\tBalck  \t Result\t\t Point");
        printf("\n\t2\t\tMohammad\tMohammad Mohammad Won\t 1");
        printf("\n\nIf you want to see Leader___Board enter [1]");
        scanf("%d" , &ler);
        if(ler==1)
        {
            result();
        }
    }
    else if(match_number==3)
    {
        printf("\n\tMatch Number\tWhite\tBalck  \t Result\t\t Point");
        printf("\n\t3\t\tMohammad\tMohammad Mohammad Won\t 1");
        printf("\n\nIf you want to see Leader___Board enter [1]");
        scanf("%d" , &ler);
        if(ler==1)
        {
            result();
        }
    }
    else if(match_number==4)
    {
        printf("\n\tMatch Number\tWhite\tBalck  \t Result\t\t Point");
        printf("\n\t4\t\tRidwan\tMohammad Ridwan Won\t 1");
        printf("\n\nIf you want to see Leader___Board enter [1]");
        scanf("%d" , &ler);
        if(ler==1)
        {
            result();
        }
    }
    else{
        printf("\n\n###Not Found###");
        main();
    }
    return 0;
}
