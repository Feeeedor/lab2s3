#include "prog2.h"

void snail_d_setA(Snail &z)
{
    std::cout << "Введите значение а : --> ";
    double a;
    try{
    vvodd(a);
    z.setA(a);}
    catch (std::underflow_error &err){
        std::cout<<"Underflow_error "<<err.what()<<std::endl;
    }
}
void snail_d_setB(Snail &z)
{
    std::cout << "Введите значение b : --> ";
    double b;
    try{
    vvodd(b);
    z.setB(b);}
    catch (std::underflow_error &err){
        std::cout<<"Underflow_error "<<err.what()<<std::endl;
    }
}
void snail_d_getA(Snail &z)
{
    double a;
    a = z.getA();
    std::cout << "a = " << a << std::endl;
}
void snail_d_getB(Snail &z)
{
    double b;
    b = z.getB();
    std::cout << "b = " << b << std::endl;
}
void snail_d_distance(Snail &z)
{
    std::cout << "Введите искомый угол(в радианах): --> ";
    double angle;
    vvodd(angle);
    double r;

    r = z.distance(angle);
    std::cout << "Расстояние до центра равно " << r << std::endl;

}
void snail_d_type_of_Snail(Snail &z)
{
    int i = z.type_of_Snail();
    std::cout << "Тип формы улитки Паскаля - ";
    switch (i){
    case 1:
        std::cout << "с петлей\n";
        break;
    case 2:
        std::cout << "кариоида\n";
        break;
    case 3:
        std::cout << "с изгибом\n";
        break;
    case 4:
        std::cout << "овальная\n";
        break;}
}
void snail_d_square_snail(Snail &z)
{
    std::cout << "Площадь улитки Паскаля " << z.square_snail() << std::endl;

}
void snail_d_radius(Snail &z)
{
    double r1, r2, r3;
    z.radius(r1, r2, r3);
    std::cout << "Радиус кривизны в крайней правой точке равен " << r1 << std::endl;
    std::cout << "Радиус кривизны в крайней левой точке равен " << r2 << std::endl;
    std::cout << "Радиус кривизны в точке (0;0) равен " << r3 << std::endl;
    
}
void snail_d_decart(Snail &z)
{
    std::cout << "Улитка Паскаля в декартовой системе координат:\n";
    std::cout << z.decart() << std::endl;

}

int dialog(Snail &z)
{
    std::cout << std::endl;
    std::string words[] = {"0.Выход", "1.SetA", "2.SetB", "3.GetA",
                           "4.GetB", "5.Расстояние_до_центра",
                           "6.Тип_улитки", "7.Площадь_улитки", "8.Радиус_кривизны", "9.В_декартовыой_системе"};
    int m;
    int N = 10;
    do
    {
        for (int i = 0; i < N; i++)
            std::cout << words[i] << std::endl;
        printf("выбор: --> ");
       vvodm(m);
        switch (m)
        {
        case 1:
            snail_d_setA(z);
            break;
        case 2:
            snail_d_setB(z);
            break;
        case 3:
            snail_d_getA(z);
            break;
        case 4:
            snail_d_getB(z);
            break;
        case 5:
            snail_d_distance(z);
            break;
        case 6:
            snail_d_type_of_Snail(z);
            break;
        case 7:
            snail_d_square_snail(z);
            break;
        case 8:
            snail_d_radius(z);
            break;
        case 9:
            snail_d_decart(z);
            break;
            case 0:
            return 1;
            default:
            std::cout<<"Должно быть введено значение от 0 до 9"<<std::endl;
            break;
        }
    } while (1);
    return 1;
}

Snail::Snail()
{
    a=1;
    b=1;
}
double Snail::getA()
{
    return a;
}
double Snail::getB()
{
    return b;
}
void Snail::setA(double newA)
{
    if (newA <= 0)
    throw std::underflow_error("a должна быть больше 0");
        a = newA;
}
void Snail::setB(double newB)
{
    if (newB <= 0)
    throw std::underflow_error("b должна быть больше 0");
        b = newB;
    
}
double Snail::distance(double angle)
{
    return fabs(b + 2 * a * cos(angle));
}
int Snail::type_of_Snail()
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
double Snail::square_snail()
{
    return (2 * a * a + b * b) * M_PI;
}
void Snail::radius(double &r1, double &r2, double &r3)
{
    r1 = (b + 2 * a) * (b + 2 * a) / (b + 4 * a);
    r2 = (b - 2 * a) * (b - 2 * a) / fabs(b - 4 * a);
    if (type_of_Snail() <= 2)
        r3 = 0.5 * sqrt(4 * a * a - b * b);
    else
        r3 = 0;
}
char *Snail::decart()
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

int vvodm(int &a)
{
    while (1)
    {
        std::cin >> a;
        if (std::cin.good() == 1 && a >= 0 && a <= 9)
            break;
        std::cout << "You are wrong. Repeat please" << std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    return 1;
}
int vvodd(double &a)
{
    while (1)
    {
        std::cin >> a;
        if (std::cin.good() == 1)
            break;
            
        std::cin.clear();
          
        std::cin.ignore(1024,'\n');
        std::cout << "You are wrong. Repeat please" << std::endl;
        
    }
    return 1;
}

