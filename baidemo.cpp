#include <iostream>

void generateFirstGeneration(int* arr, int size)
{
    for (int i = 1; i <= size; i++) arr[i] = i;
}

void printThisGeneration(int* arr, int size)
{
    for (int i = 1; i <= size; i++) std::cout << arr[i];
    std::cout << " ";
}

void generateNextGeneration(int* arr, int size, bool& ok)
{
    int index = size - 1;
    while (index > 0 and arr[index] > arr[index + 1]) index--;
    if (index > 0)
    {
        int key = size;
        while (arr[index] > arr[key]) key--;
        std::swap(arr[index], arr[key]);
        int r = index + 1, s = size;
        while (r <= s)
        {
            std::swap(arr[r], arr[s]);
            r++; s--;
        }
    }
    else ok = true;
}

int main()
{
    int testCase, size, * arr;
    bool ok;

    std::cin >> testCase;
    while (testCase--)
    {
        std::cin >> size;
        ok = false;
        arr = new int[size + 1];
        generateFirstGeneration(arr, size);
        while (!ok)
        {
            printThisGeneration(arr, size);
            generateNextGeneration(arr, size, ok);
        }
        std::cout << std::endl;
        delete arr;
    }
}