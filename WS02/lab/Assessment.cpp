#include<iostream>
#include<string>
#include "Assessment.h"

namespace sdds{
    FILE * ftpr;
    // struct Assessment {
    // double* m_mark;
    // char* m_title;
    // };

// Assessment* Asse = new Assessment();

bool read(char str,FILE* ftpr){
    return false;
};
bool read(int i,FILE* ftpr){
    int a;
   fscanf(ftpr, "%d" ,&a);
   if (i==a)
       return true;
    else
        return false;
};
bool read(double i,FILE* ftpr){

    return false;
};
void freeMem(Assessment* assessment,int cnt){}

};