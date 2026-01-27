#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("sample.txt", ios::out);
    fout << "Hello";
    fout.close();

    fout.open("sample.txt", ios::app);
    fout << " World";
    fout.close();

    ifstream fin;
    fin.open("sample.txt", ios::in);
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    fin.close();

    return 0;
}
