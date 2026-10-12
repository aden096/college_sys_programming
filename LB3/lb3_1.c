#include <stdio.h>
#include <math.h>

// Prototype
void calculations(double*, double*, double*);

int main(void)
{
    double group_n = 79, ord_n = 1, study_year = 3;

    printf("Номер групи: %g\tПорядковий номер в журналі: %g\tКурс:%g\n", group_n, ord_n, study_year);
    
    // Passing references
    calculations(&group_n, &ord_n, &study_year);
    printf("Номер групи: %g\tПорядковий номер в журналі: %g\tКурс:%g\n", group_n, ord_n, study_year);

    return 0;
}

// Calculating something
void calculations(double *group, double *ord, double *year)
{
    double sum = (*group) + (*ord) + (*year);
    double product = (*group) * (*ord) * (*year);

    double trig = 0;

    if (fmod(*year, 2.0) == 0)
        trig = sin(sum);
    else
        trig = cos(sum);
    
    // Reassigning values
    *group = sum; *ord = product; *year = trig;
}