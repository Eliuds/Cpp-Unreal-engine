#include <iostream>
#include <string>
using namespace std;

class dog {
public:
	string breed;
	string color;
	string height;
	string weight;
	void shake() {
		cout << "Dog shakes" << '\n';
	}
	void sit()
	{
		cout << " Dog Sits" << '\n';
	}
	void layDown()
	{
		cout << "Dog lays down" << '\n';
	}
	
};

int main()
{
	dog dog1;

	dog1.breed = "Hound";
	dog1.color = "Brown";
	dog1.height = "2 feet";
	dog1.weight = "60 ibs";
	dog1.sit();
	dog1.shake();
	dog1.layDown();

	
	
	cout << dog1.breed << "\n";
	cout << dog1.color << "\n";
	cout << dog1.height << "\n";
	cout << dog1.weight << "\n";
	//cout << dog1.sit();
	// I tried to output a function but idk how in this case, but since i dont think its requirment ima just leave it at that and learn at a future date
}