#ifndef CALCULATEPTR_H
#define CALCULATEPTR_H


void runcal();

double calculate(double d1, double d2, double (*f)(double,double));
double add(double d1, double d2);
double div(double d1, double d2);
double mul(double d1, double d2);


#endif // !CALCULATEPTR_H
