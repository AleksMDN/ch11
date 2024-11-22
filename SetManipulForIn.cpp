#include <iostream>
#include <iomanip>
using namespace std;

istream &prompt(istream &stream)
{
  cin >> hex;
  cout << "Input number in hex ";
    return stream;
}

int main()
{
    int i;
    cin >> prompt >> i;
    cout << oct <<i;
    return 0;
}
