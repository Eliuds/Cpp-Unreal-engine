#include <iostream>
#include <string>
using namespace std;

class dog {
public:
	string breed;
	string color;
	string height;
	string weight;
	string shake;
	string sit;
	string layDown;
	
};

int main()
{
	dog dog1;

	dog1.breed = "Hound";
	dog1.color = "Brown";
	dog1.height = "2 feet";
	dog1.weight = "60 ibs";
	dog1.shake = "Shake";
	dog1.sit = "sit";
	dog1.layDown = "Lay Down";
	
	
	cout << dog1.breed << "\n";
	cout << dog1.color << "\n";
	cout << dog1.height << "\n";
	cout << dog1.weight << "\n";
	cout << dog1.sit;
}