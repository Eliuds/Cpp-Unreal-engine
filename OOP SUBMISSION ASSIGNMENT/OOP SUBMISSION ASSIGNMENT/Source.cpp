#include <iostream>
#include <string>
using namespace std;

//class dog {// assignment 1
//public:
//	string breed;
//	string color;
//	string height;
//	string weight;
//	string behavior = "Dogs shake, sit and lay down.";
//
//};
//
//int main()
//{
//	dog dog1;
//
//	dog1.breed = "Hound";
//	dog1.color = "Brown";
//	dog1.height = "2 feet";
//	dog1.weight = "60 ibs";
//	dog1.behavior = "The hounds shake, sit and lay down";
//
//
//	cout << dog1.breed << "\n";
//	cout << dog1.color << "\n";
//	cout << dog1.height << "\n";
//	cout << dog1.weight << "\n";
//	cout << dog1.behavior;
//}






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

int main() {
	shape2 triangle;
	triangle.base;
	triangle.color;
	triangle.getArea;
	triangle.height;

}
class shape3 : public shape
{
public:
	string radius;
};

int main() {
	shape3 circle;
	circle.color;
	circle.getArea;
	circle.radius;

}




