#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    char sign;
    setlocale(LC_ALL, "RUS");

    printf("������� ���� ����������: ");
    scanf("%c", &sign);

    // ����������� �������� ����� � �������������� switch-case
    switch (sign) {
    case '.':
        printf("�������� �����: �����\n");
        break;
    case ',':
        printf("�������� �����: �������\n");
        break;
    case ';':
        printf("�������� �����: ����� � �������\n");
        break;
    case '�':
        printf("�������� �����: ����������\n");
        break;
    case '!':
        printf("�������� �����: ��������������� ����\n");
        break;
    case '?':
        printf("�������� �����: �������������� ����\n");
        break;
    case '-':
        printf("�������� �����: ����\n");
        break;
    case ':':
        printf("�������� �����: ���������\n");
        break;
    case '(':
    case ')':
        printf("�������� �����: ������\n");
        break;
    case '"':
        printf("�������� �����: �������\n");
        break;
    default:
        printf("����������� ���� ����������\n");
        break;
    }

    return 0;
}