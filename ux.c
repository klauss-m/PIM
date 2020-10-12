#include <time.h>

void footer(){
    printf("\n\n\n\n");

    headerLine();


}

void cls(){
    system("cls");
}

void cabecalho(){
    cls();
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    headerLine();
    printf("\033[1;32m");
    printf("\t\tMATRIZ - SAO VICENTE\t\t\t\t\t\t\t\t\t%02d-%02d-%d\n", tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);

    headerLine();

    printf("\n\n");

    printf("\n");
    printf("%", center_print("CLINICA SORRIDENTE",120));
    printf("%", center_print("SEU SORRISO E A NOSSA ALEGRIA",120));

    printf("\n\n");
    printf("\033[0m");

    headerLine();
    printf("\n\n\n\n");
}

void headerLine()
{
    int height = 120;
    int a;

    printf("\033[1;32m");

    for (a = 0; a != height; a++)
    {
        printf("%c", 205);
    }

    printf("\033[0m");
}



