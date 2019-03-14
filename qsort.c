#include "qsort.h"

// a buffer to temporarily store structure when swapping array elements
static Edge buff;

void QuickSort(
        Edge * array,
        const int left,
        const int right)
{
    if (left < right) {

        int i = left,
            j = right;

        int pivot = array[(left + right) / 2].length;

        do {
            while (array[i].length < pivot)
                i++;

            while (array[j].length > pivot)
                j--;

            if (i <= j) {
                buff = array[i];
                array[i] = array[j];
                array[j] = buff;

                i++;
                j--;
            }
        } while (i <= j);

        if (i < right)
            QuickSort(array, i, right);
        if (j > left)
            QuickSort(array, left, j);

    }
}
