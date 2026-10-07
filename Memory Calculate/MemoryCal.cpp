#include <iostream>
#include <vector>
using namespace std;

// Class Template
template <class T>
class Student {
private:
    T id;
    string name;

public:

    // Constructor
    Student(T i, string n) {
        id = i;
        name = n;
    }

    // Get ID
    T getId() {
        return id;
    }

    // Display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {

    // Create vector of Student objects
    vector<Student<int>> students;

    // 1. Add Students using push_back()
    students.push_back(Student<int>(101, "Amit"));
    students.push_back(Student<int>(102, "Rahul"));
    students.push_back(Student<int>(103, "Priya"));
    students.push_back(Student<int>(104, "Neha"));

    // 2. Display All Students
    cout << "----- All Students -----" << endl;

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    // 3. Search Student by ID
    int searchId = 102;
    bool found = false;

    cout << "\n----- Search Student -----" << endl;

    for (int i = 0; i < students.size(); i++) {

        if (students[i].getId() == searchId) {
            students[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found!" << endl;
    }

    // 4. Remove Student by ID
    int removeId = 103;

    cout << "\n----- Remove Student -----" << endl;

    for (int i = 0; i < students.size(); i++) {

        if (students[i].getId() == removeId) {

            students.erase(students.begin() + i);

            cout << "Student with ID "
                 << removeId
                 << " removed successfully." << endl;

            found = true;
            break;
        }
    }

    // Display students after removal
    cout << "\n----- Students After Removal -----" << endl;

    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    return 0;
}
