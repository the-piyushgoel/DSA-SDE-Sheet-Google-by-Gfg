#include <bits/stdc++.h>
using namespace std;
int findEquilibrium(vector<int> &arr)
{
    int rsum = 0;
    for (auto it : arr)
        rsum += it;
    int lsum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        rsum -= arr[i];
        if (lsum == rsum)
            return i;
        lsum += arr[i];
    }
    return -1;
}