#include <windows.h>
#include <stdio.h>

void loader() {
    printf("Loading ");
    fflush(stdout);
    char str[] = "                                        ";
    for (int i = 0; i <= 40; i++) {
        printf("\r[%s]", str);
        str[i] = '|';
        Sleep(10);
    }
    printf("\n");
}

void loader2() {
    char str[] = "   ";
    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 3; i++) {
            printf("\r%s", str);
            str[i] = '.';
            Sleep(50);
        }
        for(int i = 0; i < 3; i++){
            str[i] = ' ';
        }
    }
    printf("\n");
}