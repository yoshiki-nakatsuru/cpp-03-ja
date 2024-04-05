// コードを入力してください
#pragma once

class unique_int_ptr{
public:
    unique_int_ptr(int num);
    ~unique_int_ptr();
    int* get() const;
    int* release();
    int& operator *();
private:
    int *numPtr;

};

template <typename T>
class unique_ptr{
public:
    unique_ptr(T input):uniquePtr(new T(input)){}
    ~unique_ptr(){
        delete this->uniquePtr;
    } 
    T* get() const{
        return this->uniquePtr;
    }

    T* release(){
        int* ret = this->uniquePtr;
        this->uniquePtr = nullptr;
        return ret;
    }

    T& operator *(){
        return *(this->uniquePtr);
    }

private:
    T* uniquePtr;
};