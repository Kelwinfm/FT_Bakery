#ifndef A02EX03_O_H
   #define A02EX03_O_H

#include <string>
#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_o.hpp"

using namespace std;

class Skol : public Beer
   {
   private:
      float alcoholic_content;

   public:
      Skol(float, int, float, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */
