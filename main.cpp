#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

void replace_simv(string& str_l, char old_simv, char new_simv) {
    size_t pos = 0;
    while ((pos = str_l.find(old_simv, pos)) != string::npos) {
        str_l[pos] = new_simv;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char old_simv = '.';
    char new_simv = '!';

    string str_l = "Дано. рядок. символів...";

    cout << "завдання : " << str_l << endl;
    
    replace_simv(str_l, old_simv, new_simv);
    cout << "відповідь: " << str_l << endl;



    _getch();
    return 0;
}