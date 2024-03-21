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
    char simv = 'а';
    
    string str_l = "Дано рядок символів";

    cout << "    Початковий рядок завдання: " << str_l << endl;
    cout << "введіть символ - ";
    cin >> simv; 
    delete_simv(str_l, simv);
    cout << "Рядок після видалення символу: " << str_l << endl;



    _getch();
    return 0;
}