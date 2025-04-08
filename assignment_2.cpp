#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float CGPA;
    vector<string> courses;

public:
    Student() : name(""), rollNumber(0), CGPA(0.0) {}

    Student(string n, int roll, float c) {
        name = n;
        rollNumber = roll;
        setCGPA(c);
    }

    Student(const Student& other) {
        name = other.name;
        rollNumber = other.rollNumber;
        CGPA = other.CGPA;
        courses = other.courses;
    }

    ~Student() {
        cout << "Destructor called for Student: " << name << endl;
    }

    void addCourse(const string& course) {
        if (find(courses.begin(), courses.end(), course) != courses.end()) {
            cout << "Course already enrolled.\n";
            return;
        }
        courses.push_back(course);
        cout << "Course added successfully.\n";
    }

    void setCGPA(float newCGPA) {
        if (newCGPA < 0.0 || newCGPA > 4.0) {
            cout << "Invalid CGPA. Please enter a value between 0.0 and 4.0.\n";
            return;
        }
        CGPA = newCGPA;
    }

    void displayInfo() const {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber
             << "\nCGPA: " << CGPA << "\nCourses: ";
        for (const string& course : courses) {
            cout << course << " ";
        }
        cout << endl;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    string getName() const {
        return name;
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    void addStudent(const Student& s) {
        for (const auto& student : students) {
            if (student.getRollNumber() == s.getRollNumber()) {
                cout << "Student with this roll number already exists.\n";
                return;
            }
        }
        students.push_back(s);
        cout << "Student added successfully.\n";
    }

    Student* searchStudent(int roll) {
        for (auto& student : students) {
            if (student.getRollNumber() == roll) {
                return &student;
            }
        }
        cout << "Student not found.\n";
        return nullptr;
    }

    void displayAllStudents() const {
        if (students.empty()) {
            cout << "No student records to display.\n";
            return;
        }
        for (const auto& student : students) {
            student.displayInfo();
            cout << "----------------------\n";
        }
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add New Student\n";
        cout << "2. Add Course to Student\n";
        cout << "3. Update Student CGPA\n";
        cout << "4. Search Student\n";
        cout << "5. Display All Students\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
        case 1: {
            string name;
            int roll;
            float cgpa;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter CGPA: ";
            cin >> cgpa;

            Student s(name, roll, cgpa);
            sms.addStudent(s);
            break;
        }
        case 2: {
            int roll;
            string course;
            cout << "Enter roll number: ";
            cin >> roll;
            Student* s = sms.searchStudent(roll);
            if (s) {
                cout << "Enter course name to add: ";
                cin.ignore();
                getline(cin, course);
                s->addCourse(course);
            }
            break;
        }
        case 3: {
            int roll;
            float newCGPA;
            cout << "Enter roll number: ";
            cin >> roll;
            Student* s = sms.searchStudent(roll);
            if (s) {
                cout << "Enter new CGPA: ";
                cin >> newCGPA;
                s->setCGPA(newCGPA);
            }
            break;
        }
        case 4: {
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;
            Student* s = sms.searchStudent(roll);
            if (s) {
                s->displayInfo();
            }
            break;
        }
        case 5: {
            sms.displayAllStudents();
            break;
        }
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    cout << "Exiting program...\n";
    return 0;
}
