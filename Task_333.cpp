#include <iostream>
#include<string>
#include <map>
#include<limits>
using namespace std;

class GradeingSystem {
private:
    map<string, float> students;

public:
    void addStudentGrade(string& name, float grade) {
        students[name] = grade;
        std::cout << "Grade added successfully!" << std::endl;
    }
    float calculateAverageGrade(){
        if (students.empty()) {
            cout << "No grades found. Add some grades first." << std::endl;
            return 0.0;
        }

        float totalGrades = 0;
        for (auto student : students) {
            totalGrades += student.second;
        }

        return totalGrades / students.size();
    }

    void displayHighestAndLowestGrades() const {
        if (students.empty()) {
            std::cout << "No grades found. Add some grades first." << std::endl;
            return;
        }

        auto it = students.begin();
        float lowestGrade = it->second;
        float highestGrade = it->second;

        string lower = it->first;
        string higher = it->first;

        for (; it != students.end(); ++it) {
            double grade = it->second;
            if (grade < lowestGrade) {
                lowestGrade = grade;
                lower = it->first;
            }
            if (grade > highestGrade) {
                highestGrade = grade;
                higher = it->first;
            }
        }


        std::cout << "Student name who get lowest number : " << lower << std::endl;
        std::cout << "Lowest grade: " << lowestGrade << std::endl;
        std::cout << "Student name who get highest number: " << higher << std::endl;
        std::cout << "Highest grade: " << highestGrade << std::endl;
    }
};

int main() {
    GradeingSystem Student;
    std::cout << "1. Add student grade" << std::endl;
        std::cout << "2. Calculate average grade" << std::endl;
        std::cout << "3. Display highest and lowest grades" << std::endl;
        std::cout << "4. Exit" << std::endl;

    while (true) {
        int choice;
        cout<<"Enter the choice : "<<endl;
        cin >> choice;

        if (choice == 1) {
            string name;
            float grade;
            // std::cout << "Enter student name: ";
            // // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // getline(cin, name);
            // std::cout << "Enter student grade: ";
            // std::cin >> grade;
            // Student.addStudentGrade(name, grade);
            // string name;
            // float grade;
            cout << "Enter student name: "<<endl;
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            getline(cin,name);
            // cin>>name;
            cout << "Enter student grade: "<<endl;
            cin>>grade;
            Student.addStudentGrade(name,grade);


        }
        else if (choice == 2) {
            double averageGrade = Student.calculateAverageGrade();
            std::cout << "Average grade: " << averageGrade << std::endl;
        }
        else if (choice == 3) {
            Student.displayHighestAndLowestGrades();
        }
        else if (choice == 4) {
            std::cout << "Exiting the program..." << std::endl;
            break;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl; // Add a blank line for better readability
    }

    return 0;
}
