#include <iostream>
using namespace std;

class Observer
{
public:
	virtual void update(string blogName) = 0;
};

