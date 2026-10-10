#include <iostream> 
#include <string> 
struct Student {
    std::string name; 
    int scores[5];

};
double average( const Student& student_scores) {
    double sum = 0; 
    for (int i=0; i < 5; i++) {
        sum+= student_scores.scores[i];
    }
    double average5 = sum / 5;
    return average5; 
};
char letter_grade(double avg) {
    char grade;
    if (avg >= 90) {
        grade = 'A';
    }
    else if (avg >= 80) {
        grade = 'B';
    }
    else if (avg >= 70) {
        grade = 'C';
    }
    else if (avg >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    return grade; 
};
void curve(Student& student_scores, int points) {
    for (int i=0; i < 5; i++) {
        student_scores.scores[i] = student_scores.scores[i]+points;
        if (student_scores.scores[i] > 100) {
            student_scores.scores[i] = 100; 
        }
    }
    return; 
}
void print_report(const Student& student_scores) {
    double avg = average(student_scores);
    char lettergrade = letter_grade(avg);
    std::cout << student_scores.name << " " << avg << " " << lettergrade << std::endl;
}
int main() {
    Student s1 = {"Hasini", {95, 90, 92, 88, 88}};
    Student s2 = {"Billy", {99, 90, 78, 98, 65}};
    Student s3 = {"Kate", {79, 85, 74, 95, 70}};
    print_report(s1);
    print_report(s2);
    print_report(s3);
    curve(s1, 5);
    print_report(s1);
    print_report(s2);
    print_report(s3);
    
}