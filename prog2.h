#pragma once
#include <iostream>
#include <cstring>
#include <math.h>

class Snail
{
private:
    double a;
    double b;

public:
    Snail(double newA, double newB);
    
 double GetA();
 double GetB();
    void SetA(double newA);

    void SetB(double newB);

    double distance(double angle);

    void print();
    int Type_of_Snail();

    double Square_snail();
void Radius(double &r1, double &r2, double &r3);
    char *decart();
};


int dialog();

bool snail_d_SetA(Snail &z);
bool snail_d_SetB(Snail &z);
bool snail_d_GetA(Snail &z);
bool snail_d_GetB(Snail &z);
bool snail_d_distance(Snail &z);
bool snail_d_print(Snail &z);
bool snail_d_Type_of_Snail(Snail &z);
bool snail_d_Square_snail(Snail &z);
bool snail_d_Radius(Snail &z);
bool snail_d_decart(Snail &z);
int vvodd(double &a);
  int dialog(Snail &z);
  