#include <iostream>

void shell(int* array, const int& n);

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
    shell(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void shell(int* array, const int& n)
{
    for(int interval = n / 2; interval > 0; interval /= 2)
    {
        for(int i = interval; i < n; i++)
        {
            int temp = array[i];
            int j;
            for(j = i; j >= interval && array[j - interval] > temp; j -= interval)
            {
                array[j] = array[j - interval];
            }
            array[j] = temp;
        }
    }
}
