#ifndef usage_FILE_H_
#define usage_FILE_H_
#include <cstdio>

namespace sdds
{
    struct Assessment
    {
        double *m_mark;
        char *m_title;
    };
    void freeMem(Assessment *assessmnt, int cnt);
    int read(Assessment *assessmnt, FILE *ftpr);
    bool read(char* str,FILE* ftpr);
    bool read(int i,FILE* ftpr);
    bool read(double i,FILE* ftpr);

};

#endif // !SDDS_FILE_H_
