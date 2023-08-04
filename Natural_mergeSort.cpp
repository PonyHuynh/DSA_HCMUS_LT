#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int size_b = mid - left + 1;
    int size_c = right - mid;

    // Tạo hai mảng tạm arr_b và arr_c để lưu trữ mảng con arr[left..mid] và arr[mid+1..right]
    int *arr_b = new int[size_b];
    int *arr_c = new int[size_c];

    // Sao chép các phần tử vào hai mảng tạm b và c
    for (i = 0; i < size_b; i++)
        arr_b[i] = arr[left + i];
    for (j = 0; j < size_c; j++)
        arr_c[j] = arr[mid + 1 + j];

    // Trộn hai mảng b và c để tạo mảng đã được sắp xếp lại
    i = 0;    // index ban đầu của arr_b
    j = 0;    // index ban đầu của arr_c
    k = left; // index ban đầu của arr đã được merge
    while (i < size_b && j < size_c)
    {
        if (arr_b[i] <= arr_c[j])
        {
            arr[k] = arr_b[i];
            i++;
        }
        else
        {
            arr[k] = arr_c[j];
            j++;
        }
        k++;
    }
    // Sao chép các phần tử còn lại của mảng b vào arr
    while (i < size_b)
    {
        arr[k] = arr_b[i];
        i++;
        k++;
    }
    // Sao chép các phần tử còn lại của mảng c vào arr
    while (j < size_c)
    {
        arr[k] = arr_c[j];
        j++;
        k++;
    }

    // Giải phóng bộ nhớ của hai mảng tạm b và c
    delete[] arr_b;
    delete[] arr_c;
}

void naturalMergeSort(int arr[], int n)
{
    int i, j, k;
    bool isSorted = false;
    int left, mid, right;

    // loop đến khi mảng đã được xếp
    while (!isSorted)
    {
        isSorted = true;
        left = 0;

        while (left < n)
        {
            mid = left + 1;
            while (mid < n && arr[mid - 1] <= arr[mid])
            {
                mid++;
            }

            if (mid == n)
            {
                break;
            }

            right = mid + 1;
            while (right < n && arr[right - 1] <= arr[right])
            {
                right++;
            }

            // thực hiện trộn hai mảng lại
            merge(arr, left, mid - 1, right - 1);

            left = right;
            isSorted = false;
        }
    }
}

int main()
{
    int arr[] = {1, 9, 0, 4, 12, 21, 10, 27, 12, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang chua sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    naturalMergeSort(arr, n);

    cout << "\nMang da sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
