#pragma once
#include "Deck.h"
#include "Wheels.h"
#include "Trucks.h"

class SkateboardFactory {
public:
	virtual Deck *CreateDeck() const = 0;
	virtual Wheels *CreateWheels() const = 0;
	virtual Trucks *CreateTrucks() const = 0;
};