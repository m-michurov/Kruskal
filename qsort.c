#include "qsort.h"


void QuickSort(
        Edge * array,
        const int left,
        const int right)
{
    Edge buff;

    int i = left;
    int j = right;

    if (left < right) {

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
