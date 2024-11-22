#include <iostream>
using namespace std;

class ThreeD
{
private:
    int x, y, z;
public:
    ThreeD(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    // ~ThreeD() {}
friend ostream &operator<<(ostream &stream, ThreeD obj)
{
    stream << obj.x << ",";
    stream << obj.y << ",";
    stream << obj.z << "\n";
    return stream;
}
};


int main(int argc, char const *argv[])
{
    ThreeD a(1, 2, 3), b(4, 5, 6), c(7, 8, 9);
    cout << a;
    return 0;
}
