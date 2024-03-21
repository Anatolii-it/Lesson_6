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
    string str = "Це тестовий рядок";

    cout << "    Початковий рядок завдання: " << str << endl;
    cout << "введіть номер - ";
    cin >> index; // Номер символу, який потрібно видалити
    delete_Index(str, index - 1);
    cout << "Рядок після видалення символу: " << str << endl;



    _getch();
    return 0;
}