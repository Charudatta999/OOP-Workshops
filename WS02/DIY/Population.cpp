#include "Population.h"
#include "File.h"
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <sstream>
#include <typeinfo>
#include <ctype.h>

namespace sdds
{

  struct State
  {
    std::string state;
  };
  struct Population
  {
    long int population;
  };
  // state* s = new state();
  State *array_state = new State[15];
  Population *array_population = new Population[15];

  FILE *abcd;
  bool load(const char *filename)
  {
  sdds:
    openFile(filename);
  }

  void display()
  {
    std::cout << "Postal Code: population" << std::endl;
    std::cout << "-------------------------" << std::endl;

    // std::vector<data*> tokens;

    abcd = sdds::getPointer();

    char ch;

    std::string tmp;

    int count = 0;
    int count_population = 0;
    while (fscanf(abcd, "%c", &ch) == 1)
    {

      std::string line{ch}, state{};
      long int population{};

      if (line == ",")
      {

        array_state[count].state = tmp;
        tmp = "";
        count++;
        continue;
      }
      else if (line == "\n")
      {
        population = std::stoi(tmp);
        array_population[count_population].population = population;
        tmp = "";
        count_population++;
        continue;
      }

      tmp += ch;
    }
    long double total_population{0};
    for (auto i{0}; i < count; i++)
    {

      std::cout << i << "- " << array_state[i].state << ":  " << array_population[i].population << std::endl;
      total_population += array_population[i].population;
    }

    std::cout << "-------------------------" << std::endl;
    std::cout << "Population of Canada: " << total_population << std::endl;
  }
  void deallocateMemory()
  {
    delete[] array_population;
    delete[] array_state;
  }

}
