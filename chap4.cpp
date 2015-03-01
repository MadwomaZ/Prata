#include <iostream>
#include <cstring>
#include <string.h>
#include <vector>
#include <array>

//небольшие массивы целых чисел стр.134
int arrayone ()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts [3] = {20, 30, 5};

    std::cout << "Total yams: " << yams[0] + yams[1] + yams[2] << std::endl;
    std::cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total += yams[2] * yamcosts[2];

    std::cout << "The total yam expense is " << total << " cents.\n";
    std::cout << "\nSize of yams array = " << sizeof total << " bytes.\n";
    std::cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";

    return 0;
}

//сохранение строк в массиве стр.139

int strings ()
{
    const int Size = 15;
    char username[Size];
    char name2[Size] = "C++owboy";

    std::cout << "Howdy! I'm " << name2 << "! Whats your name?\n";
    std::cin >> username;
    std::cout << "Well, " << username << ", your name has " << strlen(username) << "letters and is stored\n";
    std::cout << "in an array of " << sizeof (username) << " bytes.\n";
    std::cout << "Your initial is " << username[0] << ".\n";

    name2[3] = '\0';

    std::cout << "Here are the first 3 charters of my name: " << name2 <<  std::endl;
    return 0;
}

//чтение более одной строки стр.140

int inst1 ()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n";
    std::cin >> name;
    std::cout << "Enter your favorite dessert:\n";
    std::cin >> dessert;
    std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}

// чтение более одного слова с помощию getline стр.142

int inst2 ()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n";
    std::cin.getline (name, ArSize);
    std::cout << "Enter your favorite dessert:\n";
    std::cin.getline (dessert, ArSize);
    std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}
//Чтение более одного слова с помощью get().get() стр.144

int inst3 ()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n";
    std::cin.get(name, ArSize).get();
    std::cout << "Enter your favorite dessert:\n";
    std::cin.get(dessert, ArSize).get();
    std::cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}


//смешивание строкового и числового ввода стр.145
int numstr ()
{
    std::cout << "What year was your house built?\n";
    int year;
    std::cin >> year;
    std::cin.get();
    std::cout << "What is its street address?\n";
    char address[80];
    //std::cin.getline(address, 80);
    std::cin >> address;
    std::cout << "Year built: " << year << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Done!\n";
    return 0;
}

//Использование класса С++ string стр.146

int strtype1 ()
{
    char charr1 [20];
    char charr2 [20] = "jaguar";
    std::string str1;
    std::string str2 = "panther";

    std::cout << "Enter a kind of feline: "; //введите животное из семейства кошачьих
    std::cin >> charr1;
    std::cout << "Enter another kind of feline: "; //введите другое животное из семейства кошачьих
    std::cin >> str1;
    std::cout << "Here are some felines:\n" << charr1 << " " << charr2 <<
                 std::endl << str1 << " " << str2 << std::endl;
    std::cout << "The third letter in " << charr2 << " is " << charr2[2] << std::endl;
    std::cout << "The third letter in " << str2 << " is " << str2[2] << std::endl;
    return 0;

}

//Присваивание, сложение, добавление строк стр.148

int strtype2 ()
{
    std::string s1 = "penguinus";
    std::string s2, s3;

    //Присваивание одного объекта string другому
    std::cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;

    //Присваивание строки в стиле С объекту string
    std::cout << "You can assign a C-style string to a string object.\n" <<
                 "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    std::cout << "s2: " << s2 << std::endl;

    //Конкатенация строк
    std::cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    std::cout << "s3: " << s3 << std::endl;

    //Добавление строки
    std::cout << "You can append strings.\n";
    s1 += s2;
    std::cout << "s1 += s2 yields s1 = " << s1 << std::endl;
    s2 += " for a day";
    std::cout << "s2 += \" for a day\" yields s2 = " << s2 << std::endl;
    return 0;
}

//Дополнительные свойства класса string

int strtype3()
{
    char charr1 [20];
    char charr2 [20] = "jaguar";
    std::string str1;
    std::string str2 = "panther";

    //Присваивание объектов string и символьных массивов
    str1 = str2; //копирование в str1
    strcpy(charr1, charr2); //копирование в charr1

    //Добавление объектов  string и символьных массивов
    str1 += " paste"; // Добавление в конец str1
    strcat(charr1, " juice"); //добавление в конец charr1

    //Определение длины объекта string  и строки в стиле С
    int len1 = str1.size(); //Получение длины str1
    int len2 = strlen(charr1); //Получение длины charr1
    std::cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    std::cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

    return 0;
}

