#ifndef A02EX03_R_H
   #define A02EX03_R_H

#include <string>
#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_r.hpp"

using namespace std;

class Heineken : public Beer
   {
   private:
      float alcoholic_content;

   public:
      Heineken(float, int, float, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */
#endif
