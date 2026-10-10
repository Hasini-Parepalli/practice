#include <iostream> 
#include <string> 
#include <cmath> 
#include <iomanip>
double area(double radius) {
    int new_area = 3.14 * radius *radius;
    return new_area;
}
double area(double width, double height) {
    int new_area = width * height;
    return new_area;

}
double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    int new_area = std::sqrt(s * (s - a) * (s - b) * (s - c));
    return new_area;
}
void print_area(const std::string &shape, double value, int precision = 2) {
    std::cout << shape << " area: "
              << std::fixed << std::setprecision(precision)
              << value << std::endl;
}
int main(){
    print_area("circle", area(3.5));
    print_area("rectangle", area(2,2));
    print_area("triangle", area(3,4,5));
}