#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>

#define STYLE_UNDERLINE    "\033[4m"
#define STYLE_NO_UNDERLINE "\033[24m"
#define STYLE_BOLD         "\033[1m"
#define STYLE_NO_BOLD      "\033[22m"
#define _WIN32_WINNT 0x0500
HANDLE wHnd;    // Handle to write to the console.
HANDLE rHnd;    // Handle to read from the console.

struct SMALL_RECT
{
    SHORT Left;
    SHORT Top;
    SHORT Right;
    SHORT Bottom;
};

int menuEscolhido;
int userCredencial;

void main()
{

    HWND consoleWindow = GetConsoleWindow();
    SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);

    /*keybd_event ( VK_MENU, 0x36, 0, 0 );;
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
    */
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleTitle("CLINICA SORRIDENTE | MATRIZ - SAO VICENTE");
    SMALL_RECT windowSize = {0, 0, 50, 120};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    COORD bufferSize = {0, 0};
    SetConsoleScreenBufferSize(wHnd, bufferSize);

    int opcao;
    int resolucao = 120;

    system("cls");
    system("COLOR 07");

    printf(STYLE_BOLD);

    cabecalho();
    menuRoot();

}


void menuAgendamento(){
    cabecalho();
    menuLogin();
}

void menuPaciente(){
    cabecalho();
    menuRoot();
}

void menuMedicos(){
    cabecalho();
    menuRoot();
}

void menuAdministrativo(){
    cabecalho();
    menuRoot();
}



void menuLogin()
{
    cabecalho();
    printf("%", center_print("DIGITE SUA CREDENCIAL!",120));
    scanf ("%d", &menuEscolhido);
    menu(menuEscolhido);

    footer();
}

void center_print(const char *s, int width)
{
    int length = strlen(s);
    int i;
    for (i=0; i<=(width-length)/2; i++)
    {
        fputs(" ", stdout);
    }
    fputs(s, stdout);
    i += length;
    for (; i<=width; i++)
    {
        fputs(" ", stdout);
    }
}
