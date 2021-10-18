#pragma once

#include"HotDrink.h"

//5. Create a Struct called HotDrinkFactory

struct HotDrinkFactory
{
	//5a. create unique_pointer to HotDrink as a factory method called Make
	//5b. include memory in HotDrink.h
	//make it pur  virtual

	virtual unique_ptr<HotDrink> Make() const = 0;
};

//6. Create a struct called TeaFactory which inherits from HotDrinkFactory

struct TeaFactory :HotDrinkFactory
{
	//6. override the make function
	unique_ptr<HotDrink> Make() const override
	{
		//return unique Tea
		return make_unique<Tea>();


	}
};


//7. Now repeat step all step 6 creating a CoffeeFactory struct
struct CoffeeFactory :HotDrinkFactory
{
	unique_ptr<HotDrink> Make() const override
	{
		return make_unique<Coffee>();
	}
};

// NOW we have a family of products AND their coresponding factories
// We canactually try and make certain products
// (return to 'Factories_5_Abstract_Factories.cpp' for step "8"...)