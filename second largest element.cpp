#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 9, 2, 8};

    sort(v.begin(), v.end());

    cout << v[v.size()-2];
    return 0;
}
