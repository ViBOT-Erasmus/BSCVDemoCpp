// Copyright 2019 Cedric Lemaitre

#ifndef SRC_COMMON_FUNCTOR_HPP_
#define SRC_COMMON_FUNCTOR_HPP_
#include <iostream>
#include <string>


namespace demobscv {
namespace functor {
class A {
 public:
  inline A(int k) : val_(k) {}
  inline void operator()(int i) {
    res_pop_ = val_ + i;
  }
  inline int get_res_pop() {
    return res_pop_;
  }

private:
  int val_;
  int res_pop_;
};
}
}
#endif  //  SRC_COMMON_FUNCTOR_HPP_
