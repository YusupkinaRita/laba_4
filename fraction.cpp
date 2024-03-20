#include "fraction.h"
#include <math.h>



fraction::fraction(){

};

fraction::fraction(int32_t num){
    _num=num;
    _denom=1;
}

fraction::fraction(int32_t num, uint32_t denom){
    _num = num;
    if(denom!=0)
    _denom=denom;
    reduce();
};



fraction::fraction(double realFract){
    int ind=0;
    int whole_part=static_cast<int>(realFract);
    double fract=realFract-whole_part;
    for (int i=0;;i++){
        fract=fract*10;
        ind++;
        if(static_cast<int>(fract)==fract)
        break;

    }

    _denom=pow(10,ind);
    _num=whole_part*_denom+fract;
    reduce();



}
int find_nod(int a, int b){
    int temp=0;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
        }
    return a;
}

void fraction::reduce(){
    int d=find_nod(_num,_denom);
    if(d<0)
    d=d*(-1);
    _num/=d;
    _denom/=d;
    
}