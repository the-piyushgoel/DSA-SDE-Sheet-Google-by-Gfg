// A celebrity is a person who is known to all but does not know anyone at a party.
// A party is being organized by some people.
// A square matrix mat[][] of size n*n is used to represent people at the party such that
// if an element of row i and column j is set to 1 it means ith person knows jth person.
// You need to return the index of the celebrity in the party, if the celebrity does not exist,
// return -1.
// Note: Follow 0-based indexing.


#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &mat)
{
    int n = mat.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (mat[j][i] == 1)
            j--;
        else
            i++;
    }
    int c = i;
    i = 0;
    while (i < n)
    {
        if (i != c && (mat[c][i] == 1 || mat[i][c] == 0))
            return -1;
        i++;
    }
    return c;
}