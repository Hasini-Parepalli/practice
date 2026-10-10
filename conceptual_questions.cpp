#include <iostream> 
#include <string> 
//Question 1 
//inside the function, it would be 4, but in main, it would be 5 
//to change t to also inclue the changed value in the function in the main -> would have to pass it by const by reference 
void doubleIt(int x) {
    x = x * 2; 
    std::cout << "Inside function, x = " << x << std::endl; 
}
//Question 2 
//i think the bug is that t is not returning anything  and it isn't a void function 
//to fix it, i added the return and removed the int and 
int square(int n) {
    int result; 
    return result = n * n; 
}
//Question 3 
//I think the dead code is going to be done classifying because it comes after the return statement and then once it reaches the return statment, it stops the code 
int classify(int n) {
    if (n < 0) {
        return -1; 
    }
    return 1; 
    std::cout << "Done classifying" << std::endl;
}
//Question 4 
//the problem with thisis that int result is defined inside the if condition, meaning that once it exits the if condition, result does not exist anymore and then the 2nd cout line doesn't output because it is referring to a variable that does not exist 
//Question 5 
// since you are given an int and then divide it it would be 3 and then converted to a decimal, which would be 3.0 
double half(int x) {
    return x/2; 
}
//Question 6 
//because void doesn't have a return type?
//since printGreeting is a void function, which will not return anything 
//since it is returning nothing, you can't store nothing in a variable, and the code won't compile 

int main() {
    int n = 5; 
    doubleIt(n); 
    std::cout << "In main, n = " << n << std::endl;
    std::cout << square(4) << std::endl; 
    std::cout << classify(5) << std::endl;
    std::cout << half(7) << std::endl;
}
