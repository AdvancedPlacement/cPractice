#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int size = arr.size();
    int pass = 0;

    while (pass < size - 1)
    {
        bool sorted = true;
        for (int x = 0; x < size - pass - 1; x++)
        {
            if (arr[x] >= arr[x + 1])
            {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
                sorted = false;
            }
        }

        if (sorted)
            break;

        pass++;
    }
}

void printVector(const vector<int> &arr)
{
    for (int num : arr)
        cout << " " << num;
}

int main()
{
    vector<int> arr = {69, 32, 43, 34, 433, 1, -2};
    bubbleSort(arr);
    cout << "Sorted array: \n";
    printVector(arr);
    return 0;
}