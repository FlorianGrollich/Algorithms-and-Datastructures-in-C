#include "squareRoot.h"


double squareRoot(const double number) {
    constexpr double error = 0.000001;
    double s = number;
    while (s - number / s > error) {
        s = (s + number / s) / 2;
    }

    return s;
}
