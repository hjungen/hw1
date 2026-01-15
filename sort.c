/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	   

    if (size <= 1) {
        return;
    }

    for (int i = 0; i < size - 1; i++) {
        int selected_index = i;

        for (int j = i + 1; j < size; j++) {

#ifdef ASCENDING
            /* Find the SMALLEST remaining element */
            if (arr[j] < arr[selected_index]) {
                selected_index = j;
            }
#else
            /* Find the LARGEST remaining element */
            if (arr[j] > arr[selected_index]) {
                selected_index = j;
            }
#endif
        }

        /* Swap arr[i] and arr[selected_index] */
        if (selected_index != i) {
            int temp = arr[i];
            arr[i] = arr[selected_index];
            arr[selected_index] = temp;
        }
    }
}
