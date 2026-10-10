#include <iostream>
#include <string>
int double_it(int n) {
    return n * 2;
}
int square(int n) {
    return n * n; 
}
void apply_to_all(int arr[], int size, int (*op)(int)) {
    for (int i=0; i < size; i++) {
        arr[i] = op(arr[i]);
    }
}
void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int nums[] = {1, 2, 3, 4};

    apply_to_all(nums, 4, double_it);
    printarray(nums, 4);
    apply_to_all(nums, 4, square);
    printarray(nums, 4);
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << "" << std::endl;
    }
    std::vector <int> newnumbers = {2, 4, 6, 8, 10};
    for (auto it = newnumbers.begin(); it !=newnumbers.end(); ++it) {
        std::cout << *it * 2 << std::endl;
    }
    std::vector <int> elements = {12, 7, 25, 9, 18};
    bool found = false; 
    for (auto it = elements.begin(); it != elements.end(); ++it) {
        if (*it == 25) {
            std::cout << "Found: 25" << std::endl;
            found = true; 
            break;
        }
    }
    if (found == false) {
        std::cout << "Number not found" << std::endl;
    }
    std::vector<int> listofnumbers = {3, 8, 12, 5, 7, 10, 14};
    int count = 0; 
    for (auto it = listofnumbers.begin(); it != listofnumbers.end(); ++it) {
        if (*it % 2 == 0) {
            count++;
        }
    }
    std::cout << "Number of even elements: " << count << std::endl;
    return 0;
}