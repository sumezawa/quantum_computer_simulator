#ifndef UNITARY_OPERATOR_H
#define UNITARY_OPERATOR_H

#include <complex>
#include <vector>

typedef std::complex<double> scalar;

class unitary_operator {
  public:
    unitary_operator(unsigned int dimension);
    unitary_operator scalar_multiply(scalar a);
  
  private:
    std::vector<std::vector<scalar>> matrix;
    unsigned int dimension;
  
}

#endif
