//Basic Linear Search
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ary[] = {2,3,4,5,6,7,8,10,13,18,22,34,40,43,46,47,49,55,57,58,59,60};
    int size = 22;
    int i = 0;
    int pos = 0;
    int target = 57;
    bool found = false;

    while (i<size && !found)
    {
        if (ary[i] == target)
        {
            found = true;
            pos = i;
        }
        i++;
    }

    cout << "found at position " << pos;
    return 0;
}
