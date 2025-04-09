#include<iostream>
using namespace std;

class Animal {
    public:
    virtual void sound() {
        cout << "Animal is sounding..." << endl;
    }
};

class Dog : public Animal {
    public:
    void  sound() override {
        cout << "Dog is barganing..." << endl;
    }
};

class Cat : public Animal {
    public:
    void  sound() override {
        cout << "Cat is meaowing..." << endl;
    }
};

class Parrot : public Animal {
    public:
    void  sound() override {
        cout << "Parrot is mitthu mitthu..." << endl;
    }
};

void sound(Animal *animal) {
    animal->sound(); // is polymorphic
    // Animal->sound is behaving as per required abject allocated at runtime
}


int main() {
    Animal *animal = new Dog();
    sound(animal);
    cout << endl;

    animal = new Cat();
    sound(animal);
    cout << endl;
    
    animal = new Parrot();
    sound(animal);
    return 0;
}   