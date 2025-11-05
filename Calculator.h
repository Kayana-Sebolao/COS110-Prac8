#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Operator.h"
#include "PlusOperator.h"
#include "MinusOperator.h"
#include "MultiplyOperator.h"

template <class T>
class Calcuator{
private:
stack<T*>* valueStack;
stack<Operator<T>*>* operatorStack;
};



#endif