#include "unitary_operator.h"
#include <algorithm> // std::transform
#include <iostream> // std::ostream, std::cout

/* SCALAR MULTIPLICATION OF AN OPERATOR */
void unitary_operator::scalar_multiply(scalar s) {
  for (std::vector<std::vector<scalar>>::iterator rowptr = op.begin(); rowptr != op.end(); ++rowptr) {
    std::transform(rowptr->begin(), rowptr->end(), rowptr->begin(), [s](int &c){ return c*s; });
    // std::transform performs an operation on each element of the vector (the row); the parameters specify:
    // parameter 1, 2 specify the range of elements [ rowptr->begin(), rowptr->end() ) to modify.
    // parameter 3 specifies the initial iterator where we store the values after modification.
    // parameter 4 is a lambda function that accepts some scalar 's' as a parameter ('c' is a dummy variable for row elements)
    // in particular, the function multiplies the row element by 's' and returns the result, for each element of the row.
  }
  return;
}

/* VECTOR MULTIPLICATION OF AN OPERATOR */
void unitary_operator::vector_multiply(unitary_operator& op) {
  std::vector<std::vector<scalar>> product(n, std::vector<scalar>(n, 0));
  // take column 
  return;
}


/* PRINT OPERATOR */
std::ostream &operator<<(std::ostream &os, unitary_operator op) {
  for (std::vector<std::vector<scalar>>::iterator rowptr = op.begin(); rowptr != op.end(); ++rowptr) {
    for (std::vector<scalar>::iterator colptr = rowptr->begin(); colptr != rowptr->end(); ++colptr) {
      os << *colptr << " ";
    }
    os << std::endl;
  }
  return os;
}

void unitary_operator::print_operator() {
  std::cout << *this;
}
    

 
