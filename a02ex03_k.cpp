#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"

using namespace std;

Milk::Milk(string type, double liters) : Liquid(liters)
   {
   this->type = type;
   };

string Milk::getDescricao()
   {
   return ("Milk " + type + " - " + " L.");
   };

/* fim de arquivo */
