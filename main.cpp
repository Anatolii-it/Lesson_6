#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void insertChar(string& str, char ch, int pos) {
    str.insert(pos, 1, ch);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int poz;
    char ch;
    string str = "�� �������� �����";

    cout << " ��������: " << str << endl;
    cout << "������ ����� - ";
    cin >> poz; 
    cout << "������ ������ - ";
    cin >> ch;
    insertChar(str, ch, poz);
    cout << "�������: " << str << endl;



    _getch();
    return 0;
}