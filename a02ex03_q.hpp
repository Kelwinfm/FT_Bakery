#ifndef A02EX03_Q_H
#define A02EX03_Q_H

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_q.hpp"

using namespace std;

class Amstel : public Beer
   {
   private:
      float alcoholic_content;

   public:
      Amstel(float, int, float, double);
      virtual string getDescricao();
   };

#endif

/* fim de arquivo */
