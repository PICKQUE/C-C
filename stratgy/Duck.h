// define duck_h
#ifndef DUCK_H
#define DUCK_H

#include"Favoriate.h"

class Duck{
	private:
		Ffly *fl;
	public:
		Duck(Ffly *fb)
		{
			fl=fb;
		}
		virtual void Display()
		{
			fl->fly();
		}
};
class MaradDuck :public Duck{
	MaradDuck(Ffly *fl):Duck(fl)
	{}
};
#endif
