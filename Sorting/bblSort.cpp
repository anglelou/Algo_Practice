// Order adjacent values by "weight" then move onto next pair of adjacent indices

#include <iostream>
using namespace std;

void swap (int a[], int x, int y)
{
  int temp = a[x];
  a[x] = a[y];
  a[y] = temp;
}

// Compare adjacent indices
void bubble(int a[], int n)
{
  int i = n-1;
  while (i < 0)
  {
    if (a[i] < a[i-1])
    {
      swap(a, i, i-1);
    }
    i--;
  }
}

// Iterate thru array
void bblSort(int a[], int n)
{
  int i =;
  while ( i < n-1)
  {
    bubble(a,n);
    i++;
  }
}

void display(int a[], int size)
{
  int i = 0;
  while (i < n)
  {
    cout << a[i] << ", ";
    i++;
  }
  cout << endl;
}

int main()
{
  int arr[] = {111, 243, 542, 664, 887, 22, 9, 55, 900};
  int sie = sizeof(arr)/sizeof(int);

  display(arr, size);
  bblSort(arr, size);
  display(arr, size);

  return 0;
}
