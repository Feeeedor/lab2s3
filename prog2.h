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
    void ptint()
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