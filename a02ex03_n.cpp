/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "a02ex03_n.hpp"

using namespace std;

Beer::Beer(int units, float liters, double valor) : Liquid(liters,valor)
{
   this->units= units;
};

int Beer::getUnits()
{
    return (units);
};

/* fim de arquivo */
