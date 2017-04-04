#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };

string CottageCheese::getDescricao()
   {
   return ("Cottage Cheese " + tipo + " - " + to_string(peso) + " Kg.");
   };

/* fim de arquivo */

