#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "bogosort.h"


int main() {

    std::vector<int> vector = {3, 5, 1, 9, 10, 0};
    int iterations = 0;

    for (int elem : vector)
        std::cout << elem << ", ";

    std::cout << "\n\n";

    bogoSort(vector, iterations);

    for (int elem : vector)
        std::cout << elem << ", ";

    std::cout << "\nIt only took " << iterations << " iterations... WOW!";

    return 0;
}
