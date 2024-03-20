#pragma once
#include "fraction.h"
#include <cstdint>

class complex{
private:
    fraction _re;
    fraction _im;
public:
    complex();
    complex(double re);
    complex(int32_t re);
    complex(fraction re, fraction im);
    complex(int32_t re_num, uint32_t re_denom, int32_t im_num, uint32_t im_denom );
    complex(int32_t re, int32_t im);
    complex operator+( const complex& comp) const{
        fraction new_re=_re+comp._re;
        fraction new_im=_im+comp._im;
        return complex(new_re, new_im);
    };

    complex operator*(int x){
        fraction new_re=_re*x;
        fraction new_im=_im*x;
        return complex(new_re, new_im);
    };

    friend std::ostream& operator<<(std::ostream& os, const complex& tmp){
        os<<tmp._re;
        if(tmp._im>0)
        os<<" + "<<tmp._im<<"i";
        if(tmp._im<0)
        os<<tmp._im<<"i";
        

        return os;

    };




};
