#include "complex_numbers.h"
#include <cmath>

namespace complex_numbers{

Complex::Complex(double r, double i){
   real_nbr = r;
   imag_nbr = i;
}

double Complex::real() const{
   return real_nbr;
}

double Complex::imag() const{
   return imag_nbr;
}

Complex Complex::operator*(const Complex &c2) const{
   Complex ret(0,0);
   ret.real_nbr = this->real_nbr * c2.real_nbr - this->imag_nbr * c2.imag_nbr;
   ret.imag_nbr = this->imag_nbr * c2.real_nbr + this->real_nbr * c2.imag_nbr;
   return ret;
}

Complex Complex::operator+(const Complex &c2) const{
   Complex ret(0,0);
   ret.real_nbr = this->real_nbr + c2.real_nbr;
   ret.imag_nbr = this->imag_nbr + c2.imag_nbr;
   return ret;
}

Complex Complex::operator-(const Complex &c2) const{
   Complex ret(0,0);
   ret.real_nbr = this->real_nbr - c2.real_nbr;
   ret.imag_nbr = this->imag_nbr - c2.imag_nbr;
   return ret;
}

Complex Complex::operator/(const Complex &c2) const{
   Complex ret(0,0);
   ret.real_nbr = (this->real_nbr * c2.real_nbr + this->imag_nbr * c2.imag_nbr)/(pow(c2.real_nbr,2) + pow(c2.imag_nbr,2));
   ret.imag_nbr = (this->imag_nbr * c2.real_nbr - this->real_nbr * c2.imag_nbr)/(pow(c2.real_nbr,2) + pow(c2.imag_nbr,2));
   return ret;
}

double Complex::abs() const{
   return sqrt(pow(real_nbr,2) + pow(imag_nbr,2));
}

Complex Complex::conj() const{
   return Complex(this->real_nbr, this->imag_nbr * -1);
}

Complex Complex::exp() const{
   Complex ret(0,0);
   ret.real_nbr = std::exp(this->real_nbr)*cos(this->imag_nbr);
   ret.imag_nbr = std::exp(this->real_nbr)*sin(this->imag_nbr);
   return ret;
}

}
