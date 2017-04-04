#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"

using namespace std;

Cheese::Cheese(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };

string Cheese::getDescricao()
   {
   return ("Cheese " + tipo + " - " + to_string(peso) + " Kg.");
   };

/* fim de arquivo */
