#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string inputString;
    int s = 0;
    int d = 0;
    int r = 0;
    cout << "������ ����� �������: ";
    getline(cin, inputString);
    for (char ch : inputString)
    {
        
        if ((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z'))
        {
            s++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            d++;
        }
        else
        {
            r++;
        }
    }

    cout << "   ����:" << r << endl;
    cout << "    ����:" << d << endl;
    cout << "�������:" << s << endl;



    return 0;
}
