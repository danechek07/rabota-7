#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    char sign;
    setlocale(LC_ALL, "RUS");

    printf("Введите знак препинания: ");
    scanf("%c", &sign);

    // Определение названия знака с использованием switch-case
    switch (sign) {
    case '.':
        printf("Название знака: точка\n");
        break;
    case ',':
        printf("Название знака: запятая\n");
        break;
    case ';':
        printf("Название знака: точка с запятой\n");
        break;
    case '…':
        printf("Название знака: многоточие\n");
        break;
    case '!':
        printf("Название знака: восклицательный знак\n");
        break;
    case '?':
        printf("Название знака: вопросительный знак\n");
        break;
    case '-':
        printf("Название знака: тире\n");
        break;
    case ':':
        printf("Название знака: двоеточие\n");
        break;
    case '(':
    case ')':
        printf("Название знака: скобки\n");
        break;
    case '"':
        printf("Название знака: кавычки\n");
        break;
    default:
        printf("Неизвестный знак препинания\n");
        break;
    }

    return 0;
}