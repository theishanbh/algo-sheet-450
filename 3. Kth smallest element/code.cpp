#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> val;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        val.push_back(k);
    }
    sort(val.begin(), val.end());
    int k;
    cin >> k;
    // kth max number
    cout << val[n - k] << endl;
    // kth min number
    cout << val[k - 1] << endl;

    return 0;
}