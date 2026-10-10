#include <iostream> 
#include <string> 
bool is_set(int num, int bit) {
    std::string binarynumber = "";
    while (num > 0) {
        int placeholder = num % 2; 
        std::string placeholder1 = std::to_string(placeholder);
        binarynumber += placeholder1;
        num = num /2;
    }
    if (bit < 0 || bit >= binarynumber.length() ) {
      return false;
    }
    if (binarynumber[bit] == '1') {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    if (is_set(13, 2)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}
//bits are numbered from the right to the left 
