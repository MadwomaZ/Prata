// Some limitations of integers str.90
#include <iostream>
#include <climits>
#define ZERO 0;
int limits ()
{
    std::cout << "int is " << sizeof(int) << " bytes.\n";
    std::cout << "short is " << sizeof SHRT_MAX << " bytes.\n";
    std::cout << "long is " << sizeof LONG_MAX << " bytes.\n";
    std::cout << "long long is " << sizeof  LLONG_MAX << " bytes.\n\n";
    std::cout << "Maximum values:\n";

    std::cout << "int: " << INT_MAX << "\n";
    std::cout << "short: " << SHRT_MAX << "\n";
    std::cout << "long: " << LONG_MAX << "\n";
    std::cout << "long long: " << LLONG_MAX << "\n\n";

    std::cout << "Minimum int value = " << INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;

    return 0;
}

//Going outside for some numeric types str.95

int exceed ()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    std::cout << "Sam has " << sam << " dollars and Sue has " <<
                 sue << " dollars deposited.\n" <<
                 "Add $1 to each account.\n";
    sam++;
    sue++;

    std::cout << "Now Sam has " << sam << " dollars and Sue has " <<
                 sue << " dollars deposited.\nPoor Sam!\n";
    sam = ZERO;
    sue = ZERO;

    std::cout << "Sam has " << sam << " dollars and Sue has " <<
                 sue << " dollars deposited.\n" <<
                 "Take $1 to each account.\n";
    sam--;
    sue--;

    std::cout << "Now Sam has " << sam << " dollars and Sue has " <<
                 sue << " dollars deposited.\nLucky Sue!\n";


    return ZERO;
}

//Displays hexadecimal literals and octal str.98

int hexoct ()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    std::cout << "Monsieur cuts a striking figure!\n" <<
                 "chest = " << chest << " (42 in decimal)\n" <<
                 "waist = " << waist << " (0x42 in hex)\n" <<
                 "inseam = " << inseam << " (042 in decimal)\n";
    return 0;
}

//Displays values in hexadecimal and octal str.98

int hexoct2 ()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    std::cout << "Monsieur cuts a striking figure!\n" <<
                 "chest = " << chest << " (decimal for 42)\n" <<
                 std::hex << "waist = " << waist << " (hexadecimal for 42)\n" <<
                 std::oct <<"inseam = " << inseam << " (octal for 42)\n";

    return 0;
}

//type char str.101

int chartype ()
{
    char ch;

    std::cout << "Enter a character: \n";
    std::cin >> ch;
    std::cout << "Hola! Thank you for the " << ch << " character.\n";
    return 0;
}

//Comparison of types of char and int str.101

int morechar ()
{
    char cch = 'M';
    int i = cch;

    std::cout << "The ASCII code for " << cch << " is " << i <<std::endl;
    std::cout << "Add one to the character code:\n";
    cch++;
    i = cch;
    std::cout << "The ASCII code for " << cch << " is " << i <<std::endl;

    std::cout << "Displaying char cch using cout.put(cch): ";
    std::cout.put(cch);
    std::cout.put('!');
    std::cout << "\nDone!\n";

    return 0;
}

//Use the escape sequences str.105

int bondini ()
{
    std::cout << "\aOperation \"HyperHype\" is now activated! \n" <<
                 "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    std::cin >> code;
    std::cout << "\aYou entered " << code << "...\n" << "\aCode verified! Proceed with Plan z3!\n";
    return 0;
}

//Floating-point types str.113

int floatnum ()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    std::cout << "tub = " << tub << ", a million tubs = " <<
                 million*tub << ", \nand ten millio tubs = " <<
                 million*tub*10 << "\nmint = " << mint <<
                 " and a million mints = " << million*mint << std::endl;
    return 0;
}

//Loss of accuracy in the work with float str.115

int fltadd ()
{
    float a = 2.34E+22f;
    float b = a + 1.0f; //Fuck it!

    std::cout << "a = " << a << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    return 0;
}

//Examples of some arithmetic operations in C ++ str.116

int arith ()
{
    float hats, heads;

    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "Enter a number: ";
    std::cin >> hats;
    std::cout << "Enter another number: ";
    std::cin >> heads;
    std::cout << "hats = " << hats << "; heads = " << heads << std::endl;
    std::cout << "hats + heads = " << hats + heads << std::endl;
    std::cout << "hats - heads = " << hats - heads << std::endl;
    std::cout << "hats * heads = " << hats * heads << std::endl;
    std::cout << "hats / heads = " << hats / heads << std::endl;
    return 0;
}

//Division of integers and floating point numbers str.118

int divide ()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "Integer division: 9/5 = " << 9 / 5 << std::endl;
    std::cout << "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 << std::endl;
    std::cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << std::endl;
    std::cout << "Double constants: 1e7/9.0 = " << 1.e7 / 9.0 << std::endl;
    std::cout << "Float constants: 1e7f/9.0f = " << 1.e7f / 9.0f << std::endl;
    return 0;
}

//Using Operations % to convert pounds in Stone str.120

int modulus ()
{
    const int lbs_per_stn = 14;
    int lbs;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> lbs;
    std::cout << lbs << " pounds are " << lbs / lbs_per_stn <<
                 " stone, " << lbs % lbs_per_stn << " pound(s).\n";
    return 0;
}

//Changing the type of initialization str.122

int assign ()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tree = 3;
    int guess = 3.9832;
    int debt = 7.2E12;

    std::cout << "tree = " << tree << std::endl;
    std::cout << "guess = " << guess << std::endl;
    std::cout << "debt = " << debt << std::endl;
    return 0;
}

//Forced change types str.125

int typecast ()
{
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    std::cout << "auks = " << auks << ", bats = " << bats <<
                 ", coots = " << coots << std::endl;
    char chr = 'Z';
    std::cout << "The code for " << chr << " is " << int (chr) << std::endl;
    std::cout << "Yes, the code is " << static_cast <int> (chr) << std::endl;
    return 0;
}

//show all

int chapter3 ()
{
    limits();
    exceed();
    hexoct();
    hexoct2();
    chartype();
    morechar();
    bondini();
    floatnum();
    fltadd();
    arith();
    divide();
    modulus();
    assign();
    typecast();

    return 0;
}










