#include <iostream>
#include <string>
#include <array>
#include <vector>
int main(){
    int n; 
    std::cin >> n;
    std::vector<int> integers(n);
    for (int i=0; i < n; i++) {
        std::cin >> integers[i];

    }
}