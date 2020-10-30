#pragma once
#include "SkateboardFactory.h"
#include "LongboardDeck.h"
#include "LongboardTrucks.h"
#include "LongboardWheels.h"

class LongboardFactory : public SkateboardFactory {
public:
	Deck *CreateDeck() const override {
		return new LongboardDeck();
	}
	Trucks *CreateTrucks() const override {
		return new LongboardTrucks();
	}
	Wheels *CreateWheels() const override {
		return new LongboardWheels();
	}
};