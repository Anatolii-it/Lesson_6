#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str_l[] = "���� ����� �������. ������� � ����� �� ������ �� ���������";
    cout <<"    ����: - " << str_l << endl;
    int i = 0;
    int x = 0;
    while (str_l[i] != '\0') {
        if (str_l[i] == ' ')
        {
            str_l[i] = '\t';
            x++;
        }
        i++;
    }

    
    cout <<"��������: - " << str_l << endl;
    cout << "������� -  " << i << " ������ - " << x;

    _getch();
    return 0;
}
