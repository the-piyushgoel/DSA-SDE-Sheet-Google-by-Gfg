#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> res;
    map<string, int> m;
    int itr = 1;
    for (auto it : strs)
    {
        string s = it;
        sort(s.begin(), s.end());
        if (m[s] > 0)
        {
            res[m[s] - 1].push_back(it);
        }
        else
        {
            m[s] = itr++;
            vector<string> v = {it};
            res.push_back(v);
        }
    }
    return res;
}