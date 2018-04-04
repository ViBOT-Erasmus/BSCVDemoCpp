//  Copyright 2018 Cedric Lemaitre
#ifndef SRC_COMMON_EX_TEMPLATE_HPP_
#define SRC_COMMON_EX_TEMPLATE_HPP_

#include <iostream>
/// Template to print type of variable
//
//  Parameter :
//  value : value to display
template<typename T>
void print_data(T value) {
    std::cout << "The value is :" << value << "\n";
}  // print_data

/// Template to add 2 operandes
//
//  Parameters :
//
//      n1 first operande
//      n2 second operande
//
//
//  return the same type T of parameter
template<class T>
T Add_T(T n1, T n2) {
    T result;
    result = n1 + n2;
    return result;
}  // Add_T

#endif  //  SRC_COMMON_EX_TEMPLATE_HPP_
