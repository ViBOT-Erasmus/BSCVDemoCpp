// Copyright 2018 Sadiq

#ifndef SRC_COMMON_WATCH_HPP_
#define SRC_COMMON_WATCH_HPP_

#include <string>


class Watch {
 public:
  std::string brand;
  int serial_number;
  Watch(std::string, int);
};
#endif  //  SRC_COMMON_WATCH_HPP_
