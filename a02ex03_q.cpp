#include<string>
#include "a02ex03_q.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"

using namespace std;

Amstel::Amstel(float alcoholic_content, int units, float liters, double cost) : Beer(units, liters, cost)
   {
   this->alcoholic_content = alcoholic_content;
   };

string Amstel::getDescricao()
   {
   return ("Amstel " + to_string(liters) + " L." + to_string(units) + "un" + " - " + to_string(alcoholic_content) + " % of alcohol");
   };

/* fim de arquivo */
