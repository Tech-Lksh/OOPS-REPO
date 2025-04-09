#include<iostream>
using namespace std;

class A {
    private:
    int x;

    public:
    A(int value) : x(value) {};
    
    // Friend class
    friend class B;
    // Friend Function
    friend void print(const A &);
};


// Friend class
class B {
    public:
    void print(const A&a) {
        cout << a.x << endl;
    }
};

// Friend Function
void print(const A &a) {
    cout << a.x << endl;
}


int main() {
    A a(5);
    B b;
    b.print(a);
    print(a);

    return 0;
}