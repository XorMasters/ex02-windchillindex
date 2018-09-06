#include <iostream>
#include "windchillindex.h"

int main(int argc, char *argv[]) {
    double index = edu::vcccd::vc::csv13::computeWindChillIndex(2, 2);

    std::cout << "Wind chill index: " << index << std::endl;
}
