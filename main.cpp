#include <iostream>
#include <Windows.h>
#include <iostream>
#include <conio.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    int x = 1;
    char str_l[] = "ϳ��������� ������� ��� � ��������� ������";

    while (str_l[i] != '\0') {
        if (str_l[i] == ' ')
            x++;
        i++;
    }

    std::cout << "ʳ������ ���: " << x << std::endl;

    _getch();
    return 0;
}
