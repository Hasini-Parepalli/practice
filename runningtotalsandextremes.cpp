#include <iostream> 
#include <string> 
#include <vector>
int main() {
    int n; 
    std::cin >> n; 
    std::vector <int> nvector; 
    for (int i=0; i < n; i++) {
        int value; 
        std::cin >> value; 
        nvector.push_back(value);
    }
    int lowest = nvector[0]; 
    int highest = nvector[0];
    int sum = 0; 
    int average; 
    for (int i=0; i < nvector.size(); i++) {
        std::cout << nvector[i]; 
        if (i != nvector.size() - 1) {
            std::cout << " ";
        }
        if (nvector[i] < lowest) {
            lowest = nvector[i]; 
        }
        if (nvector[i] > highest) {
            highest = nvector[i];
        }
        sum += nvector[i];
    }
    average = sum / n; 
    int count = 0;
    for (int i=0; i < nvector.size(); i++) {
        if (nvector[i] > average) {
            count++;
        }
    }
    std::cout << lowest << " " << highest << std::endl;
    std::cout << count << std::endl;
}