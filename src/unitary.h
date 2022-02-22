#ifndef UNITARY_H
#define UNITARY_H

#include <cstdlib> // std::size_t
#include <complex>
#include <vector>

typedef std::complex<double> scalar;
typedef std::vector<std::vector<scalar>> matrix;

class unitary {
  public:
    unitary(std::size_t n) : op(n, std::vector<scalar>(n, 0)), dimension(n) {} // constructor, n x n matrix
    void scalar_multiply(scalar s);
    void vector_multiply(unitary& op);

    // print
    friend std::ostream& operator<<(std::ostream& os, matrix op);
    void print_operator();
  
  private:
    matrix op;
    std::size_t dimension;
  
};

#endif
