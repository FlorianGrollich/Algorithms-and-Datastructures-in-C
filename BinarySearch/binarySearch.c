#include "binarySearch.h"

int BinarySearch(const int* haystack, int size, const int needle) {
    int lo = 0; //lower bound of search space
    int hi = size - 1; //higher bound of search space

    do {
        const int m = lo + (hi - lo) / 2; // middle index of current search space (if even number it's the lower one)
        const int v = haystack[m]; // value of the middle index
        if (v == needle) {
            return m; // Value was found and index is returned
        }
        if (v > needle) {
            hi = m;
        }
        else {
            lo = m + 1;
        }
    }
    while (lo < hi);

    return -1; // The value was not found
}
