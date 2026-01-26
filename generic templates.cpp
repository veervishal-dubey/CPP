#include <iostream>
using namespace std;

template <class T1, class T2>
class Sample
{
    T1 a;
    T2 b;
public:
    Sample(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    Sample<int, float> s(10, 5.5);
    s.display();
    return 0;
}
