#include <iostream>
#include <string>
using namespace std;

class shape {
public:
	string color;
	string getArea;
};

class shape1 : public shape {
public:
	
	string height;
	string width;

};

int main() {
	shape1 rectangle;
	rectangle.color;
	rectangle.getArea;
	rectangle.height;
	rectangle.width;
}

class shape2 : public shape {
public:
	string base;
	string height;
};

int maintwo() {
	shape2 triangle;
	triangle.base;
	triangle.color;
	triangle.getArea;
	triangle.height;
	return 0;

}
class shape3 : public shape
{
public:
	string radius;
};

int mainthree() {
	shape3 circle;
	circle.color;
	circle.getArea;
	circle.radius;
	return 0;

}




