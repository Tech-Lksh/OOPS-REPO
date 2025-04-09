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

class Goat : public Dog {
    public:

    void maah() {
        cout << "Goat is maahing..." << endl;
    }
};

class Tiger : public Animal {
    public:

    void meow() {
        cout << "Cat is meowling..." << endl;
    }
};

class Cat : public Tiger {
    public:

    void meow() {
        cout << "Cat is meowling..." << endl;
    }
};


class Cheata : public Tiger {
    public:

    void Haaw() {
        cout << "Cheata is haawling..." << endl;
    }
};



int main() {
    Cheata c;
    c.eat();
    cout << endl;
    c.Haaw();
    cout << endl;
    c.meow();
    cout << endl;
    c.run();
    cout << endl;
    c.sleep();
    cout << endl;



}