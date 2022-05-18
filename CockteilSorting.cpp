#include <iostream>

void shake(int* Arr, const int & size);

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
    shake(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void shake(int* Arr, const int & size)
{
    int L = 1, temp, j;
    int R = size - 1;
    int k = size - 1;
    do{
        for(j = R; j >= L; j--)
        
            if(Arr[j - 1] > Arr[j])
            {
                temp = Arr[j - 1];
                Arr[j - 1] = Arr[j];
                Arr[j] = temp;
                k = j;
            }
            L = k + 1;
        
            for (j = L; j <= R; j++)
            
                if(Arr[j - 1] > Arr[j])
                {
                    temp = Arr[j - 1];
                    Arr[j - 1] = Arr[j];
                    Arr[j] = temp;
                    k = j;
                }
                R = k - 1;
            
        
    }while(L <= R);
    
}
