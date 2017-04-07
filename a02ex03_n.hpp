/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_N_H
   #define A02EX03_N_H

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_n.hpp"

using namespace std;

class Beer : public Liquid
   {
protected:
    int units;

   public:
    Beer(int,float, double);
    virtual string getDescricao() = 0;
    virtual int getUnits();
   };

#endif

/* fim de arquivo */
