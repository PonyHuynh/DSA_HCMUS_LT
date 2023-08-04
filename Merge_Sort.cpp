#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void docFile(int a[], int &n)
{
    ifstream inputFile;
    inputFile.open("input.txt");
    inputFile >> n;
    for (int i = 0; i < n; i++)
    {
        inputFile >> a[i];
    }
    inputFile.close();
}

void ghiFile(int a[], int n)
{
    ofstream outputFile;
    outputFile.open("output.txt");
    for (int i = 0; i < n; i++)
    {
        outputFile << a[i] << " ";
    }
    outputFile.close();
}

void merge(int arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temporary arrays
    int i = 0;
    int j = 0;
    int k = left; // chỉ số ban đầu của mảng con đã merge
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // copy các phần tử còn lại của L[] nếu có
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // copy các phần tử còn lại của R[] nếu có
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {

        int middle = (right + left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // merge các nửa đã sắp xếp
        merge(arr, left, middle, right);
    }
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int arr[n] = {0};
    docFile(arr, n);

    cout << "nhap mang arr[]= ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    ghiFile(arr, n);

    return 0;
}
