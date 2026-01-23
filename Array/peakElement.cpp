#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> &arr) {
        int n = arr.size();
        for(int i=1;i+1<n;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
        }
        if(arr[0]>arr[1]) return 0;
        if (arr[n-1]>arr[n-2]) return n-1;
        return 0;
    }