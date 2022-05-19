#include <iostream>

void counting_sort(int* array, const int& size);

int main()
{
    const int size = 10;
    int arr1[size];
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter " << i + 1 << "'s element: ";
        std::cin >> arr1[i];
    }
    std::cout << std::endl;
    counting_sort(arr1, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void counting_sort(int* array, const int& size)
{
    int output[size];
    int count[size];
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }
    // Inserting the cummulative count of each array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // Find the index of each element of the original array in count array, and place the elements in output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}
