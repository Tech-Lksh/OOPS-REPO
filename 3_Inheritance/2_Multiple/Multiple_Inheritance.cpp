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


class Dog {
    public:

    void growl() {
        cout << "Dog is growling..." << endl;
    }
};

class Cat : public Animal , public Dog {
    public:

    void meow() {
        cout << "Cat is meowling..." << endl;
    }
};



int main() {

    Cat c;
    c.eat();
    c.run();
    c.sleep();
    c.growl();
    c.meow();

}