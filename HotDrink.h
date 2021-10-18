#pragma once
#include<iostream>
#include<memory>


using namespace std;

struct HotDrink
{
	//2. create virtual destructor
	virtual ~HotDrink() = default;

	//2a. create method for preparing a drink
	virtual void Prepare(int volume) = 0;


};

//3. Now we will have a family of different products, like tea or coffee
//3a. create a struct that inherits from hot drink
struct Tea : HotDrink
{
	//3b. create Prepare() function override
	void Prepare(int volume) override
	{
		cout << "Take Tea bag, boil water, pour" << volume <<
			"ml." << "Add some lemon\n" << endl;
	}
};

struct Coffee : HotDrink
{
	void Prepare(int volume) override
	{
		cout << "Grind some beans, boil Water, pour " << volume
			<< "ml., add cordial\n" << endl;
	}


};


//4. What we have right now is a a family of objects/ Hot Drinks.
// and NOW we can have a coresponding family of factories,
// inside another .h file (see HotDrinkFactory.h for "5")