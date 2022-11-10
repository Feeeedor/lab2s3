#include "prog2.h"
#include "prog2.cpp"
#include <gtest/gtest.h>

TEST (constructor, empty){
    Snail s;
    ASSERT_EQ(s.getA(),1);
    ASSERT_EQ(s.getB(),1);
}

TEST(SetA,positive){
    Snail s;
    s.setA(5);
ASSERT_EQ(s.getA(),5);
}

TEST(SetB, positive){
    Snail s;
    s.setB(10);
ASSERT_EQ(s.getB(),10);
}

TEST(Distance, 5_and_10_angle0_30){
    Snail s;
    s.setB(10);
    s.setA(5);
ASSERT_NEAR(s.distance(0.30),19.5534,0.0001);
}

TEST(Type_of_Snail, with_loop){
    Snail s;
    s.setB(7);
    s.setA(6);
ASSERT_EQ(s.type_of_Snail(),1);
}
TEST(Type_of_Snail, cardioid){
    Snail s;
    s.setB(12);
    s.setA(6);
ASSERT_EQ(s.type_of_Snail(),2);
}
TEST(Type_of_Snail, with_inflection){
    Snail s;
    s.setB(18);
    s.setA(6);
ASSERT_EQ(s.type_of_Snail(),3);
}
TEST(Type_of_Snail, oval){
    Snail s;
    s.setB(25);
    s.setA(6);
ASSERT_EQ(s.type_of_Snail(),4);
}

TEST(Square,13_and_8){
    Snail s;
    s.setB(8);
    s.setA(13);
ASSERT_NEAR(s.square_snail(),1262.92,0.01);
}

TEST(Radius, NotZero){
Snail s;
s.setA(2);
s.setB(3);
double r1, r2, r3;
s.radius(r1,r2,r3);
ASSERT_NEAR(r1,4.4545, 0.0001);
ASSERT_NEAR(r2,0.2, 0.1);
ASSERT_NEAR(r3,1.32288,0.00001);
}

TEST(Radius, Zero){
Snail s;
s.setA(2);
s.setB(9);
double r1, r2, r3;
s.radius(r1,r2,r3);
ASSERT_NEAR(r1,9.94118,0.00001);
ASSERT_NEAR(r2,25, 10);
ASSERT_NEAR(r3,0, 1);
}

TEST(Decart, 1_and_2){
Snail s;
s.setA(1);
s.setB(2);
char *f;
 s.decart(f);
    ASSERT_STREQ("(x^2+y^2-2.00*x)^2-4.00(x^2+y^2)=0", f);
}

