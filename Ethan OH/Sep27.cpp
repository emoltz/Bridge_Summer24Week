#include <iostream>
#include <vector>

using namespace std;

class Pet;

class Dog;

class Cat;

class Bird;
//Dogs, cats, birds

class Pet {
private:
    double _weight;
    double _height;
    string _name;
    string _color;
    string _personality;
    int _age;

public:
    Pet() : _weight{0}, _height{0}, _name{"Default"}, _color{""}, _age{0} {};

    Pet(int age, double weight, string name) : _age{age}, _weight{weight}, _name{name} {};

    void setAge(int s) {
        _age = s;
    }

    int getAge() {
        return _age;
    }

    void setName(string s) {
        _name = s;
    }

    string getName();

    //OVERLOADS
    Pet operator+(const Pet &p) {
        Pet fusedPet;
        fusedPet._age = _age + p._age;
        fusedPet._name = _name + " | " + p._name;
        return fusedPet;
    }

    friend ostream &operator<<(ostream &os, const Pet &pet) {
        os << pet._name << " is " << pet._age << " years old.";
        return os;
    }
};

class Dog : public Pet {
private:
    int barkVolume;
    string favPeanutButter;
    int humanAge;
    int *arr;
public:
    //CONSTRUCTORS
    Dog(int dogsAge) {
        setAge(dogsAge);
        humanAge = dogsAge * 7;
        barkVolume = 0;
        favPeanutButter = "";
    }

    ~Dog() {
        //set everything you want to happen after the instance is gone
        delete arr;
    }

    //GETTERS AND SETTERS
    int getHumanAge() {
        return humanAge;
    }

    void setBarkVolume(int s) {
        barkVolume = s;
    }

    //FUNCTIONS
    int calculateHumanAge(int dogAge) {
        humanAge = dogAge * 7;
    }

    void speak() {
        cout << "Woof!";
    }

};

class Cat : public Pet {
private:
    int numberOfLives;
    bool meows;
    bool outdoor;
    int whiskerLength;
public:
    void speak() {
        cout << "Meow!";
    }


};

class Bird : public Pet {
private:
    int wingSpan;
    bool hasFeathers;

public:

    void speak() {
        cout << "Tweet!";
    }
};

int main() {
    Pet one;
    one.setAge(5);
    one.setName("Crunchy");

    cout << one;

    return 0;
}

string Pet::getName() {
    return _name;
}