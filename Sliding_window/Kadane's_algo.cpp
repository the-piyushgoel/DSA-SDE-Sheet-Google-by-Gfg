#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);
        sum = max(sum, 0);
    }
    return maxi;
}