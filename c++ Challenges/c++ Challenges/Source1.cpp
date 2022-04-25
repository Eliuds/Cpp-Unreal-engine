#include <iostream>
#include <string>// includes the string library. To use strings, you must include an additional header file in the source code, the <string> library:
using namespace std;

//int main() {
	//cout << "Hello World! \n";// \n is used to insert a new line.
	//cout << "Learning cout";// cout together with the << operator is used to output values/prints texts.
	//return 0;

	//int x = 55;//Gives the whole value 55 to practiceNumber. Int Stores whole numbers, without decimals
	//cout << x;// Outputing practiceNumber
	//char myInitial = 'E';//char stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
	//cout << myInitial;
	//double deci = 1.11;// double stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
	//cout << deci;
	//string sentence = " This is my sentence. ";// string stores text, such as "Hello World". String values are surrounded by double quotes
	//cout << sentence;
	//bool yes = false;// bool stores values with two states: true or false
	//int y = 5;
	//cout << y + x;
	//const int maxHP = 100;// const makes things unchangable
	//cout << maxHP;
	//int z;
	//cout << " Pick a number : ";
	//cin >> z;// gets user input
	//cout << " Your number is : " << z;//Displays the input number
	//float firstFloat = 2.4356;//The precision of float is only six or seven decimal digits while double is about 15
	//cout << firstFloat;
	//string greeting = " Howdy";
	//string name = " Jay";
	//string fullGreeting = greeting + name;// The + operator can be used between strings to add them together to make a new string. This is called concatenation:
	//cout << fullGreeting;
	//cout << " The length of the txt string + spaces is : " << fullGreeting.length();//To get the length of a string, use the length() function.
	//cout << fullGreeting[3];//You can access the characters in a string by referring to its index number inside square brackets [].
	//fullGreeting[7] = 'K';//To change the value of a specific character in a string, refer to the index number, and use single quotes:
	//cout << fullGreeting;

	/* MATH OPERATORS CHALLENGES*/
	//int y = 5;
	//int x = 2;
	//int add = x + y;
	//cout << add;
	//int subtract = y - x;
	//cout << subtract;
	//int multiply = y * x;
	//cout << multiply
	//int divide = 6/2;
	//cout << divide;
	//int increment = ++x;
	//cout << increment;	
	//cout << (y > x);// 1 == true
	//cout << (y == y);
	//cout << (y != x);
	//cout << (x <= y);
	//x += 5;// += adds to the value so im adding 5 to 2
	//cout << x;
	//x &= 1;//i font understand this one
	//cout << x;
	/*x <<= 3;// i dont understand this one either
	cout << x;*/
	//im commenthis this to practice my comments
	//heres another line for it
	//string fullName;
	//cout << "What is your full name?: ";//asking for user input 
	//getline(cin, fullName);//getline is used for more then one word 
	//cout << "Your name is: " << fullName;
	//cout << max(5, 5);// maximum value x and y can be
	//cout << sqrt(9);//finds the square root of the number
	//cout << round(2.6);//rounds a number
	//cout << pow(2, 5);//Returns the value of x to the power of y
	/*if (x > y)
	{
		cout << "X is greater then Y";
	}
	else if (x < y)
	{
		cout << "Y is greater then X";
	}
	else
	{
		cout << "X is equal to  Y";
	}*/
	//int day = 7;
	//switch (day) {// switch statment would be used if there are many possibilities
	//case 1:
	//	cout << "Sunday";
	//	break;
	//case 2:
	//	cout << "Monday";
	//	break;
	//case 3:
	//	cout << "Tuesday";
	//	break;
	//case 4:
	//	cout << "Wednsday";
	//	break;
	//case 5:
	//	cout << "Thursday";
	//	break;
	//case 6:
	//	cout << "Friday";
	//	break;
	//case 7:
	//	cout << "Saturday";
	//	break;

	//}
	/*string expresion = (x < y) ? "X is less than Y" : "X is greater then Y";// shortens an if else statement to one line
	cout << expresion;
	*/
	/*while (x < y) //The while loop loops through a block of code as long as a specified condition is true
	{
		cout << x << "\n";
		x++;
	}*/
//	do//This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
//	{
//		cout << x << "\n";
//		x++;
//
//	}
	//while (x < y);
	//for (int p = 0; p < 10; p++)//When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop
	//{
	//	if (p == 8)// this will break it before 8 instead of 10
	//	{
	//		break;
	// }
	//	cout << p << "\n";
	//}
	/*int arrays[5] = { 10, 20, 30, 40, 50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arrays[i] << "\n";
	}*/
	//string stuff = "stuff";
	//string* ptr = &stuff;//A pointer however, is a variable that stores the memory address as its value
	//string &others = stuff;
	//cout << &stuff << "\n";
	//cout << *ptr << "\n";//you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
	//cout << others << "\n";


	
//}

//void randomfunction()
//{
//	cout << "This is a random function";
//}
//void main()
//{
//	randomfunction();
//	
//
//}

//int myFunction(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	cout << myFunction(5, 3);
//	return 0;
//}

//class classOne
//{
//public: // Access specifier
	//void myMethod();
	//classOne() {
		//string greeting =  "Hello World!";
		//};
	
	//int stuff;// Attribute (int variable)
//	string stuffWords;// Attribute (string variable)
//};

//void classOne::myMethod()// a method outside of a class
//{
//	cout << "Hello world!";
//}

//class classTwo : public classOne{// ingeriting fromm class one
	//public:
	//string stuff = "Class two";
//};

//class classThree : public classTwo, public classOne{// inhereting multuple classes

//;

// int main() {
// 	classOne myObj;
// 	//myObj.myMethod();
// 	return 0;	
// }

// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
  }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};