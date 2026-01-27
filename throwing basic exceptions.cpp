
#include <iostream>
#include <exception>
using namespace std;

int main() {

    int a, b;
    for (int i=1; i<=2;i++)
    {
        cin>>a>>b;
    
    try{
        if (b==0)
            throw 0;
        else
            cout<<a/b;
    }
    catch(int x)
    {
        cout<<"Cannot divide by zero";
    }
    }
    return 0;
}
