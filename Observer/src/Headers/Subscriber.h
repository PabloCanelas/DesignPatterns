#pragma once
#include <iostream> 
#include"Blog.h"
#include <string>
#include "Observer.h"
using namespace std;

class Subscriber : public Observer
{
private:
	Blog *observable;
public:
	Subscriber(Blog *ovservable)
	{
		this->observable = observable;
	}
	~Subscriber()
	{
	}
	void update(string blogName) override {
		cout << "New post on " << blogName << endl;
		cout << "Post Title: " << observable->getLastPost() << endl;
	}


};