//Ввод строки с пробелами стр.151

int strtype4()
{
    char charr[20];
    std::string str;

    //Длина строки в charr перед вводом
    std::cout << "Length of string in charr before input: " << strlen(charr) << std::endl;

    //Длина строки в str перед вводом
    std::cout << "Length of string in str before input: " << str.size() << std::endl;
    std::cout << "Enter a line of text:\n"; //Запрос ввода
    std::cin.getline (charr, 20); //указание максимальной длины
    std::cout << "Your entered: " << charr << std::endl;

    std::cout << "Enter another line of text:\n"; //Запрос ввода другой строки
    getline (std::cin, str); //cin- аргумент, спецификатора длины нет
    std::cout << "Your entered: " << str << std::endl;
    //Длина строки в charr после ввода
    std::cout << "Length of string in charr after input: " << strlen(charr) << std::endl;

    //Длина строки в str после ввода
    std::cout << "Length of string in str after input: " << str.size() << std::endl;

    return 0;
}

int s ()
{
    char charr[20];
    std::string str;
    std::cout << "Enter str to mass: \n";
    std::cin.getline(charr, 20);
    std::cout << R"+*(Enter "(str)": )+*" << '\n';
    getline(std::cin, str);
    std::cout << "Print str: " << str << std::endl;
    std::cout << "Print mass: " << charr[19] << std::endl;
    //getline(str, )
}

//простая структура стр.156

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int structur ()
{
    inflatable guest
    {
        "Glorious Gloria",
        1.88,
        29.99
    };

    inflatable pal
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    std::cout << "Expand your guest list with " << guest.name <<
                 " and " << pal.name << "!\n";
    std::cout << "You can have both for $" << guest.price +pal.price << "!\n";
    return 0;
}


//присваивание структур стр158

int assign_st ()
{
    inflatable bouquet
    {
        "sunflowers",
        0.2,
        12.49
    };

    inflatable choice;

    std::cout << "bouquet: " << bouquet.name << " for $" <<
                 bouquet.price << std::endl;
    choice = bouquet;
    std::cout << "choice: " << choice.name << " for $" << choice.price << std::endl;
    return 0;
}

//массив структур стр.161

int arrstruct ()
{
    inflatable guests[2] =
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    std::cout << "The guests " << guests[0].name << " and " << guests[1].name <<
                 "\nhave a combined volume of " << guests[0].volume + guests[1].volume <<
                 " cubic feet.\n";
    return 0;
}

//использование операции & для нахождения адреса

int address ()
{
    int donuts = 6;
    double cups = 4.5;

    std::cout << "donuts value = " << donuts << " and donuts address = " <<
                 &donuts << std::endl;
    std::cout << "cups value = " << cups << " and cups address = " << &cups << std::endl;
    return 0;
}


//Наша первая переменная-указатель стр.168

int pointer ()
{
    int updates = 6;
    int * p_updates = &updates;

    std::cout << "Values: updates = " << updates << ", *P_updates = " << *p_updates << std::endl;
    std::cout << "Addresses: &updates = " << &updates << ", p_updates = " << p_updates <<std::endl;
    *p_updates++;
    std::cout << "Now updates = " << updates << std::endl;
    return 0;
}

//инициализация указателя стр.171

int init_ptr ()
{
    int higgens = 5;
    int * pt = &higgens;

    std::cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << std::endl;
    std::cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << std::endl;
    return 0;
}

//использование операции new стр.173

int use_new ()
{
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;

    std::cout << "nights value = " << nights << "; location " << &nights << std::endl;
    std::cout << "int value = " << *pt << ": location = " << pt << std::endl;
    double *pd = new double;
    *pd = 10000001.0;
    std::cout << "double value = " << *pd << ": location = " << pd << std::endl;
    std::cout << "location of pointer pd: " << &pd << std::endl;
    std::cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << std::endl;
    std::cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << std::endl;
    return 0;
}

//использование операции new длямассивов стр.178

int arraynew ()
{
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    std::cout << "p3[1] is " << p3[1]  << ".\n";
    p3++;
    std::cout << "Now p3[0] is " << p3[0] << " and p3[1] is " << p3[1] << ".\n";
    p3--;
    delete [] p3;
    return 0;
}

//сложение указателей стр.179

int addpntrs ()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    //Получаем адреса массивов
    double * pw = wages;  //имя массива = адресу
    short * ps = &stacks[0]; //операция взятия адресса с элементом массива

    std::cout << "pw = " << pw << ", *pw = " << *pw << std::endl;
    pw++;
    std::cout << "add 1 to pointer:\npw = " << pw << ", *pw = " << *pw << std::endl << std::endl;
    std::cout << "ps = " << ps << ", *ps = " << *ps << std::endl;
    ps++;
    std::cout << "add 1 to pointer:\nps = " << ps << ", *ps = " << *ps << std::endl << std::endl;

    //Доступ к элементам с помощью нотаци массивов
    std::cout << "access two elements with array notation\nstacks[0] = " << stacks[0] <<
                 ", stacks[1] = " << stacks[1] << std::endl;

    //Доступ к элементам с помощью нотации указателей
    std::cout << "access two elements with pointer notation\n*stacks = " << *stacks <<
                 ", *(stacks + 1) = " << *stacks+1 << std::endl;
    std::cout << sizeof(wages) << " = size of wages array\n";
    std::cout << sizeof(pw) << " = size of pw pointer\n";
    return 0;
}

//использование указателей на строки стр.185

int ptrstr ()
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char *ps;
    std::cout << animal << " and " << bird << std::endl;
    std::cout << "Enter a kind of animal: ";
    std::cin >> animal;
    ps = animal;
    std::cout << ps << "!\n";
    std::cout << "Before using strcpy():\n" << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    std::cout << "After using strcpy():\n" << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;
    delete [] ps;
    return 0;
}

//использование new со структурой стр.190

int newstrct ()
{
    inflatable * ps = new inflatable;
    std::cout << "Enter name of inflatable item: ";
    std::cin.get(ps->name, 20);
    std::cout << "Enter volume in cubic feet: ";
    std::cin >> (*ps).volume;
    std::cout << "Enter price: $";
    std::cin >> ps->price;
    std::cout << "Name: " << (*ps).name << std::endl << "Volume: " << ps->volume <<
                 " cubic feet\n" << "Price: $" << ps->price << std::endl;
    delete ps;
    return 0;
}

//использование операции delete

char * getname ()
{
    char temp[80];
    std::cout << "Enter last name: ";
    std::cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}

int delete_ ()
{
    char * name = getname();
    std::cout << name << " at " << (int *) name << std::endl;
    delete [] name;
    name = getname();
    std::cout << name << " at " << (int *) name << std::endl;
    delete [] name;
    return 0;
}

//некоторые комбинации типов стр.196

struct antarctica_years_end
{
    int year;
    //anothers data
};

int mixtypes ()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3]; //массив из трех структур
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp; // or const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;
    return 0;
}

//вариации массивов стр.198


int choices ()
{
    double a1[4] = {1.2, 2.4, 3.6, 4.8}; //old style

    std::vector <double> a2 (4);

    for (int i = 0; i < 4; i++)
    {
        double n = 3.0;
        a2[i] = 1.0/n;
        n += 2.0;
    }

    std::array <double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    std::array <double, 4> a4;
    a4 = a3; //Допускается при одинаковых размерах массивов

    std::cout << "a1[2]: " << a1[2] << " at " << &a1[2] << std::endl;
    std::cout << "a2[2]: " << a2[2] << " at " << &a2[2] << std::endl;
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << std::endl;
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << std::endl;

    a3.at(-2) = 20.2; // Преднамеренная ошибка

    std::cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << std::endl;
    std::cout << "a3[2]: "  << a3[2]  << " at " << &a3[2]  << std::endl;
    std::cout << "a4[2]: "  << a4[2]  << " at " << &a4[2]  << std::endl;
    return 0;
}

int chapter4 ()
{
    arrayone();
    strings();
    inst3();
    numstr();
    strtype4();
    s();
    structur();
    assign_st();
    arrstruct();
    address();
    pointer();
    init_ptr();
    use_new();
    arraynew();
    addpntrs();
    ptrstr();
    newstrct();
    delete_();
    mixtypes();
    choices();
    return 0;
}



















