#include <iostream>
#include "Observable.h"
#include <vector>
#include <string>
using namespace std;

class Blog : public Observable {
private:
	vector<Observer*> Subscribers;
	string blogName;
	string lastPost;
public:
	Blog(string blogName){
		this->blogName = blogName;
		this->lastPost = "";
	}
	string getLastPost() {
		return lastPost;
	}
	void newPost(string postName){
		this->lastPost = postName;
		this->notify();
		cout << "New post '" << lastPost << "' succesfully posted and notified to this blog subscribers" << endl;
	}
	void attach(Observer *O) override {
		Subscribers.push_back(O);
	}

	void detach(Observer *O) override {
		//Subscribers.pop_back(O);
	}

	void notify() override {
		for (int i = 0; i < Subscribers.size(); i++) {
			Subscribers.at(i)->update(blogName);
		}
	}
};