#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 1, 3, 1};

    cout << count(v.begin(), v.end(), 1);

    return 0;
}
