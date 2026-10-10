#include <iostream> 
#include <string> 
int count_digits(int n) {
    if (n < 10) {
        return 1;  
    }
    return 1 + count_digits(n / 10);
}
bool is_palindrome(const std::string &s, int left, int right) {
    if (left >= right) {
        return true; 
    }
    if (s[left] != s[right]) {
        return false;
    }
    return is_palindrome(s, left+1, right-1);
}
int fib(int n) {
    if (n==0) {
        return 0; 
    }
    if (n==1) {
        return 1; 
    }
    return fib(n-1) + fib(n-2);
}
void print_binary(int n) {
    if (n < 2) {
        std::cout << n;
        return;
    }
    print_binary(n / 2);
    std::cout << n % 2;
}
int main() {
    std::cout << count_digits(-3) << std::endl;
    std::string word = "car";
    if (is_palindrome(word, 0, word.length()-1)) {
        std::cout << "is palindrome" << std::endl;
    } 
    else {
        std::cout << "is not palindrome" << std::endl;
    }
    std::cout << fib(3) << std::endl;
    print_binary(13);
}