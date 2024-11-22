#include <iostream>
using namespace std;

class myostream{
    public:
        myostream &operator<<(const char *s) {cout << s; return *this;}
};

myostream mycout;
int main()
{
  setlocale(LC_ALL, "RU");
  char ch[80];
    mycout << "Подарок  "; 
  cout << "Введи текс латинскими буквами: ";
  cin >> ch;
  mycout << ch;

    return 0;
}
