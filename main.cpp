#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void delete_simv(string& str_l, char simv) {
    size_t pos = 0;
    while ((pos = str_l.find(simv, pos)) != string::npos) {
        str_l.erase(pos, 1);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char simv = '�';
    
    string str_l = "���� ����� �������";

    cout << "    ���������� ����� ��������: " << str_l << endl;
    cout << "������ ������ - ";
    cin >> simv; 
    delete_simv(str_l, simv);
    cout << "����� ���� ��������� �������: " << str_l << endl;



    _getch();
    return 0;
}