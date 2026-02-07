#include <bits/stdc++.h>
using namespace std;
vector<int> increment(vector<int> digits, int N)
{
    int n = digits.size();
    if (digits[n - 1] < 9)
    {
        digits[n - 1] += 1;
        return digits;
    }
    int i = n - 1;
    while (i >= 0 && digits[i] == 9)
        digits[i--] = 0;
    if (i == -1)
    {
        digits[0] = 1;
        digits.push_back(0);
    }
    else
        digits[i] += 1;
    return digits;
}