#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 4};

    vector <int> :: iterator it;
    int counteven=0;
    for (it=v.begin(); it!=v.end(); it++)
    {
        if (*it%2==0)
            counteven++;
        else
            continue;
    }
    cout<<counteven;

    return 0;
}
