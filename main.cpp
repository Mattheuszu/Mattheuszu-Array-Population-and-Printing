#include <iostream>
#include <ctime>

using namespace std;

// Function to generate random numbers between min and max
int genRand(int min, int max)
{
    return min + rand() % (max - min + 1);
}

// Function to fill the array with either user input or random numbers
void fillArray(int arr[], int size)
{
    bool choose;
    cout << "Выберите способ заполнения массива (0 - ввод (от 1 до 1000), 1 - случайно): ";
    cin >> choose;
    if (choose)
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    else {
        for (int i = 0; i < size; i++)
            arr[i] = genRand(1, 1000);
    }
}

// Function to print the array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main()
{
    srand(time(NULL));
    int arr[50];
    int arr2[100];
    fillArray(arr, 50);
    fillArray(arr2, 100);
    cout << "First array: " << endl; 
    printArray(arr, 50);
    cout << "Second array: " << endl;
    printArray(arr2, 100);
    
    return 0;
}