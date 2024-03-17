#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;

bool isPalindrome(const string& str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string input;
    cout << "������ �����: ";
    getline(cin, input); 

    if (isPalindrome(input)) {
        cout << "����� � ����������." << endl;
    }
    else {
        cout << "����� �� � ����������." << endl;
    }
    _getch();
    return 0;
}
