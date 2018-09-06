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

#include <cfloat>
#include <cmath>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    double computeWindChillIndex(double temperature, double windVelocity) {
        if (temperature > 10.0) return FLT_MIN;

        return 33.0 - ((10.0 * sqrt(windVelocity) - windVelocity) * (33.0 - temperature)) / 23.1;
    }
}}}}
