#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1};

    sort(v.begin(), v.end());

    for(vector <int>::iterator it = v.begin(); it!=v.end(); it++)
        cout << *it << " ";

    return 0;
}
