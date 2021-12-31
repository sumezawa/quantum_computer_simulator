#ifndef UNITARY_OPERATOR_H
#define UNITARY_OPERATOR_H

#include <cstdlib> // std::size_t
#include <complex>
#include <vector>

typedef std::complex<double> scalar;

class unitary_operator {
  public:
    unitary_operator(std::size_t n) : op(n, std::vector<scalar>(n, 0)), dimension(n); // constructor, n x n matrix
    void scalar_multiply(scalar s);
  
    // print
    friend std::ostream& operator<<(std::ostream& os, unitary_operator& op);
    void print_operator();
  
  private:
    unitary_operator op;
    std::size_t dimension;
  
}

#endif
