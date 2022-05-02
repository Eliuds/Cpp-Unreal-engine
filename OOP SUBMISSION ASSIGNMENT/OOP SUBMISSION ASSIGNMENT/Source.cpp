#include <iostream>
#include <string>
using namespace std;

class shape {

public:
	
	float getarea();
	string color;

private:
	float area, perimeter;

};



float shape::getarea() {
	return area;
}

class shape1 : public shape {
public:
	
	string height;
	string width;

};

int main() {
	shape1 rectangle;
	rectangle.color;
	float getarea();
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
	float getarea();
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
	float getarea();
	circle.radius;
	return 0;

}




