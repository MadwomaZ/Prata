#include "iostream"
// output message str.50

int myfirst ()
{
    std::cout << "Come up and C++ me some time."<< std::endl;
    std::cout << "You won't regret it!"<< std::endl;
    return 0;
}

// use variable str.65

int carrots ()
{
    int carrots = 25;
    std::cout << "I have " << carrots << " carrots.\n";
    carrots--;
    std::cout << "Cruch, cruch. Now I have " << carrots << " carrots.\n";
    return 0;
}

//input and output str. 67

int getinfo()
{

        int carr;
        std::cout << "I have " << carr << " carrots.\n";
        std::cout << "How many carrots do you have?\n";
        std::cin >> carr;
        std::cout << "Here are two more. ";
        carr+=2;
        std::cout << "How you have " << carr << " carrots.\n";
        return 0;

}


//use function sqrt str. 73

#include "cmath"

int mysqrt ()
{
    double area;
    std::cout << "Enter the floor area, in square feet, of your home: ";
    std::cin >> area;
    double side = sqrt(area);
    std::cout << "That's the equivalent of a square " << side
                 << " feet to the side.\n" << "How fashinating!\n";
    return 0;
}

//Defining yout owm functions str.75

void simon(int); //prototype

int oufrunc ()
{
    simon(3);
    std::cout << "Pick an integer: ";
    int count;
    std::cin >> count;
    simon(count);
    std::cout << "Done!\n";
    return 0;
}

void simon (int n)
{
    std::cout << "Simon says touch your toes " << n << " times.\n";
}


//Stone converts into pounds str.78

int stonetolb (int sts)
{
    return 14*sts;
}

int convert ()
{
    int stone;
    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    int pounds = stonetolb(stone);
    std::cout << stone << " stone = " <<
                 pounds << " pounds.\n";
    return 0;
}


//All listing charter 2

void chapter2 ()
{
    myfirst();
    carrots();
    getinfo();
    mysqrt();
    oufrunc();
    convert();
}

