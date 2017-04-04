/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Felipe Tosta Santos
   Abri/2017
*/

#ifndef MyProgram_H
   #define MyProgram_H

#include <string>


class MyProgram
	{
	private:

	MyBooleanClass * verboseMode       = NULL;
	MyBooleanClass * shortMessageMode  = NULL;
	vector<Food *> myMainList;

	public:

	void process(void);
        void verifyArguments(int, char* []);
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


#endif

/* fim de arquivo */
