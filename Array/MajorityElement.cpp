#include <bits/stdc++.h>
using namespace std;
vector<int> findMajority(vector<int> &arr)
{
    int cnt1 = 0, cnt2 = 0, el1, el2;
    for (auto it : arr)
    {
        if (cnt1 == 0 && el2 != it)
        {
            cnt1++;
            el1 = it;
        }
        else if (cnt2 == 0 && el1 != it)
        {
            cnt2++;
            el2 = it;
        }
        else if (el1 == it)
            cnt1++;
        else if (el2 == it)
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = cnt2 = 0;
    for (auto it : arr)
    {
        if (it == el1)
            cnt1++;
        else if (it == el2)
            cnt2++;
    }
    if (cnt2 > arr.size() / 3 && cnt1 > arr.size() / 3)
        return {min(el1, el2), max(el1, el2)};
    else if (cnt1 > arr.size() / 3)
        return {el1};
    else if (cnt2 > arr.size() / 3)
        return {el2};
    return {};
}