#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
// since the find() returns the iterator of the element if found, and then .end() if not found we compare with itrator.
    if(find(v.begin(), v.end(), 30) != v.end())     
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
