#include <iostream>

void heap_sorting(int* array, const int& size);
void heapify(int array[], int n, int i);
void swap(int& a, int& b);

int main()
{
    const int size = 10;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter " << i + 1 << "'s element: ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;
    heap_sorting(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;
    return 0;
}

void heap_sorting(int* array, const int& size)
{
    for(int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(array, size, i);
        heapify(array, size, i);
    }
    for(int i = size - 1; i >= 0; i--)
    {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}
void heapify(int array[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && array[left] > array[largest])
    {
        largest = left;
    }
    if (right < n && array[right] > array[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(array[i], array[largest]);
        heapify(array, n, largest);
    }
}

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
