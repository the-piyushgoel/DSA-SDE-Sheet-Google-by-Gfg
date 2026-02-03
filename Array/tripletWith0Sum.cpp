#include <bits/stdc++.h>
using namespace std;

bool findTriplets(vector<int> &arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int i = 0;
    while (i < n){
        int j = i + 1, k = n - 1;
        while (j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
                return true;
            else if (sum < 0)
                j++;
            else
                k--;
        }
        i++;
    }
    return false;
}