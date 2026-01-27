#include <iostream>
#include <fstream>
using namespace std;

class Inventory {
    char name[20];
    int code;
    float cost;
public:
    void readdata() {
        cin >> name >> code >> cost;
    }
    void writedata() {
        cout << name << " " << code << " " << cost << endl;
    }
};

int main() {
    Inventory obj;
    fstream file;

    file.open("STOCK.DAT", ios::out | ios::binary);
    obj.readdata();
    file.write((char*)&obj, sizeof(obj));
    file.close();

    file.open("STOCK.DAT", ios::in | ios::binary);
    file.read((char*)&obj, sizeof(obj));
    obj.writedata();
    file.close();

    return 0;
}
