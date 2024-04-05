// コードを入力してください
#include <iostream>
#include "unique_ptr.hpp"

int main(){
    unique_int_ptr my_int(3);
    std::cout << *my_int << std::endl;

    unique_ptr number(3);
    std::cout << *number << std::endl;    

}