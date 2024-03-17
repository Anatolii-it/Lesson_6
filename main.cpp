#include <iostream>
#include <string>
#include <cctype> 
#include <conio.h>
#include <Windows.h>

using namespace std;

void countCharacters(const string& str) {
    int letters = 0;
    int digits = 0;
    int other = 0;

    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            other++;
        }
    }

    cout << "�-��� ����: " << letters << endl;
    cout << "�-��� ����: " << digits << endl;
    cout << "�-��� ������������ �������: " << other << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input = "Hello123!";

    cout << "�����: " << input << endl;

    countCharacters(input);
    _getch();
    return 0;
}
