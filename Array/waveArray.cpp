#include <bits/stdc++.h>
using namespace std;
void sortInWave(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i += 2)
    {
        swap(arr[i], arr[i - 1]);
    }
}