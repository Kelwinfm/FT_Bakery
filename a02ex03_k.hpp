#ifndef A02EX03_K_H
#define A02EX03_K_H


using namespace std;

class Milk : public Liquid
   {
private:
    string type;

public:
    Milk(string, double);
    virtual string getDescricao();
   };

#endif

/* fim de arquivo */
