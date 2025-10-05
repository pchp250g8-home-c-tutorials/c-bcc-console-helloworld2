#include <stdio.h>
#include <tchar.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    char szName[80];
    system("cls");
    printf("Hello, World!!!\r\n");
    printf("Input your name:\r\n");
    scanf_s("%[^\n]", &szName,80);
    printf("Hello, %s!!!\r\n",szName);
    fflush(stdin);
    fflush(stdout);
    getc(stdin);
}
