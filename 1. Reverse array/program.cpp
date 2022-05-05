#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int arrRev[n];
    for (int i = 0; i < n; i++)
    {
        arrRev[n - i - 1] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrRev[i] << " ";
    }

    return 0;
}