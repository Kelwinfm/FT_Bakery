#include "a02ex03_j.hpp"

Liquid::Liquid(float liters, double valor): Food(valor);
{
    this->liters = liters;
}

float Liquid::getValor()
{
   return (liters);
};

/* fim de arquivo */
