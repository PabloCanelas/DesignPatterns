#pragma once
#include "SkateboardFactory.h"
#include "SkateDeck.h"
#include "SkateTrucks.h"
#include "SkateWheels.h"

class SkateFactory : public SkateboardFactory {
public:
	Deck *CreateDeck() const override {
		return new SkateDeck();
	}
	Trucks *CreateTrucks() const override {
		return new SkateTrucks();
	}
	Wheels *CreateWheels() const override {
		return new SkateWheels();
	}
};