#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 2, 9, 7, 6};
    int min = 1000;
    int max = -1;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;

    return 0;
}