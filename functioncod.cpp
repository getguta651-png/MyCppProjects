#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int arrayoffunction(int arr[], int size)
{
  cout << "Enter the elements of the array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  return 0;
}
void countposative(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      count++;
    }
  }
  cout << "The number of positive elements in the array is: " << count << endl;
}
void countnegative(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < 0)
    {
      count++;
    }
  }
  cout << "The number of negative elements in the array is: " << count << endl;
}
void countzero(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      count++;
    }
  }
  cout << "The number of zero elements in the array is: " << count << endl;
}
void sumofposative(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      sum += arr[i];
    }
  }
  cout << "The sum of positive elements in the array is: " << sum << endl;
}
void sumofnegative(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < 0)
    {
      sum += arr[i];
    }
  }
  cout << "The sum of negative elements in the array is: " << sum << endl;
}
void countofeven(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      count++;
    }
  }
  cout << "The number of even elements in the array is: " << count << endl;
}
void countofodd(int arr[], int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      count++;
    }
  }
  cout << "The number of odd elements in the array is: " << count << endl;
}
void sumofodd(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      sum += arr[i];
    }
  }
  cout << "Sum of odd elements in the array =: " << sum << endl;
}
void sumofeven(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      sum += arr[i];
    }
  }
  cout << "Sum of even elements in the array =: " << sum << endl;
}
void averageofall(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  cout << "Average of all elements in the array =: " << (float)sum / size << endl;
}
void averageofposative(int arr[], int size)
{
  int sum = 0;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      sum += arr[i];
      count++;
    }
  }
  cout << "Average of positive elements in the array =: " << (float)sum / count << endl;
}

void averageofnegative(int arr[], int size)
{
  int sum = 0;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < 0)
    {
      sum += arr[i];
      count++;
    }
  }
  cout << "Average of negative elements in the array =: " << (float)sum / count << endl;
}
void averageofeven(int arr[], int size)
{
  int sum = 0;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      sum += arr[i];
      count++;
    }
  }
  cout << "Average of even elements in the array =: " << (float)sum / count << endl;
}
void averageofodd(int arr[], int size)
{
  int sum = 0;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      sum += arr[i];
      count++;
    }
  }
  cout << "Average of odd elements in the array =: " << (float)sum / count << endl;
}
void maximum(int arr[], int size)
{
  int max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  cout << "Maximum element in the array =: " << max << endl;
}
void minimum(int arr[], int size)
{
  int min = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << "Minimum element in the array =: " << min << endl;
}
void reverse(int arr[], int size)
{
  cout << "The reverse of the array is: ";
  for (int i = size - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  cout << "Sorted array is: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void display(int arr[], int size)
{
  cout << "The elements of the array are: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void search(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      cout << "The element " << key << " is found at index " << i << endl;
      return;
    }
  }
  cout << "The element " << key << " is not found in the array" << endl;
}
void frequency(int arr[], int size, int key)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      count++;
    }
  }
  cout << "The frequency of the element " << key << " in the array is: " << count << endl;
}
void remove(int arr[], int size, int key)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      break;
    }
  }
  if (i == size)
  {
    cout << "The element " << key << " is not found in the array" << endl;
    return;
  }
  for (int j = i; j < size - 1; j++)
  {
    arr[j] = arr[j + 1];
  }
  cout << "The element " << key << " is removed from the array" << endl;
}
void insert(int arr[], int size, int key, int pos)
{
  if (pos < 0 || pos > size)
  {
    cout << "Invalid position" << endl;
    return;
  }
  for (int i = size; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos] = key;
  cout << "The element " << key << " is inserted at position " << pos << endl;
}
void merge(int arr1[], int size1, int arr2[], int size2)
{
  int arr3[size1 + size2];
  for (int i = 0; i < size1; i++)
  {
    arr3[i] = arr1[i];
  }
  for (int i = 0; i < size2; i++)
  {
    arr3[size1 + i] = arr2[i];
  }
  cout << "The merged array is: ";
  for (int i = 0; i < size1 + size2; i++)
  {
    cout << arr3[i] << " ";
  }
  cout << endl;
}
void copy(int arr1[], int size1, int arr2[], int size2)
{
  for (int i = 0; i < size1; i++)
  {
    arr2[i] = arr1[i];
  }
  cout << "The copied array is: ";
  for (int i = 0; i < size1; i++)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;
}
void rotate(int arr[], int size, int d)
{
  for (int i = 0; i < d; i++)
  {
    int temp = arr[0];
    for (int j = 0; j < size - 1; j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[size - 1] = temp;
  }
  cout << "The rotated array is: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void leftrotate(int arr[], int size, int d)
{
  for (int i = 0; i < d; i++)
  {
    int temp = arr[0];
    for (int j = 0; j < size - 1; j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[size - 1] = temp;
  }
  cout << "Left rotated array =: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void rightrotate(int arr[], int size, int d)
{
  for (int i = 0; i < d; i++)
  {
    int temp = arr[size - 1];
    for (int j = size - 1; j > 0; j--)
    {
      arr[j] = arr[j - 1];
    }
    arr[0] = temp;
  }
  cout << "Right rotated array = : ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void displaymenu()
{
  cout << "1. Count positive elements" << endl;
  cout << "2. Count negative elements" << endl;
  cout << "3. Count zero elements" << endl;
  cout << "4. Sum of positive elements" << endl;
  cout << "5. Sum of negative elements" << endl;
  cout << "6. Count of even elements" << endl;
  cout << "7. Count of odd elements" << endl;
  cout << "8. Sum of odd elements" << endl;
  cout << "9. Sum of even elements" << endl;
  cout << "10. Average of positive elements" << endl;
  cout << "11. Average of negative elements" << endl;
  cout << "12. Average of even elements" << endl;
  cout << "13. Average of odd elements" << endl;
  cout << "14. Maximum element" << endl;
  cout << "15. Minimum element" << endl;
  cout << "16. Reverse the array" << endl;
  cout << "17. Sort the array" << endl;
  cout << "18. Display the array" << endl;
  cout << "19. Search for an element" << endl;
  cout << "20. Frequency of an element" << endl;
  cout << "21. Remove an element" << endl;
  cout << "22. Insert an element" << endl;
  cout << "23. Merge two arrays" << endl;
  cout << "24. Copy an array to another array" << endl;
  cout << "25. Rotate the array to the left by d positions" << endl;
  cout << "26. Rotate the array to the right by d positions" << endl;
}
void displayaall(int arr[], int size)
{

  countposative(arr, size);
  countnegative(arr, size);
  countzero(arr, size);
  sumofposative(arr, size);
  sumofnegative(arr, size);
  countofeven(arr, size);
  countofodd(arr, size);
  sumofodd(arr, size);
  sumofeven(arr, size);
  averageofall(arr, size);
  averageofposative(arr, size);
  averageofnegative(arr, size);
  averageofeven(arr, size);
  averageofodd(arr, size);
  maximum(arr, size);
  minimum(arr, size);
  reverse(arr, size);
  sort(arr, size);
  display(arr, size);
}
int main()
{
  const int size = 5;
  int arr[size];
  arrayoffunction(arr, size);
  displaymenu();
  displayaall(arr, size);

  return 0;
}