#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarysearch(int x, vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == x)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (arr[mid] < x)
            i = mid + 1;
        else
            j = mid - 1;
    }
    cout << "Element not found" << endl;
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    binarysearch(x, arr);

    return 0;
}
