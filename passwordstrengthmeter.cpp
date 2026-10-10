#include <iostream> 
#include <string> 
bool hasUpperCase(std::string s) {
    for (char c: s) {
        if (c >= 'A' && c <= 'Z') {
            return true; 
        }
    }
    return false; 
}
bool hasDigit(std::string s) {
    for (char c: s) {
        if (c >= '0' && c <= '9') {
            return true; 
        }
    }
    return false; 
}
bool hasSpecialChar(std::string s) {
    for (char c: s) {
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))) {
            return true;
        }
    }
    return false; 
}
int strengthScore(std::string password) {
    int the_score = 0; 
    if (password.length() >= 8) {
        the_score++; 
    }
    if (hasSpecialChar(password)) {
        the_score++; 
    }
    if (hasDigit(password)) {
        the_score++; 
    }
    if (hasUpperCase(password)) {
        the_score++;
    }
    return the_score;
}
std::string ratingFor(int score) {
    std::string answer;
    if (score >=0 && score <=1) {
        answer = "Weak"; 
    }
    if (score >=2 && score <=3) {
        answer = "Moderate"; 
    }
    if (score == 4) {
        answer = "Strong"; 
    }
    return answer; 
}
int main() {
    std::string password; 
    std::cout << "Enter a password to test: " << std::endl; 
    std::cin >> password; 
    int score = strengthScore(password);
    std::string rating = ratingFor(score);
    std::cout << "Score: " << score << "/4" << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}