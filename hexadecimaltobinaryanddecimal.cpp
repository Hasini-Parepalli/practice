#include <iostream> 
#include <string> 
int main() {
    std::string hexadecimalcolorcode; 
    std::cout << "Give me a color in hexadecimal" << std::endl; 
    std::cin >> hexadecimalcolorcode; 
    std::string red = hexadecimalcolorcode.substr(0, 2); 
    std::string green = hexadecimalcolorcode.substr(2,2);
    std::string blue = hexadecimalcolorcode.substr(4,2); 
    for (int i=0; i < red.length(); i++) {
        if (red[i] >= 'A') {
            red[i] = red[i] - 'A' + 10;
        } 
        else {
            red[i] = red[i] - '0'; 
        }
    }
    int redbrightness = red[0] * 16 + red[1]; 
    for (int i=0; i < green.length(); i++) {
        if (green[i] >= 'A') {
            green[i] = green[i] - 'A' + 10;
        } 
        else {
            green[i] = green[i] - '0'; 
        }
    }
    int greenbrightness = green[0] * 16 + green[1];
    for (int i=0; i < blue.length(); i++) {
        if (blue[i] >= 'A') {
            blue[i] = blue[i] - 'A' + 10;
        } 
        else {
            blue[i] = blue[i] - '0'; 
        }
    }
    int bluebrightness = blue[0] * 16 + blue[1];
    std::cout << "(" << redbrightness << "," << bluebrightness << "," << greenbrightness << ")" << std::endl;
    std::string firstredbinary = "";
    while (redbrightness > 0) {
        int placeholder = redbrightness % 2; 
        std::string placeholder1 = std::to_string(placeholder);
        firstredbinary += placeholder1; 
        redbrightness = redbrightness / 2; 
    }
    std::string redbinary = "";
    for (int i=firstredbinary.length() - 1 ; i >=0; i--) {
       redbinary +=firstredbinary[i];
    }

    std::string firstbluebinary = "";
    while (bluebrightness > 0) {
        int placeholder = bluebrightness % 2; 
        std::string placeholder1 = std::to_string(placeholder);
        firstbluebinary += placeholder1; 
        bluebrightness = bluebrightness / 2; 
    }
    std::string bluebinary = "";
    for (int i=firstbluebinary.length() - 1 ; i >=0; i--) {
       bluebinary +=firstbluebinary[i];
    }
    std::string firstgreenbinary = "";
    while (greenbrightness > 0) {
        int placeholder = greenbrightness % 2; 
        std::string placeholder1 = std::to_string(placeholder);
        firstgreenbinary += placeholder1; 
        greenbrightness = greenbrightness / 2; 
    }
    std::string greenbinary = "";
    for (int i=firstgreenbinary.length() - 1 ; i >=0; i--) {
       greenbinary +=firstgreenbinary[i];
    }
    std::cout << "(" << redbinary << "," << bluebinary << "," << greenbinary << ")" << std::endl;


}