// Copyright 2018 Cedric Lemaitre

#ifndef SRC_COMMON_PHONE_HPP_
#define SRC_COMMON_PHONE_HPP_


class phone{
 public:
    phone();
    void set_value(int);
    int  get_value();
    void set_year(int);
    int  get_year();
 private:
    int year;
    int value;
};


#endif  //  SRC_COMMON_PHONE_HPP_
