#include <iostream> 
#include <vector> 
#include <string>
#include <algorithm>
int main() {
    std::vector <int> samples; 
    int numofsamples; 
    std::cin >> numofsamples; 
    for (int i = 0; i < numofsamples; i++) {
        int value; 
        std::cin >> value;
        samples.push_back(value);
    }
    for (int i = samples.size() - 1; i >=0; i--) {
        std::cout << samples[i]; 
        if (i !=0) {
            std::cout <<  " ";
        }
    }
    std::cout << std::endl;
    std::vector <int> ids = {101, 205, 150, 330, 412};
    for (auto it = ids.begin(); it != ids.end(); ++it) {
        auto pos1 = std::find(ids.begin(), ids.end(), 150);
        auto pos2 = std::find(ids.begin(), ids.end(), 999);
        if (pos1 == ids.end()) {
            std::cout << "150 not found" << std::endl; 
        } 
        else {
            std::cout << "150 found" << std::endl; 
        }
        if (pos2 == ids.end()) {
            std::cout << "999 not found" << std::endl; 
        } 
        else {
            std::cout << "999 found" << std::endl; 
        }
    }

}