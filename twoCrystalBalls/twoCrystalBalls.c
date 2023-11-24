#include "twoCrystalBalls.h"
#include "../squareRoot/squareRoot.h"

int twoCrystalBalls(const boolean breaks[], const int length) {
    const int jmpAmount = squareRoot(length);

    int i = 0;
    for (; i < length; i += jmpAmount) {
        if (i >= length - 1 || breaks[i]) {
            break;
        }
    }

    int start = i - jmpAmount;
    if (start < 0) start = 0;

    for (int j = start; j <= i && j < length; j++) {
        if (breaks[j]) {
            return j;
        }
    }

    return -1; //no value was true
}