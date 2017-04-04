#ifndef A02EX03_F_H
    #define A02EX03_F_H

#include <string>
#include "a02ex03_b.hpp"


using namespace std;

class Cheese : public Food
{
   private:
      string tipo;
      float peso;

   public:
      Cheese(string, float, double);
      virtual string getDescricao();
};

#endif // A02EX03_F_H

/* fim de arquivo */
