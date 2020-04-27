#include<iostream>
using namespace std;
class copyconstructor{
	char *s_copy;
    int *ptr;
public:
	
	copyconstructor(int m);
	copyconstructor(const char *str,int p);
	copyconstructor(copyconstructor &s,copyconstructor &p);
	int getx();
	void concatenate(const char *str,int m);
	~copyconstructor ();
	void operator ++();
	void display();
	void display1();
};
