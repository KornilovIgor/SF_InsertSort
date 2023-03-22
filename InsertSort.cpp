#include "InsertSort.h"

void insSort(int *arr, int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1; 

        // Сдвигаем элементы arr[0..i-1], которые больше чем key, на одну позицию вперед
        // ваш код

        while (0 <= j)
        {
            if (key >= arr[j])
            {
                break;
            }
            if (key < arr[j])
            {
                arr[j + 1] = arr[j];
                --j;
            }
        }

        arr[j + 1] = key;
    }
}
