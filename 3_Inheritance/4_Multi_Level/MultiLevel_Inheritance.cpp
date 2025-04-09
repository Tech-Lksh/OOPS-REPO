#include<iostream>
using namespace std;

class Animal {
    public:

    void eat() {
        cout << "Animal is eating..." << endl;
    }

    void run() {
        cout << "Animal is runing..." << endl;
    }

    void sleep() {
        cout << "Animal is sleeping..." << endl;
    }
};


class Dog : public Animal {
    public:

    void growl() {
        cout << "Dog is growling..." << endl;
    }
};

class Cow : public Dog {
    public:

    void yoo() {
        cout << "Cow is yooing..." << endl;
    }
};


int main() {
    Cow c;
    c.eat();
    c.growl();
    c.run();
    c.sleep();
    c.yoo();
}