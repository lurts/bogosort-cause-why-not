//
// Created by larse on 2024-04-12.
//

#include <vector>
#include <algorithm>
#include <random>
#include "bogosort.h"

void bogoSort(std::vector<int> &vector) {
    std::random_device rd;
    std::mt19937 r(rd());

    while (!(std::is_sorted(vector.begin(), vector.end())))
    {
        std::shuffle(vector.begin(), vector.end(), r);
    }
}

void bogoSort(std::vector<int> &vector, int &iterations) {
    std::random_device rd;
    std::mt19937 r(rd());

    while (!(std::is_sorted(vector.begin(), vector.end())))
    {
        std::shuffle(vector.begin(), vector.end(), r);
        iterations++;
    }
}
