/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Felipe Tosta Santos
   Abri/2017
*/
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"
#include "a02ex03_l.hpp"
#include "a02ex03_m.hpp"
#include "a02ex03_n.hpp"
#include "a02ex03_o.hpp"
//#include "a02ex03_p.hpp"
//#include "a02ex03_q.hpp"
//#include "a02ex03_r.hpp"

using namespace std;

#ifndef A02EX03_H
   #define A02EX03_H
class MyProgram
{
private:

    vector<Food *> myMainList;
    MyBooleanClass * verboseMode      = NULL;
	MyBooleanClass * shortMessageMode = NULL;

    void process(void);
    void clearAll(void);

    void listItems(void);
    void insertItems(void);
    void insertBread(void);
    void insertCracker(void);
    void insertFilledWafer(void);
    void insertCheese(void);
    void insertCottageCheese(void);
    void insertHam(void);
    void insertMortadella(void);
    void insertMilk(void);
    void insertWater(void);
    void insertSoda(void);
    void insertBeer(void);


public:

    void verifyArguments(int, char* []);
    bool setVerboseMode(bool verboseMode);
    bool getVerboseMode() const;
    bool setshortMessageMode(bool shortMessageMode);
    bool getshortMessageMode() const;
    void start(int argc, char* argv[]);

};

#endif

/* fim de arquivo */
