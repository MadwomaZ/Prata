#include <iostream>

//my name and my adress
void study2_1()
{
    std::string name = "Terminator";
    std::string adress = "Terminator-Land";

    std::cout << "My name is " << name << std::endl;
    std::cout << "My adress: " << adress << std::endl;
}

//farlong converts into yardy

int study2_2 ()
{
    int farlong;
    int oneFarlong = 220; //yards
    std::cout << "Enter farlong: ";
    std::cin >> farlong;
    std::cout << farlong << " farlongs = " << farlong*oneFarlong <<
                 " yards.\n" << "Profit!";
    return 0;
}

//The use of three user-defined functions

void Three_blind_mice ()
{
    std::cout << "Three blind mice\n";
}

void See_how_they_run ()
{
    std::cout << "See how they run\n";
}

void study2_3 ()
{
    Three_blind_mice();
    Three_blind_mice();
    See_how_they_run();
    See_how_they_run();
}

//Output you age in months

void study2_4 ()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age in mounths: " << age*12<<std::endl;
}

//degrees Celsius -> degrees Fahrenheit

void study2_5 ()
{
    double const kf = 1.8;
    double value; // For celsius
    std::cout << "Please, enter a Celsius value: ";
    std::cin >> value;
    std::cout << value << " degrees Celsius is " << value*kf + 32 << " degrees Fahrenheit."<<std::endl;
}

//light years -> astronomical units

void study2_6 ()
{
    int const k = 63240;
    double val; // For years
    std::cout << "Enter the number of light years: ";
    std::cin >> val;
    std::cout << val << " light years = " << val*k << " astronomical units."<<std::endl;
}

//Print time

void study2_7 ()
{
    int hours, minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    std::cout << "Time: " << hours << ":" << minutes <<std::endl;
}

//all study2 function

void study2 ()
{
    study2_1();
    study2_2();
    study2_3();
    study2_4();
    study2_5();
    study2_6();
    study2_7();

}

