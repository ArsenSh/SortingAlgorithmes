#include <iostream>

void sorting(int* Arr, int& n);

int main()
{
const int size = 10;
int arr[size];

		std::cout << "Enter your array elements. " << std::endl;

	for(int i = 0; i < size; ++i)
	 {
	   std::cout << "Enter #" << i + 1 << " ";
 	   std::cin >> arr[i];
	 }
sorting(arr, size);

	for(int j = 0; j < size; ++j)
	 {
	   std::cout << arr[j] << "  ";
	 }

return 0;
}

void sorting(int* Arr, int& n)
{
	for(int i = 1; i < n; ++i)
	 {
           int key = Arr[i];
 	   int j = i - 1;
		while(j >= 0 && Arr[j] > key)
		 {
 		  Arr[j + 1] = Arr[j];
		  j = j - 1;
		 }
	    Arr[j + 1] = key;
	 }
}
