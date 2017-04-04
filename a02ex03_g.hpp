#ifndef A02EX03_G_H
   #define A02EX03_G_H

#include <string>
#include "a02ex03_f.hpp"


class CottageCheese : public Cheese
	{
	private:
        	string marca;

	public:
		CottageCheese(string,string, float, double);
		virtual string getDescricao();
	};


#endif

/* fim de arquivo */

