#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("sample.txt");
    ofstream fout("dest.txt");

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    ifstream fin2("dest.txt");
    while (fin2.get(ch)) {
        cout << ch;
    }
    fin2.close();

    return 0;
}
