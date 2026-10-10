#include <iostream>
#include <string>
#include <vector> 
#include <array> 
int main() {
    int n; 
    std::cin >> n;
    long long sum = 0;
    std::vector<int> integers(n);
    for (int i=0; i < n; i++) {
        std::cin >> integers[i];
        sum += integers[i];
    }
    double new_sum = (double)sum;
    double average = new_sum / n;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
}