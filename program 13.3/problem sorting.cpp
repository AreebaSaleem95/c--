#include<iostream>
using namespace std;
int findMin(int arr[], int size)
 {
  int min = arr[0];
  for (int i = 1; i < size; i++)
   {
    if (arr[i] < min)
	 {
      min = arr[i];
    }
  }

  return min;
}
int main()
 {
  int array[] = {23, 9, 77, 4, 8, 10, 3, 9, 55};
  int size = sizeof(array) / sizeof(array[0]);
    std::cout << "Minimum number: " << findMin(array, size) << std::
endl;
return 0;

}
