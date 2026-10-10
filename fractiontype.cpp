#include <iostream>
using namespace std;
 
struct Fraction {
    int num;
    int den;
};
 
static int gcd(int a, int b) {
    if (b == 0)
        if (a < 0)
            return -a;
        return a;
    return gcd(b, a % b);
}
 
Fraction simplify(Fraction f) {
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    int g = gcd(f.num, f.den);
    if (g > 1) {
        f.num /= g;
        f.den /= g;
    }
    return f;
}
 
Fraction operator+(const Fraction &a, const Fraction &b) {
    return simplify({a.num * b.den + b.num * a.den, a.den * b.den});
}
 
Fraction operator-(const Fraction &a, const Fraction &b) {
    return simplify({a.num * b.den - b.num * a.den, a.den * b.den});
}
 
Fraction operator*(const Fraction &a, const Fraction &b) {
    return simplify({a.num * b.num, a.den * b.den});
}
 
bool operator==(const Fraction &a, const Fraction &b) {
    Fraction x = simplify(a), y = simplify(b);
    return x.num == y.num && x.den == y.den;
}
 
bool operator<(const Fraction &a, const Fraction &b) {
    Fraction x = simplify(a), y = simplify(b);   
    return (long long)x.num * y.den < (long long)y.num * x.den;
}
 
ostream &operator<<(ostream &os, const Fraction &f) {
    if (f.den == 1)
        os << f.num;
    else
        os << f.num << "/" << f.den;
    return os;
}
 
int main() {
    cout << boolalpha;
 
    Fraction a{1, 2}, b{1, 3};
    cout << a << " + " << b << " = " << a + b << endl;
 
    Fraction c{3, 4}, d{1, 4};
    cout << c << " - " << d << " = " << c - d << endl;
 
    Fraction e{2, 3};
    cout << e << " * " << c << " = " << e * c << endl;
 
    Fraction f{2, 4};
    cout << a << " == " << f << " : " << (a == f) << endl;
 
    cout << b << " < " << a << " : " << (b < a) << endl;
}
 