#include <iostream>

void swap(int arr[], int ficitve_index_min, int real_index_min);
void selectionsorting(int Arr[], int lenght);

int main()
{
int size = 0;

std::cout << "Enter size:  ";
std::cin >> size;

int arr[size];

	std::cout << "Enter your array elements. " << std::endl;
	int arrcopy[size];
	for (int a = 0; a < size; ++a)
	 {
	    std::cout << "Enter #" << a << "'s one  ";
	    std::cin >> arr[a];
	    arrcopy[a] = arr[a];
	 }

selectionsorting(arr, size);

        for (int b = 0; b < size; ++b)
	 {
	    std::cout << arr[b] << " ";
	 }
std::cout << std::endl;
int elem = 0;

	std::cout << "Which element's initial index do you whant: ";
	std::cin >> elem;

for(int index = 0; index < size; index++)
{
	if(elem == arrcopy[index])
	{
	std::cout << index << std::endl;
	}
}
	

return 0;
}

void selectionsorting(int Arr[], int length)
{
 for(int t = 0; t < length; ++t)
  {
        int min = t;
	for(int i = t; i < length; ++i)
	 {
	   if(Arr[i] < Arr[min])
	    {
		min = i;
	    }
	 }	
	swap(Arr,t,min);
  }
}
void swap(int arr[], int fictive_index_min, int real_min_index)
{
	int tmp = arr[fictive_index_min];
	arr[fictive_index_min]  = arr[real_min_index];
	arr[real_min_index] = tmp;
}
