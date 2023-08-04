#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// void Sort(int a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] > a[i])
//                 swap(a[i], a[j]);
//         }
//     }
// }
void quickSort(int a[], int left, int right)
{
    int i, j, x;
    if (left >= right)
        return;
    x = a[(left + right) / 2];
    i = left;
    j = right;
    do
    {
        while (a[i] < x)
        {
            i++;
        }
        while (a[j] > x)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i < j);
    if (left < j)
        quickSort(a, left, j);
    if (i < right)
        quickSort(a, i, right);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n] = {0};
    cout << "nhap a[] = "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0;
    int right = n - 1;
    // Sort(a, n);
    // cout << "Mang sau khi dung Sort: "
    //      << " ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    quickSort(a, left, right);
    cout << endl
         << "Mang sau khi dung QuickSort: "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}