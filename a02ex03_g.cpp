#include <string>
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, string marca, float peso, double valor) : Cheese(tipo, peso,valor)
   {
    this->marca = marca;
   };

string CottageCheese::getDescricao()
   {
   return ("Cottage Cheese marca " + marca + " - " + Cheese::getDescricao());
   };

/* fim de arquivo */

