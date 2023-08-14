
#include "GpaCalc.h"

void GpaCalc::getGPA() {
    int classes = 0;
    int creds = 0;
    int gradePoint = 0;
    double totalCreds = 0.0;
    double gpa = 0.0;
    char letterGrade;

    std::cout << "How many classes are you taking?" << std::endl;
    std::cin >> classes;

    for(int i = 1; i <= classes; i++) {
        std::cout << "What is your letter grade in class " << i << "? " << std::endl;
        std::cin >> letterGrade;

        std::cout << "How many credits is class " << i << " worth? " << std::endl;
        std::cin >> creds;

        totalCreds += creds;
        gradePoint += toGV(toupper(letterGrade)) * creds;
    }

    gpa = gradePoint / totalCreds;

    std::cout << "Your GPA this semester is:  " << std::fixed << std::setprecision(2) << gpa << std::endl;
}

int GpaCalc::toGV(char grade) {
    std::unordered_map<char, int> gradeValue { 
    {'A', 4}, {'B', 3}, {'C', 2}, {'D', 1}, {'F', 0} };

    return gradeValue[grade];
}