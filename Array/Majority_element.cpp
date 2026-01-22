#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &arr)
{
    int res = -1, cnt = 0;
    for (auto it : arr)
    {
        if (cnt == 0)
            res = it;
        if (it == res)
            cnt++;
        else
            cnt--;
    }
    cnt = 0;
    for (auto it : arr)
        if (it == res)
            cnt++;
    return cnt > arr.size() / 2 ? res : -1;
}
