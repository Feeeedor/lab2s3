#pragma once
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdexcept>

class Snail
{
private:
    double a;
    double b;
public:
    Snail();

    double GetA();
    double GetB();
    void SetA(double newA);

    void SetB(double newB);

    double distance(double angle);

 
    int Type_of_Snail();

    double Square_snail();
    void Radius(double &r1, double &r2, double &r3);
    char *decart();
};

int dialog();

void snail_d_SetA(Snail &z);
void snail_d_SetB(Snail &z);
void snail_d_GetA(Snail &z);
void snail_d_GetB(Snail &z);
void snail_d_distance(Snail &z);

void snail_d_Type_of_Snail(Snail &z);
void snail_d_Square_snail(Snail &z);
void snail_d_Radius(Snail &z);
void snail_d_decart(Snail &z);
int vvodd(double &a);
int vvodm(int &a);
int dialog(Snail &z);
