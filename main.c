#include <stdio.h>
// #include <conio.h>
#include <math.h>
int main()
{
    // name, age, >18
    // 3 parties - each parties != 30 no win
    // loop again vote or exit according to person
    // output winner parties

    char yrname[20], Aparti, Bparti, Cparti;
    int yrage, chosvote, n, totala, totalb, totalc;
    char chosprtya, chosprtyb, chosprtyc;

    printf("Welcome to 2022 Voting Day for Anish Government!!\n\tRules: \n*Over 18 Required\n*You can vote unlimied times\n*Fill every details carefully\n");
    printf("Enter your name: ");
    gets(yrname);
    printf("Enter your age: ");
    scanf("%d", &yrage);
    if (yrage >= 17)
    {
        printf("\nCongratulation!, You're Above 18 - Now ENTER Party (Which you want to vote)\n1) Aamrus Party = 'A'\n2) Electric Party\n3) Musk Party\nPlease enter 'A' Wisely\n:");
        scanf("%s", &chosprtya);
    }

    if (chosprtya == 'A')
    {
        printf("You've Choosen Aamrus Party\nNow, Enter the num of votes do you want to GIVE!!\n:");
        scanf("%d\n%d", &chosvote, &n);
        totala = chosvote + n;
        // printf("number of votes: %d", totala);
        if (totala > 30)
        {
            printf("You can not vote\nmore than 30! - Retry");
        }
        else if (totala <= 30)
        {
            printf("You've Successfully Voted: %d Votes\n", totala);
        }

        printf("\nCongratulation!, Now Choose Party (Which you want to vote) Electric Party = 'B'\n3) Musk Party = 'C'\nPlease select wisely through Alphabet\n:");
        scanf("%s", &chosprtya);

        if (chosprtya == 'B')
        {
            printf("You've Choosen Electric Party\nNow, Enter the num of votes do you want to GIVE!!\n:");
            scanf("%d\n%d", &chosvote, &n);
            totalb = chosvote + n;
            // printf("number of votes: %d", totala);
            if (totalb > 30)
            {
                printf("You can not vote\nmore than 30! - Retry");
            }
            else if (totalb <= 30)
            {
                printf("You've Successfully Voted: %d Votes\n", totalb);
            }

            printf("\nCongratulation!, Now Choose Party Musk Party = 'C'\nPlease select wisely through Alphabet\n:");
            scanf("%s", &chosprtya);
        }

        if (chosprtya == 'C')
        {
            printf("You've Choosen Musk Party\nNow, Enter the num of votes do you want to GIVE!!\n:");
            scanf("%d\n%d", &chosvote, &n);
            totalc = chosvote + n;
            // printf("number of votes: %d", totala);
            if (totalc > 30)
            {
                printf("You can not vote\nmore than 30! - Retry");
            }
            else if (totalc <= 30)
            {
                printf("You've Successfully Voted: %d Votes\n", totalc);
            }

            printf("Thank You!! :)");
        }

        else
        {
            printf("Wrong Input retry");
        }
    }

    else
    {

        printf("When you will over 18, Please Vote");
    }

    if (totala > totalb) // a > b - a
    {
        printf("Amrus wins");
    }
    else
    {
        printf("Electric Wins"); // b > a - b
    }
    if (totalc > totalb)
    { // c > b - c
        printf("Musk Wins");
    }
    else
    {
        printf("Electric Wins"); // a > c - a
    }
    if (totala > totalc)
    {
        printf("Amrus Wins");
    }
    else
    {
        printf("Musk WIns");
    }

    // PArt A over

    return 0;
}