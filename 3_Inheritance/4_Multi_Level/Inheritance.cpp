#include<iostream>
using namespace std;

class Animal {
    public:

    int leg;
    int eye;
    int ear;
    int brain; 

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
    
    Dog(int leg, int eye, int ear, int brain) {
        this->leg = leg;
        this->eye = eye;
        this->ear = ear;
        this->brain = brain;
    }

    void growl() {
        cout << "Dog is growling..." << endl;
    }
};

class Cat : public Animal {
    public:
    
    Cat(int leg, int eye, int ear, int brain) {
        this->leg = leg;
        this->eye = eye;
        this->ear = ear;
        this->brain = brain;
    }

    void meow() {
        cout << "Cat is meowling..." << endl;
    }
};



int main() {
    Dog d(2, 2, 2, 1);
    cout << "leg is :- " << d.leg << endl;
    cout << "eye is :- " << d.eye << endl;
    cout << "ear is :- " << d.ear << endl;
    cout << "brain is :- " << d.brain << endl;

    Cat c(2, 2, 2, 1);
    c.eat();
    c.run();
    c.sleep();

}