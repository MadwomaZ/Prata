#include <iostream>
#include <cmath>

//Height in inches -> feet, inches.

int study3_1 ()
{
    const int ft = 12;
    double feet;
    int inch;
    std::cout << "Enter your height in inches:____\b\b\b\b";
    std::cin >> inch;
    feet = inch / ft;
    inch = inch % ft;
    std::cout << "\nOh, your height is " << feet << " feet(s) and " <<
                 inch << " inches.\n";
    return 0;
}

//The calculation of body mass index

int study3_2 ()
{
    int heightFeet, heightInch, weightPhound;
    const int oneFt = 12;
    const double oneMetre = 0.0254;
    const double oneKg = 2.2;
    double ibm;

    std::cout << "Enter your height in feet:____\b\b\b\b";
    std::cin >> heightFeet;
    std::cout << "Enter your height in inches:____\b\b\b\b";
    std::cin >> heightInch;
    std::cout << "Enter your weight in phounds:____\b\b\b\b";
    std::cin >> weightPhound;
    ibm = (weightPhound / oneKg) / (pow((((heightFeet * oneFt) + heightInch) * oneMetre), 2));
    std::cout << "IBM = " << ibm << std::endl;

    return 0;
}

//Latitude in decimal format

int study3_3 ()
{
    const double oneMinute = 60; //degrees seconds
    const double oneDegree = 60; //degrees minutes
    int minutes, degrees, seconds;
    double result;
    std::cout << "Ente a latitude in degrees, minutes, and seconds:\n";
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "\nNext, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "\nFinally, enter the seconds of arc: ";
    std::cin >> seconds;
    result = degrees + (minutes / oneDegree) + (seconds / (oneMinute * oneDegree));
    std::cout <<std::endl << degrees << " degrees, " << minutes << " minutes, " <<
                 seconds << " seconds = " << result << " degrees.\n";
    return 0;
}

//Displaying seconds in days, hours, minutes and seconds

int study3_4 ()
{
    long long iseconds;
    const int oneMin = 60; //seconds
    const int oneHours = 60; //minutes
    const int oneDays = 24; //Hours

    std::cout << "Enter the number of seconds: ";
    std::cin >> iseconds;
    std::cout << iseconds << " seconds = " << iseconds / (oneMin * oneHours * oneDays) <<
                 " days, " << (iseconds % (oneMin * oneHours * oneDays)) / (oneMin * oneHours ) <<
                 " hours, " << ((iseconds % (oneMin * oneHours * oneDays)) / (oneMin )) % ( oneHours ) <<
                 " minutes, " << (iseconds % (oneMin * oneHours * oneDays)) % (oneMin) <<
                 " seconds\n";
    return 0;
}

//The percentage of the US population

int study3_5 ()
{
    long long populW, populUS;
    long double res;
    std::cout << "Enter the world's population: ";
    std::cin >> populW;
    std::cout << "\nEnter the population of the US: ";
    std::cin >> populUS;
    res = (populUS * 100) / double (populW);
    std::cout << "\nThe population of the US is " << res << "% of the world population.\n";
    return 0;
}

//Consumption of liters of gasoline per 100 kilometers

int study3_6 ()
{
    long kilometre;
    long litrs;

    std::cout << "Enter the number of kilometres: ";
    std::cin >> kilometre;
    std::cout << "\nEnter the number of liters: ";
    std::cin >> litrs;
    std::cout << "Consumption " << (litrs / kilometre) * 100.0 << "litrs/100km\n";
    return 0;
}

//

int study3_7 ()
{
    const double hundredKm = 62.14; //miles
    const double oneGallone = 3.875; //liters
    double iliters; // in 100 km

    std::cout << "Enter the number of litres/100km: ";
    std::cin >> iliters;
    std::cout <<  (hundredKm) / (iliters / oneGallone) << " miles of gallone\n";
    return 0;
}

int study3 ()
{
    study3_1();
    study3_2();
    study3_3();
    study3_4();
    study3_5();
    study3_6();
    study3_7();
    return 0;
}


















