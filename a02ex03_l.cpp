#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_l.hpp"


using namespace std;

Water::Water(string type,float liters ,double valor)  : Liquid(liters,valor)
{
    this->type = type;
};

string Water::getDescricao()
{
   return ("Water " + type + " - " + to_string(liters)  + " L.");
};

/* fim de arquivo */
