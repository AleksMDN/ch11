// Run Command Prompt cl /EHsc CreateFormatIO.cpp
#include <iostream>
// #include <clocale>
#include <Windows.h>
using namespace std;

 int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� � ����� �����
    SetConsoleOutputCP(1251); //��� ������
    char ch[80];
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.23 << '\n';
    cout << "����� ������\n";
    cin >> ch;
    cout << ch;
    // system("pause");
    
    return 0;
}
