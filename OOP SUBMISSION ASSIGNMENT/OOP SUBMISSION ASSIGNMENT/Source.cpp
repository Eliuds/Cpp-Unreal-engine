#include <iostream>
#include <string>
using namespace std;

class dog {
public:
	string breed;
	string color;
	string height;
	string weight;
	string behavior = "Dogs shake, sit and lay down.";

};

int main()
{
	dog dog1;

	dog1.breed = "Hound";
	dog1.color = "Brown";
	dog1.height = "2 feet";
	dog1.weight = "60 ibs";
	dog1.behavior = "The hounds shake, sit and lay down";


	cout << dog1.breed << "\n";
	cout << dog1.color << "\n";
	cout << dog1.height << "\n";
	cout << dog1.weight << "\n";
	cout << dog1.behavior;
}