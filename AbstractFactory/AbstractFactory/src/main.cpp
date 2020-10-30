#include <iostream>
#include"CruiserFactory.h"
#include"LongboardFactory.h"
#include"SkateFactory.h"
#include "Deck.h"
#include "Wheels.h"
#include "Trucks.h"

using namespace std;

int main() {
	CruiserFactory cruisers;
	LongboardFactory longs;
	SkateFactory clasics;

	//Creacion de productos individuales para Longboard
	Deck *longDeck = longs.CreateDeck();
	Wheels *longWheels = longs.CreateWheels();
	Trucks *longTrucks = longs.CreateTrucks();

	//Creacion de productos individuales para Cruiser
	Deck *cruiserDeck = cruisers.CreateDeck();
	Wheels *cruiserWheels = cruisers.CreateWheels();
	Trucks *cruiserTrucks = cruisers.CreateTrucks();

	//Creacion de productos individuales para Longboard
	Deck *skateDeck = clasics.CreateDeck();
	Wheels *skateWheels = clasics.CreateWheels();
	Trucks *skateTrucks = clasics.CreateTrucks();
	return 0;
}