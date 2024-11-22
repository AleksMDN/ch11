// Run Command Prompt cl /EHsc CreateFormatIO.cpp
#include <iostream>
// #include <clocale>
#include <Windows.h>
using namespace std;

 int main()
{
    SetConsoleCP(1251);// установка кодовой страницы в поток ввода
    SetConsoleOutputCP(1251); //для вывода
    char ch[80];
    cout.setf(ios::showpos);
    cout.setf(ios::scientific);
    cout << 123 << " " << 123.23 << '\n';
    cout << "Вывод текста\n";
    cin >> ch;
    cout << ch;
    // system("pause");
    
    return 0;
}
