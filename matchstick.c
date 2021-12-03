#include<stdio.h>
#include<time.h>

int computer(int count, int ran)
{
    if(count == 10 || count == 6 || count == 1 || count == 2)
    {
        count = count - 1;
    }
    else if(count == 9 || count == 5)
    {
        count = count - ran;
    }
    else if(count == 8 || count == 4)
    {
        count = count - 3;
    }
    else if(count == 7 || count == 3)
    {
        count = count - 2;
    }

    return count;
}
int remain(int count)
{
     printf("\nRemaining matches: %d", count);
}
int main()
{
    int count = 11, match, ran;
    srand(time(NULL));
    ran = rand() % 3;
    ran = ran +1;
    //printf("%d", ran);
    do{
    printf("\nInput number of matches you want to subtract(1-3): "); scanf("%d", &match);
    if(match > 3 || match < 1)
        {
            printf("Invalid move!");
            return 0;
        }
    count = count - match;
    remain(count);
    count = computer(count, ran);
    printf("\nCOMPUTER PREPARING HIS MOVE....");
    remain(count);
    }while(count > 1);

    if(count == 1)
    {
        printf("\n\nGLORY TO COMPUTER OVERLORD, IT HAS WON");
    }
    else if(count == 0)
    {
        printf("\n\n\tCONGRATULATION THE PLAYER HAS WON");
    }

    return 0;
}
