#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;

int main()
{
    // setlocale(LC_ALL, "UTF-8");
    // SetConsoleCP(866);// установка кодовой страницы win-cp 1251 в поток ввода
    // SetConsoleOutputCP(866); 
    cout << "Проверка локализации \n";
    ios::fmtflags f;
    f = cout.flags(); // Reading flagы status
    if (f & ios::showpos)
        cout << "1.Flag ios::showpos set for flow cout. \n";
    else
        cout << "2.Flag ios::showpos dropped for stream cout. \n";

    cout << "3.Setting the showpos flag for cout stream. \n";
    cout.setf(ios::showpos);
    f = cout.flags();
    if (f & ios::showpos)
        cout << "4.Flag ios::showpos set for flow cout. \n";
    else
        cout << "5.Flag ios::showpos dropped for stream cout. \n";

    cout << "6. Reset flag showpos for stream cout.\n";
    cout.unsetf(ios::showpos);
    f = cout.flags();
    if (f & ios::showpos)
        cout << "7.Flag ios::showpos set for flow cout. \n";
    else
        cout << "8.Flag ios::showpos dropped for stream cout. \n";

    cout << " 9.Reset flag showpos for stream cout.\n";
system("pause");
    return 0;
}
