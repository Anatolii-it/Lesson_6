#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string inputString;
    char search;
    int x = 0;
    
    cout << "������ ����� �������: ";
    getline(cin, inputString);

    
    cout << "������ ������, ���� ������� ������: ";
    cin >> search;
    for (size_t i = 0; inputString[i] != '\0'; i++)
    {
        if (search == inputString[i])
        {
            x++;
        }
    }
    cout <<" ������ �������� " << x <<" ����";
    
    

    return 0;
}
