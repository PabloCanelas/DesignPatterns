#include <iostream>
using namespace std;
#include "Blog.h";
#include"Subscriber.h"

int main() {
	//Blog creation
	Blog TylerTattooBlog("tylerTatto23");

	//Users creation
	Subscriber Sus1(&TylerTattooBlog);
	Subscriber Sus2(&TylerTattooBlog);
	Subscriber Sus3(&TylerTattooBlog);

	//Users subscribing to blog (attach)
	TylerTattooBlog.attach(&Sus1);
	TylerTattooBlog.attach(&Sus2);
	TylerTattooBlog.attach(&Sus3);

	//New post on Blog
	TylerTattooBlog.newPost("The best of TattoCon NY 2019");

	system("pause");
	return 0;
}