/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

using namespace std;

#ifndef A02EX03_H
   #define A02EX03_H


class MyProgram
{

    private:
        MyBooleanClass * verboseMode       = NULL;
        MyBooleanClass * shortMessageMode  = NULL;
        vector<Food *> myMainList;

    public:
        void get.verboseMode();
        void set.verboseMode();
        void get.shortMessageMode();
        void set.shortMessageMode();

        void start()
        {
        int main(int argc, char* argv[])
           {
           myMainList.clear();
           Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
           process();
           Information::bye(shortMessageMode->getStatus());
           clearAll();
           };
        }
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


};

    void verifyArguments(int, char* []);


#endif

/* fim de arquivo */
