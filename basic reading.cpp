#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    char ch;

    while (fin.get(ch)) {
        cout << ch;
    }

    fin.close();
    return 0;
}
