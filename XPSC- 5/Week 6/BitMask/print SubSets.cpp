#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    // sort(a.rbegin(), a.rend());
    for(auto &it:a)
        cout << 0 << " ";
    cout << endl;
    for(auto &it:a)
        cout << it << " ";
    cout << endl << endl;

    int i, mask;
    cout << "Index |  Bitmask  | Subsets" << endl;
    cout << "------|-----------|----------" << endl;
    
    
    for (mask = 0; mask < (1 << 5); mask++)
    {
        cout << "    " << mask << "  ";
        for (i = 4; i >= 0 ; i--)
        {
            if ((mask >> i) & 1)
            { // check the bit on or not
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << "     ";
        if (mask == 0)
            cout << "{NULL}";

            
        for (i = 0; i < 5; i++)
        {
            if ((mask >> (4 - i)) & 1)
            { // check the bit on or not
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}