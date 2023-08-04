#include <iostream>

using namespace std;

// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void insertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = a[i + 1];
        int pos = i;
        while (pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
int main()
{
    int n;
    cout << "Nhap n: " << endl;
    cin >> n;
    int a[n] = {0};

    cout << "nhap mang a[]= "
         << "";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insertionSort(a, n);
    cout << "Mang sau khi sap xeo: "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}