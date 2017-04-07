#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_p.hpp"

using namespace std;

Brahma::Brahma(float alcoholic_content, int units, float liters, double cost) : Beer(units, liters, cost)
{
    this->alcoholic_content = alcoholic_content;
}

string Brahma::getDescricao()
   {
   return ("Brahma " + to_string(liters) + " L." + to_string(units) + "un" + " - " + to_string(alcoholic_content) + " % of alcohol");
   };
   
   /* fim de arquivo */