//the floor is found by halving the range of possible floors 
// tracks the number of < answers and > answers 
//command line -> one number that is >=1 
//floors are numberd from 0 to top
//range includes both ends - top + 1 
#include <iostream> 
#include <string>
void guess(int low, int high, int maximumtries, int tries_used, int down, int up) {
    if (low > high || tries_used > maximumtries) {
        std::cout << "That floor is not in this building!" << std::endl; 
        return; 
    }
    std::string response; 
    if (!(std::cin >> response)) {
        return; 
    }
    int middle = (low+high) / 2; 

    if (response == "=") {
        std::cout << "Reached floor " << middle << " after going down " << down << " times and up " << ups << " times!" << std::endl; 
        return; 
    }
    else if (response == "<") {
        down++; 
        guess(low, middle -1, maximumtries, tries_used++); 
    }
    else if (response == ">") {
        up++; 
        guess(middle + 1, high, maximumtries, tries_used++); 
    }
    else {
        std::cout << "Please enter <, >, or =" << std::endl; 
        guess(low, high, maximumtries, tries_used);
    }

}
int main(int argc, char*argv[]) {
    if (argc !=2 || std::stoi(argv[1]) < 1) {
        std::cout << "Usage: ./guess_floor.exe <top>" << std::endl; 
        return 1; 
    }
    else {
        int top = std::stoi(argv[1]); 
        int range = top + 1; 
        int maximum = 0; 
        while (range > 1) {
            maximum++; 
            range = range / 2; 
        }
        maximum +=1; 
        int triesused = 0; 
        int downs = 0; 
        int ups = 0; 
        guess(0, top, maximum, triesused, downs, ups ); 
        return 0; 
    }
}