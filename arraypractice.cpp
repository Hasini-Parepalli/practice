#include <iostream>
#include <string> 
#include <array> 
#include <vector>
int main() {
    //temperatures
    std::array <int, 4> temps = {72, 68, 75, 80};
    std::cout << temps[3] << std::endl;
    std::cout << temps.size() << std::endl;
    //class averages 
    std::array <double, 5> values = {88.5, 92.0, 79.5, 85.0, 90.5};
    double sum = 0;
    for (auto num: values) {
        sum += num;
    }
    std::cout << "Sum: " << sum << std::endl;
    double average = sum / values.size();
    std::cout << "Average: " << average << std::endl;
    //playlist 
    std::vector <std::string> playlist; 
    playlist.push_back("Wannabe");
    playlist.push_back("Say You'll Be There");
    playlist.push_back("Stop");
    std::cout << "Songs: " << playlist.size() << std::endl;
    std::cout << "First: " << playlist.front() << std::endl;
    std::cout << "Last: " << playlist.back() << std::endl;
    //insert and erase
    std::vector <int> numbers = {10,20,30,40,50};
    numbers.insert(numbers.begin()+2, 25);
    numbers.erase(numbers.begin());
    for (auto num : numbers) {
        std::cout << num << std::endl;
    }
    //bands
    std::vector <std::string> bands = {"Spice Girls", "Blackstreet", "Oasis"};
    for (auto it = bands.begin(); it!= bands.end(); ++it) {
        std::cout << *it << std::endl;
    }

}