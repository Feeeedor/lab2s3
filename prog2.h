#include <string.h>

class Snail
{
private:
    double a;
    double b;

public:
    Snail(double newA, double newB)
    {
        if (newA > 0)
            a = newA;
        else
        {
            std::cout << "а должна быть больше нуля, а установлена на 1\n";
            a = 1;
        }
        if (newB > 0)
            b = newB;
        else
        {
            std::cout << "b должна быть больше нуля, b установлена на 1\n";
            a = 1;
        }
    }
 double GetA(){
return a;
 }
 double GetB(){
return b;
 }
    void SetA(double newA)
    {
        if (newA > 0)
            a = newA;
        else
            std::cout << "a должна быть больше 0\n";
    }

    void SetB(double newB)
    {
        if (newB > 0)
            b = newB;
        else
            std::cout << "b должна быть больше 0\n";
    }

    double distance(double angle)
    {
        return fabs(b + 2 * a * cos(angle));
    }

    void print()
    {
        std::cout << "a = " << a << "\nb = " << b << "\n";
    }

    int Type_of_Snail()
    {
        // std::cout<<"Тип улитки Паскаля - ";
        if (b < 2 * a)
            return 1;
        // std::cout<<"с петлей\n";
        else if (b == 2 * a)
            return 2;
        // std::cout<<"кардиоида\n";
        else if (b < 4 * a)
            return 3;
        // std::cout<<"с перегибом\n";
        else
            return 4;
        // std::cout<<"овальная\n";
    }

    double Square_snail()
    {
        return (2 * a * a + b * b) * M_PI;
    }
void Radius(double &r1, double &r2, double &r3){
r1=(b+2*a)*(b+2*a)/(b+4*a);
r2=(b-2*a)*(b-2*a)/fabs(b-2*a);
if(Type_of_Snail()<=2)
r3=0.5*sqrt(4*a*a-b*b);
else
r3=0;
}
    char *decart()
    {
        double n1 = a * 2;
        double n2 = b * b;

        char num1[10];
        snprintf(num1, sizeof(num1), "%lf", n1);
        char num2[10];
        snprintf(num2, sizeof(num2), "%lf", n2);
        char s1[] = {"(x^2+y^2-"};
        char s2[] = {"*x)^2-"};
        char s3[] = {"(x^2+y^2)=0"};
        char *dec = new char[strlen(s1) + strlen(num1) + strlen(s2) + strlen(num2) + strlen(s3)];
        strcat(dec, s1);
        strcat(dec, num1);
        strcat(dec, s2);
        strcat(dec, num2);
        strcat(dec, s3);

        return dec;
    }
};