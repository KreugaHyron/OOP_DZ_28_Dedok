#include <iostream>
#include <map>
#include <string>
using namespace std;
class Student {
public:
    string name;
    float averageGrade;
    Student(string name_val, float avgGrade_val) : name(name_val), averageGrade(avgGrade_val) {}
    bool operator<(const Student& other) const {
         return name < other.name;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    map<Student, float> studentGrades;
    studentGrades.insert({ Student("Alice", 4.5), 4.5 });
    studentGrades.insert({ Student("Bob", 3.8), 3.8 });
    studentGrades.insert({ Student("Charlie", 4.2), 4.2 });
    studentGrades.insert({ Student("David", 3.9), 3.9 });
    studentGrades.insert({ Student("Eve", 4.1), 4.1 });
    string searchName = "Alice";
    for (auto& pair : studentGrades) {
        if (pair.first.name == searchName) {
            cout << "Студент " << searchName << " имеет средний балл: " << pair.second << endl;
            break;
        }
    }
   return 0;
}