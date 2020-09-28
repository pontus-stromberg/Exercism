#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers{

class Complex{
   public:
      Complex(double, double);
      double real() const;
      double imag() const;
      Complex operator*(const Complex &c2) const;
      Complex operator+(const Complex &c2) const;
      Complex operator-(const Complex &c2) const;
      Complex operator/(const Complex &c2) const; 
      double abs() const;
      Complex conj() const;
      Complex exp() const;
   private:
      double real_nbr;
      double imag_nbr;
};

}

#endif
