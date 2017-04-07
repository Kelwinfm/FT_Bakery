#ifndef A02EX03_K_H
#define A02EX03_K_H

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_l.hpp"

using namespace std;

class Water : public Liquid
{
private:
    string type;

public:
    Water(string,float,double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */
