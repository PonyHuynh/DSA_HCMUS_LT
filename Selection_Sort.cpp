#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
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

    selectionSort(a, n);
    cout << "Mang sau khi sap xeo: "
         << " ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}