#ifndef A02EX03_K_H
#define A02EX03_K_H

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"

using namespace std;

class Soda : public Liquid
{
private:
    string type;

public:
    Soda(string,float,double);
    virtual string getDescricao();
};

#endif

/* fim de arquivo */
