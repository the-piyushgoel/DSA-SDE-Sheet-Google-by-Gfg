#include <bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> &arr, int target)
{
    int i = 0, j = 0, n = arr.size(), sum = 0;
    while (i < n && j < n)
    {
        sum += arr[j];
        if (sum > target)
        {
            while (sum > target)
                sum -= arr[i++];
        }
        if (sum == target)
            return {i + 1, j + 1};
        j++;
    }
    return {-1};
}
