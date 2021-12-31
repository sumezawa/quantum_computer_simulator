#include "unitary_operator.h"

MyClass::MyClass(unsigned int dim) : dimension(dim), unitary_matrix(dim, std::vector<scalar>(dim, 0));
