#include <iostream>
#include "fraction.h"
#include "complex.h"
#include "quadratic.h"



int main(){
    quadratic eq1=quadratic(1,1, 67);
    std::cout<<eq1<<std::endl;
    quadratic eq2=quadratic(1.5,2.5);
    std::cout<<eq2<<std::endl;



    return 0;
}