#include <iostream>
#include <math.h>
#include "prog2.h"

int main(){
    
    
Snail z(10,2);


//z.print();
//z.decart();
double r1, r2, r3;
z.Radius(r1,r2,r3);
std::cout<<r1<<" "<<r2<<" "<<r3<<"\n";
std::cout<<z.decart()<<std::endl;
//std::cout<<cos(16)<<std::endl;
//std::cout<<z.distance(16)<<std::endl;*/
    return 0;
}