#include <array> 
#include <iostream>
#include <string>
#include <vector> 
int main() {
    //array 
    std::array<int, 4> fixed = {10,20,30,40};
    std::cout << "Array size: " << fixed.size() << std::endl;
    std::cout << "Element 2: " << fixed.at(2) << std::endl;
    //vector
    std::vector <std::string> lista;
    lista.push_back("Wannabe");
    lista.push_back("A Little Respect");
    std::cout << "Playlist: " << std::endl;
    for (const auto& song: lista) {
        std::cout << " " << song << std::endl;
    }
    //modify elements 
    std::vector <int> nums = {1,2,3,4,5};
    for (auto &n: nums) {
        n *=2; 
    }
    std::cout << "Doubled: " << std::endl; 
    for (const auto &n: nums) {
        std::cout << n << std::endl; 
    }
    std::cout << std::endl;
    //size v capacity
    std::vector<int> v;
    for (int i = 0; i < 8; i++) {
        v.push_back(i);
        std::cout << "size=" << v.size()
                  << " cap=" << v.capacity() << "\n";
    }

}