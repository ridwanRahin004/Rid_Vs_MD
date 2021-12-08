#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char ridwan_rank[10]="5";
char mohammad_rank[10]="5";
char p1 [20] ="Mohammad";
char p2 [20] ="Ridwan";
char ch[20]="Checkmate";
char d1[20]="Undisputed";
char d2[20]="Stalemate";
char d3[25]="Dead Position";
char d4[25]="Mutual Agreement";
char d5[25]="Threefold Repetition";

int just_match_number()
{
    int ma_num;
    int go_back;
    printf("\n\n\tEnter Match number: ");
    scanf("%d" , &ma_num);
    if(ma_num==1)
    {
        printf("\n\n\tMatch number: 1");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 1\t\tRidwan: 0");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==2)
    {
        printf("\n\n\tMatch number: 2");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 1\t\tRidwan: 1");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==3)
    {
        printf("\n\n\tMatch number: 3");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 2\t\tRidwan: 1");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==4)
    {
        printf("\n\n\tMatch number: 4");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 2\t\tRidwan: 2");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==5)
    {
        printf("\n\n\tMatch number: 5");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d1);
        printf("\n\tPoint: \tMohammad: 2.5\t\tRidwan: 2.5");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==6)
    {
        printf("\n\n\tMatch number: 6");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 2.5\t\tRidwan: 3.5");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==7)
    {
        printf("\n\n\tMatch number: 7");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 3.5\t\tRidwan: 3.5");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==8)
    {
        printf("\n\n\tMatch number: 8");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d2);
        printf("\n\tPoint: \tMohammad: 4\t\tRidwan: 4");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==9)
    {
        printf("\n\n\tMatch number: 9");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d3);
        printf("\n\tPoint: \tMohammad: 4.5\t\tRidwan: 4.5");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else if(ma_num==10)
    {
        printf("\n\n\tMatch Number: 10");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" , d3);
        printf("\n\tPoint: \tMohammad: 5\t\tRidwan: 5");
        printf("\n\nPress [1]: ");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
    }
    else{
        main();
    }
}

int all_match_result()
{
    int go_back;
    printf("\n\n\n Match played: 10");
    printf("\n\t\t\tMohammad\n");
    printf("\nWON: \tWhite: 1(match number 3)");
    printf("\n     \tBlack: 2(match number 1,7)");
    printf("\n\nLOST: \tWhite: 1(Match number 2)");
    printf("\n      \tBlack: 2(Match number 4,6)");
    printf("\n\nDRAW: \tWhite: 4(Match number 5,8,9,10)");
    printf("\n      \tBlack: 0(Match number )");
    printf("\n\n\n");
    printf("\n\t\t\tRidwan\n");
    printf("\nWON: \tWhite: 2(match number 4,6)");
    printf("\n     \tBlack: 1(match number 2)");
    printf("\n\nLOST: \tWhite: 2(Match number 1,7)");
    printf("\n      \tBlack: 1(Match number 3)");
    printf("\n\nDRAW: \tWhite: 0(Match number )");
    printf("\n      \tBlack: 4(Match number 6,8,9,10)");
    printf("\n\n\n\nPress [1]: ");
    scanf("%d" , &go_back);
    if(go_back==1)
    {
        main();
    }
}
int leader_board()
{
    int go_back;
    printf("\n\n\n\t\tMohammad: %s \t\t\tRidwan: %s" , mohammad_rank , ridwan_rank);
    printf("\n\nPress [1]: ");
    scanf("%d" , &go_back);
    if(go_back==1)
    {
        main();
    }
}
int match_number()
{
    int go_back;
        printf("\n\n\tMatch number: 1");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 1\t\tRidwan: 0");

        printf("\n\n\tMatch number: 2");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 1\t\tRidwan: 1");

        printf("\n\n\tMatch number: 3");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 2\t\tRidwan: 1");

        printf("\n\n\tMatch number: 4");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 2\t\tRidwan: 2");

        printf("\n\n\tMatch number: 5");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d1);
        printf("\n\tPoint: \tMohammad: 2.5\t\tRidwan: 2.5");

        printf("\n\n\tMatch number: 6");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p2 ,ch);
        printf("\n\tPoint: \tMohammad: 2.5\t\tRidwan: 3.5");

        printf("\n\n\tMatch number: 7");
        printf("\n\tWhite: %s" , p2);
        printf("\n\tBlack: %s" , p1);
        printf("\n\tResult: %s-WON By %s" , p1 ,ch);
        printf("\n\tPoint: \tMohammad: 3.5\t\tRidwan: 3.5");

        printf("\n\n\tMatch number: 8");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d2);
        printf("\n\tPoint: \tMohammad: 4\t\tRidwan: 4");

        printf("\n\n\tMatch number: 9");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" ,d3);
        printf("\n\tPoint: \tMohammad: 4.5\t\tRidwan: 4.5");

        printf("\n\n\tMatch Number: 10");
        printf("\n\tWhite: %s" , p1);
        printf("\n\tBlack: %s" , p2);
        printf("\n\tResult: Draw By %s" , d3);
        printf("\n\tPoint: \tMohammad: 5\t\tRidwan: 5");
        printf("\n\nPress [1]: ");
        scanf("%d" , &go_back);
        if(go_back==1)
        {
            main();
        }
        else{
            just_match_number();
        }
}
int main()
{
    int menu_action;
    printf("\t\t\tMohammad VS Ridwan");
    printf("\n\t\t\t Match played(9)");
    printf("\n\n\n 1.Leader board");
    printf("\n 2.Match result");
    printf("\n 3.All match result");
    printf("\n 4.Player information");
    printf("\n 5.Exit");
    printf("\n  Enter Action: ");
    scanf("%d" , &menu_action);
    if(menu_action==1)
    {
        leader_board();
    }
    else if(menu_action==2)
    {
        just_match_number();
    }
    else if(menu_action==3)
    {
        match_number();
    }
    else if(menu_action==4)
    {
        all_match_result();
    }
    else if(menu_action==5)
    {
        printf("\t\t\t ##ByE##");
    }
    else{
        main();
    }
    return 0;
}
