#include "unitary.h"
#include <algorithm> // std::transform
#include <iostream> // std::ostream, std::cout

/* SCALAR MULTIPLICATION OF AN OPERATOR */
void unitary::scalar_multiply(scalar s) {
  for (matrix::iterator rowptr = op.begin(); rowptr != op.end(); ++rowptr) {
    std::transform(rowptr->begin(), rowptr->end(), rowptr->begin(), [s](scalar &c){ return c*s; });
    // std::transform performs an operation on each element of the vector (the row); the parameters specify:
    // parameter 1, 2 specify the range of elements [ rowptr->begin(), rowptr->end() ) to modify.
    // parameter 3 specifies the initial iterator where we store the values after modification.
    // parameter 4 is a lambda function that accepts some scalar 's' as a parameter ('c' is a dummy variable for row elements)
    // in particular, the function multiplies the row element by 's' and returns the result, for each element of the row.
  }
  return;
}

/* VECTOR MULTIPLICATION OF AN OPERATOR */
void unitary::vector_multiply(unitary& op) {
  std::vector<std::vector<scalar>> product(this->dimension, std::vector<scalar>(this->dimension, 0));
  // take column 
  return;
}


/* PRINT OPERATOR */
std::ostream &operator<<(std::ostream &os, matrix op) {
  for (matrix::iterator rowptr = op.begin(); rowptr != op.end(); ++rowptr) {
    for (std::vector<scalar>::iterator colptr = rowptr->begin(); colptr != rowptr->end(); ++colptr) {
      os << *colptr << " ";
    }
    os << std::endl;
  }
  return os;
}

void unitary::print_operator() {
  std::cout << op;
}
