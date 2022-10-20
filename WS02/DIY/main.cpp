/***********************************************************************
// OOP244 Workshop 2 p2: tester program
//
// File  main.cpp
// Version 1.0
// Date  2022/09/17
// Author   Fardad Soleimanloo
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include "Population.h"
#include <iostream>

using namespace sdds;
// The Load, display and deallocateMemory functions are the mandatory 
// function to be created in part 2 of the lab

int main() {
   std::string filename = "PCpopulations.csv";
   // if loading of the population recrods into the dynamic memroy is successful
   if(sdds::load(filename.c_str())) {
      // display all the records
      sdds::display();
   }
   // in any case delete the dynmaic memory if it is allocated
   deallocateMemory();
   return 0;
}
