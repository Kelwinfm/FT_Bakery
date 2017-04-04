#ifndef A02EX03_G_H
   #define A02EX03_G_H

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"


class CottageCheese : public Food
	{
	private:
	string tipo;
	float peso;

	public:
	CottageCheese(string, float, double);
	virtual string getDescricao();
	};


#endif

/* fim de arquivo */
