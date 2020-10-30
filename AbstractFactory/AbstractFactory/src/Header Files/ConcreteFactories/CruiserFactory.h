#pragma once
#include "SkateboardFactory.h"
#include "CruiserDeck.h"
#include "CruiserTrucks.h"
#include "CruiserWheels.h"

class CruiserFactory : public SkateboardFactory {
public:
	Deck *CreateDeck() const override {
		return new CruiserDeck();
	}
	Trucks *CreateTrucks() const override {
		return new CruiserTrucks();
	}
	Wheels *CreateWheels() const override {
		return new CruiserWheels();
	}
};