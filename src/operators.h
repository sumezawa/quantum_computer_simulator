#ifndef OPERATORS_H
#define OPERATORS_H

#include <complex>
#include <vector>

typedef std::complex<double> scalar;

class operators {
  public:
    unitary_operator(unsigned int dimension);
    scalar_multiply(scalar a);
  
  private:
    std::vector<std::vector<scalar>> matrix;
    unsigned int dimension;
  
}

#endif
