#include <iostream> 
#include <string> 

int main() {
    int integer; 
    std::cout << "Give me a number" << std::endl;
    std::cin >> integer;
    //integer to decimal 
    double decimal = integer;
    std::cout << decimal << std::endl;
    //integer to binary 
    std::string firstbinary = "";
    int n = integer; 
    while (n> 0) {
        int remainder = n % 2; 
        if (remainder == 0) {
            firstbinary = firstbinary + '0';
        }
        else {
            firstbinary = firstbinary + '1';
        }
        n = n/2;
    }
    std::string finalbinary = "";
    for (int i = firstbinary.length()-1; i >= 0; i--) {
        finalbinary += firstbinary[i];
    }
    std::cout << finalbinary << std::endl;
    int currentlyintbutforhex = integer; 
    //integer to hex 
    std::string firsthex = "";
    while (currentlyintbutforhex > 0) {
        int remainder = currentlyintbutforhex % 16; 
        if (remainder < 10) {
            firsthex += remainder + '0'; //before it was: firsthex += remainder ; -> but this will fail because += willconvert the int 5 into a character that has an ASCII vaulue of 5, even though i jsy want the character 5 
        }
        else if (remainder >=10) {
            char alphabetremainder; 
            if (remainder == 10) {
                alphabetremainder = 'A';
            }
            else if (remainder == 11) {
                alphabetremainder = 'B';
            }
            else if (remainder == 12) {
                alphabetremainder = 'C';
            }
            else if (remainder == 13) {
                alphabetremainder = 'D';
            }
            else if (remainder == 14) {
                alphabetremainder = 'E';
            }
            else {
                alphabetremainder = 'F';
            }
            firsthex += alphabetremainder; 
        }
        currentlyintbutforhex = currentlyintbutforhex/16;
    }
    std::string finalhex = "";
    for (int i = firsthex.length() - 1; i >= 0; i--) {
        finalhex+= firsthex[i];
    }
    std::cout << finalhex << std::endl;
    //integer to string 
    std::string integerasastring = std::to_string(integer);
    //integer to octal 
    std::string firstoctal = ""; 
    int oct = integer; 
    while (oct> 0) {
        int remainder = oct % 8;
        firstoctal += remainder + '0';
        oct = oct/8;
    }
    std::string finaloctal = "";
    for (int i = firstoctal.length()-1; i >= 0; i--) {
        finaloctal += firstoctal[i];
    }
    std::cout << finaloctal << std::endl;

}