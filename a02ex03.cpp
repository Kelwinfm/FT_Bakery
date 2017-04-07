/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Abri/2017
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03.hpp"
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

bool MyProgram::setVerboseMode(bool verboseMode)
{
    verboseMode = verboseMode;
};
bool MyProgram::getVerboseMode() const
{
    return verboseMode;
};

bool MyProgram::setshortMessageMode(bool shortMessageMode)
{
    shortMessageMode = shortMessageMode;
};
bool MyProgram::getshortMessageMode() const
{
    return shortMessageMode;
};

void MyProgram::start(int argc, char* argv[])
{
    myMainList.clear();
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
};

void MyProgram::process()
   {
   vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
   Menu menu("Main Menu", opcoes);
   int escolha = -1;

   while(escolha)
      {
      escolha = menu.getEscolha();

      switch(escolha)
         {
 	 case 1: { listItems();    }; break;
 	 case 2: { insertItems();  }; break;
         };
      };
   };

void MyProgram::clearAll()
   {

   vector<Food *>::iterator scan = myMainList.begin();

   while(scan != myMainList.end())
      {
      delete (*scan);
      *scan - NULL;
      scan++;
      };

    myMainList.clear();

   delete verboseMode;
   delete shortMessageMode;
   verboseMode = NULL;
   shortMessageMode = NULL;
   };


void MyProgram::listItems()
   {
   double total = 0.00;

   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();

   while(scan != myMainList.end())
      { //setw(20) numero máximo de getDescricao
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl; //fixed notação cientifica
      total +=  (*scan)->getValor(); //setprecision numero de casas que getValor vai exibir
      scan++;
      };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
   };


void MyProgram::insertItems()
   {
   cout << "------------------------------\nInset New Items:\n------------------------------\n";

   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella","Milk","Water","Soda","Beer" });
   int escolha = -1;

   while(escolha)
      {
      escolha = menu.getEscolha();

      switch(escolha)
         {
 	 case 1: { insertBread();        }; break;
 	 case 2: { insertCheese();       }; break;
 	 case 3: { insertCottageCheese();}; break;
 	 case 4: { insertCracker();      }; break;
 	 case 5: { insertFilledWafer();  }; break;
 	 case 6: { insertHam();          }; break;
 	 case 7: { insertMortadella();   }; break;
 	 case 8: { insertMilk();         }; break;
 	 case 9: { insertWater();        }; break;
 	 case 10:{ insertSoda();         }; break;
 	 case 11:{ insertBeer();         }; break;
         };
      };
   };

void MyProgram::insertBread()
   {
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);

   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;
   };


void MyProgram::insertCracker()
   {
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);

   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;
   };


void MyProgram::insertFilledWafer()
   {
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type);
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);

   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;
   };


void MyProgram::insertCheese()
   {
   Cheese * cheese;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   cheese = new Cheese(type, weight,cost);
   myMainList.insert(myMainList.end(), cheese);

   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
};

 void MyProgram::insertCottageCheese()
   {
   CottageCheese * cottage_cheese;
   string buffer;
   string type;
   string brand;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Brand ......: "; getline(cin, brand);
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   cottage_cheese = new CottageCheese(type, brand, weight,cost);
   myMainList.insert(myMainList.end(), cottage_cheese);

   cout << endl << cottage_cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottage_cheese->getValor() << endl;
   };


void MyProgram::insertHam()
  {
   Ham * ham;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   ham = new Ham(type, weight,cost);
   myMainList.insert(myMainList.end(), ham);

   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;
  };


void MyProgram::insertMortadella()
  {
   Mortadella * mortadella;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   mortadella = new Mortadella(type, weight,cost);
   myMainList.insert(myMainList.end(), mortadella);

   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;
  };
void MyProgram::insertMilk()
   {
   Milk * milk;
   string buffer;
   string type;
   float liters;
   double cost;

   cout << "------------------------------\nInsert Milk:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Liters ....: "; getline(cin, buffer); liters = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   milk = new Milk(type,liters,cost);
   myMainList.insert(myMainList.end(), milk);

   cout << endl << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getValor() << endl;
   };
void MyProgram::insertWater()
   {
   Water * water;
   string buffer;
   string type;
   float liters;
   double cost;

   cout << "------------------------------\nInsert Water:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Liters ....: "; getline(cin, buffer); liters = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   water = new Water(type,liters,cost);
   myMainList.insert(myMainList.end(), water);

   cout << endl << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getValor() << endl;
   };

void MyProgram::insertSoda()
   {
   Soda * soda;
   string buffer;
   string type;
   float liters;
   double cost;

   cout << "------------------------------\nInsert Soda:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Liters ....: "; getline(cin, buffer); liters = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();

   soda = new Soda(type,liters,cost);
   myMainList.insert(myMainList.end(), soda);

   cout << endl << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getValor() << endl;
   };

void MyProgram::insertBeer()
   {
   cout << "------------------------------\nInsert New Beer:\n------------------------------\n";

   Menu menu("Insert Beer", { "Exit", "Skol", "Brahma", "Amstel", "Heineken" });
   int escolha = -1;

   while(escolha)
      {
      escolha = menu.getEscolha();

      switch(escolha)
         {
 	 case 1: { /*insertSkol();  */  }; break;
 //	 case 2: { insertBrahma();  }; break;
 //	 case 3: { insertAmstel();  }; break;
 //	 case 4: { insertHeineken();}; break;
         };
      };
   };
/* fim de arquivo */
