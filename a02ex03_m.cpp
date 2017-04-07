#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_m.hpp"

using namespace std;

Soda::Soda(string type,float liters ,double valor)  : Liquid(liters,valor)
{
    this->type = type;
};

string Soda::getDescricao()
{
   return ("Soda " + type + " - " + to_string(liters)  + " L.");
};

/* fim de arquivo */
