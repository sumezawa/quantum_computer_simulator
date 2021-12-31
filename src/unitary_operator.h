#ifndef UNITARY_OPERATOR_H
#define UNITARY_OPERATOR_H

#include <complex>
#include <vector>

typedef std::complex<double> scalar;

class unitary_operator {
  public:
    unitary_operator(unsigned int dimension);
    
  private:
    std::vector<std::vector<scalar>> unitary_matrix;
    unsigned int dimension;
  
}

#endif
