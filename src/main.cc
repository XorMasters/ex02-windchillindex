/**
 * CS V13 Object-Oriented Programming
 * CRN: 33323
 * Assignment: EX02-WindChillIndex
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author aknight@vcccd.edu
 */

#include <iostream>
#include "windchillindex.h"

int main(int argc, char *argv[]) {
    double index = edu::vcccd::vc::csv13::computeWindChillIndex(2, 2);

    std::cout << "Wind chill index: " << index << std::endl;
}
