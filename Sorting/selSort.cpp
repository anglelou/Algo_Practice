#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
  int temp = a[x];
  a[x] = a[y];
  a[y] = temp;
}

// Location of smallest value's index
int locOfSmallest(int a[], int s, int e)
{
  int i = s;
  int j = i;

  while (i <= e)
  {
    if (a[i] < a[j])
    {
      j = i;
    }
    i = i+1;
  }
  return j;
}

// Swap current index with smallest value in array in ascending order
void selSort(int a[], int n)
{
  int i = 0;
  while( i < n-1)
  {
    int j =locOfSmallest(a, i, n-1);
    swap(a, i, j);
    i++;
  }
}

void display (int a[], int n)
{
  int i = 0;
  while (i < n)
  {
    cout << a[i] << ", ";
    i++;
  }
  cout << "\n";
}

int main()
{
  int arr[] = {101, 14, 202, 1999, 2, 50, 400, 22, 330};
  int size = sizeof(arr)/sizeof(int);

  display(arr, size);
  selSort(arr, size);
  display(arr, size);

  return 0;

}
