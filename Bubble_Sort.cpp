#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
        }
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

    bubbleSort(a, n);
    cout << "Mang sau khi sap xep: "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}