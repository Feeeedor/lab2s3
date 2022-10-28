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

    double getA();
    double getB();
    void setA(double newA);

    void setB(double newB);

    double distance(double angle);

 
    int type_of_Snail();

    double square_snail();
    void radius(double &r1, double &r2, double &r3);
    char *decart();
};

int dialog();

void snail_d_setA(Snail &z);
void snail_d_setB(Snail &z);
void snail_d_getA(Snail &z);
void snail_d_getB(Snail &z);
void snail_d_distance(Snail &z);

void snail_d_type_of_Snail(Snail &z);
void snail_d_square_snail(Snail &z);
void snail_d_radius(Snail &z);
void snail_d_decart(Snail &z);
int vvodd(double &a);
int vvodm(int &a);
int dialog(Snail &z);
