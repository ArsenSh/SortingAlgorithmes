#include <iostream>

void bubble(int* Arr, const int& size);

int main ()
{
    const int size = 10;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter the " << i + 1 << " | 10 element: ";
        std::cin >> arr[i];
    }
    std::cout << "Result is below." << std::endl;
    bubble(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

void bubble(int* Arr, const int& size)
{
    bool swapped = true;
    int j = 0, tmp;
    while(swapped)
    {
        swapped = false;
        ++j;
        for(int i = 0; i < size - j; i++)
        {
            if(Arr[i] > Arr[i + 1])
            {
                tmp = Arr[i];
                Arr[i] = Arr[i + 1];
                Arr[i + 1] = tmp;
                swapped = true;
            }
        }
    }
}

