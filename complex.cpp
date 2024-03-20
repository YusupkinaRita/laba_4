#include "complex.h"


complex::complex(){
    _re=fraction();
    _im=fraction();

};
complex::complex(double re){
    _re=fraction(re);
    _im=fraction(0);

};
complex::complex(int32_t re){
    _re=fraction(re);
    _im=fraction(0);

};

complex::complex(int32_t re, int32_t im){
    _re=fraction(re);
    _im=fraction(im);

};

complex::complex(fraction re, fraction im){
    _re=re;
    _im=im;
};


complex::complex(int32_t re_num, uint32_t re_denom, int32_t im_num, uint32_t im_denom ){
    _re=fraction(re_num, re_denom);
    _im=fraction(im_num,im_denom);
};