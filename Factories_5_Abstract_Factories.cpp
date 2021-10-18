/*

	So far though we've looksed at variations of factory, we've only covered the regular factory

	Now we cover the ABSTRACT Factory: the idea of families of factoeies, products, coresponding factory's which
	Use inheritance to allow to polymorphically call other factories

*/

#define _USE_MATH_DEFINES


#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<fstream>
#include<tuple>
#include<sstream>
#include<memory>
#include<cmath>

using namespace std;

//8. include the factory.hpp file into your main cpp file
#include"HotDrinkFactory.h"
#include"DrinkFactory.h"


//9. define a method that makes drinks depending on the name of the drink
unique_ptr<HotDrink> make_drink(string type)
{
	//9a. Create a unique pointer to hotDrink called drink
	unique_ptr<HotDrink> drink;

	//9b. you would typically have an if statement to generate each of the drinks
	//but since we are using abstract we are going to use something different
	return drink;
}

//1. The Project is going to be a hot Drink Machine That can make tea or coffee
//1a. Start by making a header file called HotDrink.h(see file for cont.)



int main()
{
	//10. create a Drink Factory
	//10a. What is this?  well, the drink factory is going to keep track of the kind of factories we have
	
	//10b. Create a headerfile DrinkFactory (see the header file for 10c.
	
	DrinkFactory df;
	auto c = df.make_drink("coffee");


	auto t = df.make_drink("tea");
	return 0;
}
