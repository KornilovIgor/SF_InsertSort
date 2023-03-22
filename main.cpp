#include "InsertSort.h"

#include <ctime>
#include <iostream>

int main()
{
    const int size = 20;

    int* arr = new int [size]; 

    unsigned value = unsigned(std::time(nullptr));
    // Порождаем и выводим 20 чисел, используя время UNIX как зерно.
    for (int i = 0; i < size; ++i)
    {
        value = (value * 73129 + 95121) % 100;
        std::cout << value << ' ';
        arr[i] = value;
    }
    std::cout << std::endl;

    insSort(arr, size);

    for (int i = 0; i < size; ++i)
    {

        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
