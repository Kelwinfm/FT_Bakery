#ifndef A02EX03_P_H
#define A02EX03_P_H

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_p.hpp"

using namespace std;

class Brahma : public Beer
    {
    private:
        float alcoholic_content;
        
    public: 
        Brahma (float, int, float, double);
        virtual string getDescricao()
    };

#endif 

/* fim de arquivo */
	