#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{  
  // the remove function is present in <algorithm>. It doesnt truly delete the elements, just rearranges all the target values at the back. 
  // the erase function is a prebuilt container function. it actively deletes elements and shirnks the container. 
  // the erase remove method is usede to first shift all occurances to the end, the delete them permanently.
    vector<int> v = {1, 2, 3, 2, 4};

    v.erase(remove(v.begin(), v.end(), 2), v.end());

    for(int x : v)
        cout << x << " ";

    return 0;
}
