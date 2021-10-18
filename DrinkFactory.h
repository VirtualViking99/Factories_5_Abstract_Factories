//10b. this the conrete implementation of the Abstract 
// Factory, a facilitator for using all of the different factories 
// and exposing them to whoever is interested in making a drink
#pragma once
#include<iostream>
#include <map>
#include<memory>
#include<string>
#include<cmath>

#include"HotDrink.h"
#include"HotDrinkFactory.h"

using namespace std;

//11. create a class called Drink Factory

class DrinkFactory
{
	//this class willhelp us construct different
	//drinks on the basis of their names.

	//11a. make a map from the names of the drinks to the names of the 
	// factories which are capable of making those drinks
	//
	map<string, unique_ptr<HotDrinkFactory>> hot_factories;

public:

	//11b. create constructor
	DrinkFactory()
	{
		// here you can add all the factories into the map,but without reflection you have to do it by ha
		// you have to do it by hand
		// 

		hot_factories["coffee"] = make_unique<CoffeeFactory>();
		hot_factories["tea"] = make_unique<TeaFactory>();


		//11. NOW when someone wants a drink, we can provide an interface for that
		// as well.
		
	}
	unique_ptr<HotDrink> make_drink(const string& name)
	{
		//make a lookup into the map and actually MAKE the drink
		auto drink = hot_factories[name]->Make();
		drink->Prepare(200);
		return drink;
	}

};
 