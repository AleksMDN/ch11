#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream)
{
    stream.setf(ios::left);
    stream << setw(10) << setfill('$');
    return stream;
}

int main(int argc, char const *argv[])
{
    cout <<  10 << " " << setup << 10;
    return 0;
}
