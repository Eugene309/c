#include <stdio.h>
#include <stdlib.h>

int compare_float(float a, float b) {
    int difference = a - b;
    float min = 0.0001;

    if (difference > -min & difference < min) {
        return 0;
    }

    if (difference > min) {
        return 1;
    }

    return -1;
}

int is_right_triangle(float a, float b, float c) {
    float A = a * a;
    float B = b * b;
    float C = c * c;

    if (compare_float(A + B, C) == 0) {
        return 1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        return  1;
    }

    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);

    if (is_right_triangle(a, b, c) == 1) {
        puts("True");
        return 0;
    }

    puts("False");
    return 0;
}