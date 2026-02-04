#include <bits/stdc++.h>
using namespace std;
int findFrequency(vector<int> arr, int x){
    int cnt = 0;
    for (auto it : arr)
        if (it == x)
            cnt++;
    return cnt;
}