

#include "prog2.h"

bool snail_d_SetA(Snail &z)
{
    std::cout << "Введите значение а : --> ";
    double a;
    std::cin >> a;

    z.SetA(a);
    return 1;
}
bool snail_d_SetB(Snail &z)
{
    std::cout << "Введите значение b : --> ";
    double b;
    std::cin >> b;

    z.SetB(b);
    return 1;
}
bool snail_d_GetA(Snail &z)
{
    double a;
    a = z.GetA();
    std::cout << "a = " << a << std::endl;
    return 1;
}
bool snail_d_GetB(Snail &z)
{
    double b;
    b = z.GetB();
    std::cout << "b = " << b << std::endl;
    return 1;
}

bool snail_d_distance(Snail &z)
{
    std::cout << "Введите искомый угол(в радианах): --> ";
    double angle;
    std::cin >> angle;
    double r;

    r = z.distance(angle);
    std::cout << "Расстояние до центра равно " << r << std::endl;
    return 1;
}

bool snail_d_print(Snail &z)
{
    std::cout << "Значения a и b:\n";
    z.print();
    return 1;
}
bool snail_d_Type_of_Snail(Snail &z)
{
    int i = z.Type_of_Snail();
    std::cout << "Тип формы улитки Паскаля - ";
    if (i == 1)
        std::cout << "с петлей\n";
    else if (i == 2)
        std::cout << "кариоида\n";
    else if (i == 3)
        std::cout << "с изгибом\n";
    else if (i == 4)
        std::cout << "овальная\n";
    return 1;
}
bool snail_d_Square_snail(Snail &z)
{
    std::cout << "Площадь улитки Паскаля " << z.Square_snail()<<endl;
    return 1;
}
bool snail_d_Radius(Snail &z)
{
    double r1, r2, r3;
    z.Radius(r1, r2, r3);
    std::cout << "Радиус кривизны в крайней правой точке равен " << r1 << std::endl;
    std::cout << "Радиус кривизны в крайней левой точке равен " << r2 << std::endl;
    std::cout << "Радиус кривизны в точке (0;0) равен " << r3 << std::endl;
    return 1;
}
bool snail_d_decart(Snail &z)
{
    std::cout << "Улитка Паскаля в декартовой системе координат:\n";
    std::cout<<z.decart()<<std::endl;
    return 1;
}
int dialog(Snail &z)
{
 std::string words[] = { "0.Выход", "1.SetA", "2.SetB", "3.GetA",
 "4.GetB", "5.Расстояние_до_центра","6.Вывод",
  "7.Тип_улитки", "8.Площадь_улитки", "9.Радиус_кривизны","10.В_декартовыой_системе"};
    int m;
int N=11;
do{
    for (int i = 0; i < N; i++)
        std::cout << words[i] << std::endl;
    printf("выбор: --> ");
    std::cin >> m;
    
    if(m==1)
    snail_d_SetA(z);
    else if(m==2)
    snail_d_SetB(z);
    else if(m==3)
    snail_d_GetA(z);
    else if(m==4)
 snail_d_GetB(z);
    else if(m==5)
    snail_d_distance(z);
    else if(m==6)
    snail_d_print(z);
    else if(m==7)
    snail_d_Type_of_Snail(z);
    else if(m==8)
    snail_d_Square_snail(z);
    else if(m==9)
    snail_d_Radius(z);
    else if(m==10)
    snail_d_decart(z);
}while(m!=0);
return 1;
}
Snail::Snail(double newA, double newB)
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
double Snail::GetA()
{
    return a;
}
double Snail::GetB()
{
    return b;
}
void Snail::SetA(double newA)
{
    if (newA > 0)
        a = newA;
    else
        std::cout << "a должна быть больше 0\n";
}
void Snail::SetB(double newB)
{
    if (newB > 0)
        b = newB;
    else
        std::cout << "b должна быть больше 0\n";
}
double Snail::distance(double angle)
{
    return fabs(b + 2 * a * cos(angle));
}

void Snail::print()
{
    std::cout << "a = " << a << "\nb = " << b << "\n";
}
int Snail::Type_of_Snail()
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
double Snail::Square_snail()
{
    return (2 * a * a + b * b) * M_PI;
}
void Snail::Radius(double &r1, double &r2, double &r3)
{
    r1 = (b + 2 * a) * (b + 2 * a) / (b + 4 * a);
    r2 = (b - 2 * a) * (b - 2 * a) / fabs(b - 2 * a);
    if (Type_of_Snail() <= 2)
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
