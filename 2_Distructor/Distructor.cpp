#include<iostream>
using namespace std;

class Student {
    public:
    
    // Create Student class properties
    int id;
    int age;
    int nos;
    string clsName;

    // Create Constructure
    Student(int id, int age, int nos, string clsName) {
        this->id = id;
        this->age = age;
        this->nos = nos;
        this->clsName = clsName;
    }

    void study() {
        cout << "Student is studing..." << endl;
    }

    // Distructor Called
    ~Student() {
        cout << "Hi, I delete everryone..." << endl;
    }
};


int main() {
    // Create a object
    Student s1(1001, 21, 5, "Engineering");
    cout << "id is :- " << s1.id << endl;
    cout << "age is :- " << s1.age << endl;
    cout << "nos is :- " << s1.nos << endl;
    cout << "clsName is :- " << s1.clsName << endl;
    
    s1.study();
}