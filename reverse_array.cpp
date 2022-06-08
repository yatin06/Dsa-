#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << endl;
    }
}
void reverse_array(int arr[], int start, int end)
{
    cout<<endl;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};

    int n = sizeof(arr) / sizeof(arr[0]);

    print(arr, n);

    reverse_array(arr, 0,n-1);
    print(arr, n);
}