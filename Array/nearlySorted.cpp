#include <bits/stdc++.h>
using namespace std;
void nearlySorted(vector<int> &arr, int k)
{
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    int i = 0;
    for (; i < k; i++)
        pq.push(arr[i]);
    for (; i < n; i++)
    {
        pq.push(arr[i]);
        arr[i - k] = pq.top();
        pq.pop();
    }
    while (pq.size())
    {
        arr[i - k] = pq.top();
        pq.pop();
        i++;
    }
}