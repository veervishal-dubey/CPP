#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {9, 4, 7, 1, 5, 3};

    auto mid = v.begin() + v.size()/2;

    sort(v.begin(), mid);
    reverse(mid, v.end());

    for(int x : v)
        cout << x << " ";

    return 0;
}
