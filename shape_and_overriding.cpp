#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
class   Shape{

    string shapetype;

    public:

    Shape(string shapetype){

        this -> shapetype = shapetype;

    }

    void printMyType(){

        cout<< shapetype <<endl;

    }

};

class Square: public Shape{

    int length;

    public :

    Square(int length) : Shape("square"){

        this -> length = length;

    }

    int calculateArea(){

        printMyType();

        return length*length;

    }

};

 

class Rectangle : public Shape{

    int length , breadth;

    public:

    Rectangle(int length , int breadth): Shape("rectangle"){

        this ->length = length;

        this ->breadth = breadth;

    }

    int calculateArea(){

        printMyType();

        return length*breadth;

    }

};
int main() {

    //Write your code here
    Square obj1(5);

    cout<<obj1.calculateArea()<<endl;

    Rectangle obj2(5,4);

    cout<< obj2.calculateArea()<<endl;

 
    return 0;
}
