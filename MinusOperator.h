#ifndef MINUSOPERATOR_H
#define MINUSOPERATOR_H
#include "Operator.h"

template <class T>
class MinusOperator : public Operator{
    public:
    T operator()(T lhs, T rhs);
    Operator<T>* clone();
};



#endif
