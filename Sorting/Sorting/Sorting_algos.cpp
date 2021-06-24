//
//  sorting_algos.cpp
//  Algos
//
//  Created by Angel Soto.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
    int n;
    int arr[MAX];

    cout << "enter size of array (<100)" << endl;
    cin >> n;

    // Inputting random values into array
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand();
    }

    // Outputting the unsorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    // Sort array
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            // Ascending order
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Display sorted array
    cout << "Sorted array \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
        
    }
    cout << "\n";

    return 0;
}

