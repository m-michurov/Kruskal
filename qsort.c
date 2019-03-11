#include "qsort.h"


void QuickSort(
        Edge ** array,
        const int left,
        const int right)
{
    Edge * tmp;

    if (left < right) {

        int i = left,
            j = right;

        int pivot = array[(left + right) / 2]->length;

        do {
            while (array[i]->length < pivot)
                i++;

            while (array[j]->length > pivot)
                j--;

            if (i <= j) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;

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
