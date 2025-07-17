#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0; 
};
class Dog : public Animal {
    public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};
class Cat : public Animal {
    public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};
class Cow : public Animal {
    public:
    void makeSound() override {
        cout << "Moo!" << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;
    Cow cow;
    Animal* animals[] = { &dog, &cat, &cow };
    for (Animal* animal : animals) {
        animal->makeSound();
    }
    return 0;
}