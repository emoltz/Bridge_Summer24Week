#include <iostream>
#include <vector>

using namespace std;

/*
 ** Grading Criteria:
 *
 * Does not have duplicate check numbers
 * Interface should be clear and usable
 * Output should be calculated correctly
 * Most of the code is written in functions and classes
 * Does not have an infinite loop
 * Arrays and/or vectors don't go out of bounds
 * Check class is well constructed
 * Overloaded at least one operator correctly in the Check class
 * Obvious stuff like: it compiles, it doesn't have anything illegal in it (like weird libraries) and isn't copied from the internet
 * No memory leaks! Be sure to delete stuff as needed
 * If a copy constructor was used, then it was done appropriately.
 *
 */

class Thing1;

class Thing2;

class Thing1 {
public:
    int id;

    Thing1() {
        id = 0;
    }

    Thing1(Thing1 &t) {
        this->id = t.id;
    }

    ~Thing1() {
        //stuff to delete when the object falls out of scope
    }

    Thing1 &operator=(const Thing1 &t) {

    }

};

class Thing2 {
public:
    int id;

    Thing2() {
        id = 0;
    }

    Thing2(Thing2 &t) {
        this->id = t.id;
    }

    ~Thing2() {
        //delete
        delete this;
    }

    Thing2 &operator=(const Thing2 &t) {

    }

};


class Shape;

class Triangle;

class Rectangle;

class Shape {
private:
    int _width, _height;
    double _area;
public:
    Shape() {
        _width = 0;
        _height = 0;
        _area = 0;
    }

    Shape(int newWidth, int newHeight) : _width(newWidth), _height(newHeight) {}

    virtual int area(int w, int h) = 0;

    virtual int area() = 0;

    //GETTERS AND SETTERS

    double getArea() const{
        return _area;
    }

    void setArea(int a){
        _area = a;
    }

    int getWidth() const{
        return _width;
    }

    void setWidth(int w) {
        _width = w;
    }

    int getHeight() const{
        return _height;
    }

    void setHeight(int h) {
        _height = h;
    }
};

class Triangle : public Shape {
private:
    string _triangleType;
public:
    Triangle() = default;

    Triangle(int newWidth, int newHeight) {
        this->setWidth(newWidth); //"this" doesn't NEED to be there
        this->setHeight(newHeight);
    }

    int area(int w, int h) override { //can user virtual or override
        this->setWidth(w);
        this->setHeight(h);
        this->setArea((w * h) / 2);
    }

    int area() {
        this->setArea(this->getWidth() * this->getHeight() / 2);
        return this->getArea();
    }

    bool operator < (Triangle &t1){ //using const here will only allow you to use const functions!
        if (this->area() < t1.area()){
            return true;
        }
        else{
            return false;
        }
    }

    Triangle operator + (Triangle &t1){
        Triangle temp;
        //add the area together
        temp.setArea(this->area() + t1.area());
        return temp;
    }

    bool operator == (const Triangle &t1){
        if (this->getHeight() == t1.getHeight() && this->getWidth() == t1.getWidth()){
            return true;
        }
        else{
            return false;
        }
    }

    friend ostream& operator << (ostream& myOstreamObject, const Triangle &t1){
        if(t1.getWidth() == 0 || t1.getHeight() == 0 || t1.getArea() == 0){
            myOstreamObject << "Please make a proper instance of this class!" << endl;
        }
        else{
            myOstreamObject << "Height: " << t1.getHeight() << endl << "Width: " << t1.getWidth() << endl << "Area: " << t1.getArea();
        }
        return myOstreamObject;
    }

};




class Rectangle : public Shape {
private:
    string _name;
    string _typeOfRectangle;
public:
    Rectangle() = default;

    Rectangle(int newWidth, int newHeight) {
        this->setHeight(newHeight);
        this->setWidth(newWidth);
    }

    int area(int w, int h) override {
        this->setWidth(w);
        this->setHeight(h);

        return w * h;
    }

    int area() override {
        return (this->getWidth() * this->getHeight());
    }
};

int main() {

    Triangle t(5, 10);
    Triangle s(100, 100);
    s.area();

    cout << s;



    return 0;
}