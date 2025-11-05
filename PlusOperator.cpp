#include "PlusOperator.h"

//1
template <class T>
T PlusOperator<T>::operator()(T lhs, T rhs){
    return lhs + rhs;
}
//2
template <class T>
Operator<T>* clone(){
    PlusOperator<T>* newObject = new PlusOperator<T>;
    return newObject;
}