#ifndef A02EX03_J_H
#define A02EX03_J_H


class Liquid : public Food
{
    protected:
        float liters;

    public:
        Liquid(float,double);
        virtual string getDescricao();
};

#endif // A02EX03_J_H

/* fim de arquivo */
