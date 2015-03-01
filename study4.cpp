#include <array>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

/*
struct fish
{
    std::string type;
    int weight;
    double longs;
};

int question ()
{
    std::array <char, 30> actor;
    std::array <short, 100> betsie;
    std::array <float, 13> chuck;
    std::array <long double, 64> dipsea;

    //std::array <int, 5> arr = {1, 3, 5, 7, 9};

    int even = arr[0] + arr[4];
    std::array <float, 3> ideas = {1.0, 2.0, 4.1};

    std::cout << "ideas[1]: " << ideas[1] << std::endl;
   // char arr [] = "cheeseburger";
    std::string str = "Waldorf Salad";
    fish ryba = {"tina", 1000, 3.5};
    enum Response {No, Yes, Maybe};
    double ted = 2.3;
    double * pted = &ted;
    std::cout << "Pointer: " << (*pted) << std::endl;

    //question 12
    std::array <float, 10> treacle {1.1, 0, 0, 0, 0, 0, 0, 0, 0, 2.0};
    const float * ptre = &treacle[0];
    std::cout << "Treacle[0]: " << (*ptre) << " and [9]: " << (*(ptre+9)) << std::endl;

    // 13
    int n;
    std::cout << "Enter number int: ";
    std::cin >> n;
    //char * arr = new char[n];
    std::vector <char> mass(n);
    std::cout << (int *) "Home of the jolly bytes";
    fish * kind = new fish;
    kind->type = "Tina";
    kind->longs = 0.9;
    kind->weight = 10;
    const int N = 10;
    std::vector <std::string> v1(N);
    std::array <std::string, N> arr;
    return 0;
}

//стр.202

int study4_1 ()
{
    char first[15], last[15], deserve;
    int age;
    std::cout << "What is your first name? ";
    std::cin.get(first, 15).get();
    std::cout << "What is your last name? ";
    std::cin.get(last, 15).get();
    std::cout << "What letter grade do you deserve? ";
    std::cin >> deserve;
    deserve++;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << last << ", " << first << "\nGrade: " << deserve << "\nAge: " << age << std::endl;

    return 0;
}

int study4_2 ()
{
    std::string name, dessert;

    std::cout << "Enter your name:\n";
    getline (std::cin, name);
    std::cout << "Enter your favorite dessert:\n";
    getline (std::cin, dessert);
    std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}

int study4_3 ()
{
    char first_name [10], last_name [10], all_name[25], dop[] = ", ";

    std::cout << "Enter your first name: ";
    std::cin.get(first_name, 10).get();
    std::cout << "Enter your last name: ";
    std::cin.get(last_name, 10).get();
    strcpy(all_name, strcat(strcat(last_name, dop), first_name));
    std::cout << "Here's the information in a single string: " << all_name << std::endl;
    return 0;
}

int study4_4 ()
{
    std::string first_name, last_name, all_name, dop = ", ";

    std::cout << "Enter your first name: ";
    getline(std::cin, first_name);
    std::cout << "Enter your last name: ";
    getline(std::cin, last_name);
    all_name = last_name + dop + first_name;
    std::cout << "Here's the information in a single string: " << all_name << std::endl;
    return 0;
}
*/
struct CandyBar
{
    std::string name;
    double weight;
    int callory;
};
/*
int study4_5 ()
{
    CandyBar snack {"Mocha Munch", 2.3, 350};
    std::cout << "In Candy Bar: \n\"" << snack.name << "\" with weight " << snack.weight << " and " << snack.callory << " callory\n";
    return 0;
}

int study4_6 ()
{
    CandyBar assorty[3];
    assorty[0] = {"With nuts", 4.0, 500};
    assorty[1] = {"With cocolade", 3.5, 550};
    assorty[2] = {"Milk Cocolade", 2.5, 450};

    std::cout << "In Candy Bar: \n\"" <<
                 assorty[0].name << "\" with weight " << assorty[0].weight << " and " << assorty[0].callory << " callory\n" << "\"" <<
                 assorty[1].name << "\" with weight " << assorty[1].weight << " and " << assorty[1].callory << " callory\n" << "\"" <<
                 assorty[2].name << "\" with weight " << assorty[2].weight << " and " << assorty[2].callory << " callory\n";
    return 0;
}

struct Pizza
{
    std::string company;
    int diameter;
    double weight;
};

int study4_7()
{
    Pizza _Pizza;

    std::cout << "Enter company for new pizza:";
    getline(std::cin, _Pizza.company);
    std::cout << "Enter diameter of new pizza: ";
    std::cin >> _Pizza.diameter;
    std::cout << "Enter weight of new pizza: ";
    std::cin >> _Pizza.weight;
    std::cout << "Make new pizza of \nCompany name: " << _Pizza.company << "\nDiameter's: " << _Pizza.diameter <<
                 "\nWeight's: " << _Pizza.weight << std::endl;

    return 0;
}

int study4_8()
{
    Pizza * _Pizza = new Pizza;
    std::cout << "Enter diameter of new pizza: ";
    std::cin >> _Pizza->diameter;
    std::cin.get();
    std::cout << "Enter company for new pizza:";
    getline(std::cin, _Pizza->company);
    std::cout << "Enter weight of new pizza: ";
    std::cin >> _Pizza->weight;
    std::cout << "Make new pizza of \nCompany name: " << _Pizza->company << "\nDiameter's: " << _Pizza->diameter <<
                 "\nWeight's: " << _Pizza->weight << std::endl;

    return 0;
}
*/
int study4_9()
{
    CandyBar * assorty = new CandyBar [3];
    assorty[0] = {"With nuts", 4.0, 500};
    assorty[1] = {"With cocolade", 3.5, 550};
    assorty[2] = {"Milk Cocolade", 2.5, 450};

    std::cout << "In Candy Bar: \n\"" <<
                 assorty[0].name << "\" with weight " << assorty[0].weight << " and " << assorty[0].callory << " callory\n" << "\"" <<
                 assorty[1].name << "\" with weight " << assorty[1].weight << " and " << assorty[1].callory << " callory\n" << "\"" <<
                 assorty[2].name << "\" with weight " << assorty[2].weight << " and " << assorty[2].callory << " callory\n";

}
/*
int study4_10()
{
    std::array <int, 3> arr;
    std::cout << "Enter 1 result: ";
    std::cin >> arr[0];
    std::cout << "Enter 2 result: ";
    std::cin >> arr[1];
    std::cout << "Enter 3 result: ";
    std::cin >> arr[2];
    double srresult = (arr[0] + arr[1] + arr[2]) / 3.0;
    std::cout << "Sredn result: " << srresult << std::endl;
    return 0;
}
*/









