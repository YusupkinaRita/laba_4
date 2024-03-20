#pragma once
#include <iostream>
#include <math.h>
#include <cstdint>

class fraction{
private:
    void reduce();
    int32_t _num;
    uint32_t _denom;
public:
    fraction();
    fraction(int32_t num);
    fraction(double realFract);
    fraction(int32_t num, uint32_t denom);
    fraction operator+(const fraction& fract) const {
        int32_t new_num = _num * fract._denom 
        + fract._num * _denom;
        uint32_t new_denum = _denom * fract._denom; 
        fraction res = fraction(new_num, new_denum);
        return res;
    }

    fraction operator-(const fraction& fract) const{
        int32_t new_num = _num * fract._denom 
        - fract._num * _denom;
        uint32_t new_denum = _denom * fract._denom; 
        fraction res = fraction(new_num, new_denum);
        return res;
    }

    fraction operator*(const fraction& fract) const{
        int32_t new_num = _num * fract._num;
        int32_t new_denom = _denom * fract._denom;
        return fraction(new_num, new_denom);
    }
    fraction operator*(int32_t a) {
        int32_t new_num = _num * a;
        int32_t new_denom = _denom;
        return fraction(new_num, new_denom);
    }

    fraction operator/(const fraction& fract) const{
        int32_t new_num = _num * fract._denom;
        uint32_t new_denom = fract._num * _denom;
        return fraction(new_num, new_denom);
    }

    friend fraction sqrt(const fraction& fract) {
        int32_t new_num = sqrt(fract._num);
        uint32_t new_denom = sqrt(fract._denom);
        return fraction(new_num, new_denom);
    }

    bool operator>(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom > static_cast<double>(fract._num)/fract._denom;
        
    }
    bool operator>=(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom >= static_cast<double>(fract._num)/fract._denom;
        
    }

    bool operator<(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom < static_cast<double>(fract._num)/fract._denom;
    }
    

    bool operator<=(const fraction& fract) const  {
        return static_cast<double>(_num)/_denom <= static_cast<double>(fract._num)/fract._denom;
    
    }



    bool operator!=(const fraction& fract) const {
        return static_cast<double>(_num)/_denom != static_cast<double>(fract._num)/fract._denom;
        
    }

    bool operator==(const fraction& fract) const {
        return static_cast<double>(_num)/_denom == static_cast<double>(fract._num)/fract._denom;
        
    }
    





    friend std::ostream& operator<<(std::ostream& os, const fraction& tmp){
        if(tmp._denom==1)
        os<<tmp._num;
        else
        os << tmp._num << "/" << tmp._denom ;
        return os;
    }

};