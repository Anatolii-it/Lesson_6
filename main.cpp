#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void delete_Index(string& str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int index = 0;
    string str = "�� �������� �����";

    cout << "    ���������� ����� ��������: " << str << endl;
    cout << "������ ����� - ";
    cin >> index; // ����� �������, ���� ������� ��������
    delete_Index(str, index - 1);
    cout << "����� ���� ��������� �������: " << str << endl;



    _getch();
    return 0;
}