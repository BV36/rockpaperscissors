#include <stdio.h>

int game(char select, char pc)
{
    if (select == pc)
        return -1;

    else if (select == 'r' && pc == 'p')
        return 0;

    else if (select == 'p' && pc == 'r')
        return 1;

    else if (select == 'r' && pc == 's')
        return 1;

    else if (select == 's' && pc == 'r')
        return 0;

    else if (select == 'p' && pc == 's')
        return 0;

    else if (select == 's' && pc == 'p')
        return 1;
}

int main()
{
    char a, select, pc, result;

    srand(time(NULL));

    a = rand() % 100;

    if (a < 33)
        pc = 'r';

    else if (a > 33 && a < 66)
        pc = 'p';

    else
        pc = 's';

    printf("Select one of them(r is for rock, p is for paper, s is for scissors)\n");
    scanf("%c", &select);

    result = game (select , pc);

    if (result == 1)
        printf("Good!! You win!\n");

    else if (result == 0)
        printf("Bad!! Pc win!\n");

    else
        printf("Draw!!!\n");

        printf("You selected %c and pc selected %c.\n", select, pc);
    return 0;
}
