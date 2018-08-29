#ifndef FAVOURIATE_FLY_H
#define FAVOURIATE_FLY_H
#include<iostream>
using namespace std;
class Ffly{
	public:
	virtual void fly()=0; 
};
class FflywithWings :public Ffly{
	public:
		void fly(){
			cout<<"i can fly"<<endl;
		}
};
class FflyNoway :public Ffly{
	public:
		void fly(){
			cout<<"i can't fly"<<endl;
		}
};
class FflyWithRockets :public  Ffly{
	public:
		void fly(){
			cout<<"i can fly with rockets"<<endl;
		}
};

#endif
