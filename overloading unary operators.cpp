#include <iostream>
using namespace std;

class Example {
    int x, y;

public:
    Example(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Pre-increment (++obj)
    Example& operator++() {
        ++x;
        ++y;
        return *this;
    }

    // Post-increment (obj++)
    Example operator++(int) {
        Example temp = *this;
        x++;
        y++;
        return temp;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Example e1(3, 4);

    cout << "Original values: ";
    e1.display();

    ++e1;
    cout << "After pre-increment: ";
    e1.display();

    e1++;
    cout << "After post-increment: ";
    e1.display();

    return 0;
}
