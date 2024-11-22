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
    friend istream &operator>>(istream &stream, ThreeD &obj)
    {
        cout << " Input through space  x y z:" ;
        stream >> obj.x >> obj.y >> obj.z;
        return stream;
    }
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
    ThreeD a(1, 2, 3);
    cout << a;

    cin >> a;
    cout << a;
    return 0;
}
