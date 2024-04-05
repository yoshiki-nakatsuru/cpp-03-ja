#include "unique_ptr.hpp"

unique_int_ptr::unique_int_ptr(int num) : numPtr(new int(num)){

}

unique_int_ptr::~unique_int_ptr(){
    delete this->numPtr;
}

int* unique_int_ptr::get() const{
    return this->numPtr;
}

int* unique_int_ptr::release(){
    int* ret = this->numPtr;
    this->numPtr = nullptr;
    return ret;
}

int& unique_int_ptr::operator *(){
    return *(this->numPtr);
}