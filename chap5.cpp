#include <iostream>
#include <string>
#include <cstring>
#include <ctime>

//представление цикла for стр.206

int forloop ()
{
    for (int i = 0; i < 5; i++)
        std::cout << "C++ knows loops.\n";
    std::cout << "C++ knows when to stop.\n";
    return 0;
}

//использование числовой поверки в цикле стр.208

int num_test ()
{
    std::cout << "Enter the starting countdown value: ";
    int limit, i;
    std::cin >> limit;
    for (i = limit; i; i--)
        std::cout << "i = " << i << std::endl;
    std::cout << "Done now that i = " << i << std::endl;
    return 0;
}

//значения выражений стр.210 03.02.15 02:44

int express ()
{
    int x;
    std::cout << "The expression x = 100 has the value " << (x = 100) << std::endl;
    std::cout << "Now x = " << x << std::endl;
    std::cout << "The expression x < 3 has the value " << (x < 3) << std::endl;
    std::cout << "The expression x > 3 has the value " << (x > 3) << std::endl;
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "The expression x < 3 has the value " << (x < 3) << std::endl;
    std::cout << "The expression x > 3 has the value " << (x > 3) << std::endl;


    return 0;
}

//дополнительные сведения о циклах for стр.213 03.02.15 02:58

int formore ()
{
    const int ArSize = 16;
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}

//цикл указанным пользователем шагом стр.215 03.02.15 03:13

int bigstep ()
{
    std::cout << "Enter an integer: ";
    int by;
    std::cin >> by;
    std::cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i+=by)
        std::cout << i << std::endl;
    return 0;
}

//ипользование цикла for для строки стр.216 030215 0320

int forstr1 ()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        std::cout << word[i];
    std::cout << "\nBye!\n";
    return 0;
}

//операция инкремента стр.216 030215 0326

int plus_one ()
{
    int b = 20, a = 20;
    std::cout << "a = "   << a <<   ":  b = "   << b << std::endl;
    std::cout << "a++ = " << a++ << ":  ++b = " << ++b << std::endl;
    std::cout << "a = "   << a <<   ":  b = "   << b << std::endl;
    return 0;
}

//ипользование блока стр.221 030215 1945

int block ()
{
    double number, sum = 0.0;
    std::cout << "The Amazing Accounto will sum and average five numbers for you.\n" <<
                 "Please enter five values:\n";
    for (int i = 1; i < 6; i++)
    {
        std::cout << "Value " << i << ": ";
        std::cin >> number;
        sum += number;
    }
    std::cout << "Five exquisite choices indeed! They sum to " << sum << std::endl <<
                 "And average to " << sum/5 << ".\n" << "The Amazing Accounto bids you adieu!\n";
    return 0;
}

//обращение порядка элементов массива стр.223 1958

int forstr2()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    //Физическая модификация объекта string
    char temp;
    for (int j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    std::cout << word << "\nDone!\n";
    return 0;
}

//равенство или присваивание стр.227 2029

int equal ()
{
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    std::cout << "Doing it right:\n"; //Правильно
    for (int i = 0; quizscores[i] == 20; i++)
        std::cout << "quiz " << i << " is a 20\n";
    std::cout << "Doing it dangerously wrong:\n"; //Неправильно
    for (int i = 0; quizscores[i] = 20; i++)
        std::cout << "quiz " << i << " is a 20\n";

    return 0;
}

//сравнение строк с использованием массивов стр.229 2057

int compstr1 ()
{
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        std::cout << word << std::endl;
        word[0] = ch;
    }
    std::cout << "After loop ends, word is " << word << std::endl;
    return 0;
}

//сравнение строк с использованием класса string стр.231 2109

int compstr2 ()
{
    std::string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        std::cout << word << std::endl;
        word[0] = ch;
    }
    std::cout << "After loop ends, word is " << word << std::endl;
    return 0;
}

//представление цикла while стр.232 2121

int while_ ()
{
    const int ArSize = 20;
    char name[ArSize];
    int i =0;

    std::cout << "Your first name, please: ";
    std::cin >> name;
    std::cout << "Here is ypur name, verticalized and ASCIIized:\n";
    while (name[i])
    {
        std::cout << name[i] << ": " << int(name[i]) << std::endl;
        i++;
    }
    return 0;
}

//использование clock() в цикле временной задержки стр.236 2155

int waiting ()
{
    float secs;
    std::cout << "Enter the delay time, in seconds: ";
    std::cin >> secs;
    std::clock_t delay = secs * CLOCKS_PER_SEC;
    std::cout << "starting\a\n";
    std::clock_t start = clock();
    while (clock() - start < delay);
    std::cout << "Done!\a\n";

    return 0;
}

//цикл с проверкой на выходе стр.283 030215 2319

int dowhile ()
{
    int n;
    std::cout << "Enter numbers in the range 1-10 to find my favorite number\n";
    do
        std::cin >> n;
    while (n != 7);
    std::cout << "Yes, 7 is my favorite!\n";
    return 0;
}

//чтение символов в цикле while стр.241 2333

int textn1 ()
{
    char ch;
    int count = 0;
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin >> ch;
    while (ch != '#')
    {
        std::cout << ch;
        ++count;
        std::cin >> ch;
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}

//использование cin.get(char) 2349

int textn2 ()
{
    char ch;
    int count = 0;
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin.get(ch);
    while (ch != '#')
    {
        std::cout << ch;
        ++count;
        std::cin.get(ch);
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}

//чтение символов до конца файла стр.245 030225 0017

int textn3 ()
{
    char ch;
    int count = 0;
    while (std::cin.get(ch))
    {
        std::cout << ch;
        ++count;
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}

//чтение символов с помощью cin.get() стр.248 0040

int textn4 ()
{
    int ch, count = 0;
    while ((ch = std::cin.get()) != EOF)
    {
        std::cout.put(char(ch));
        ++count;
    }
    std::cout << std::endl << count << " characters read\n";
    return 0;
}

//вложенные циклы и двумерный массив стр.252 0105

int nested ()
{
    const int Cities = 5, Years = 4;
    const char * cities[Cities] =
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Grible Vista"
    };
    int maxtemps[Years] [Cities] =
    {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };
    std::cout << "Maximum temperatures for 2008-2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        std::cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            std::cout << maxtemps[year] [city] << "\t";
        std::cout << std::endl;
    }
    return 0;
}

int chapter5 ()
{
    //forloop();
    //num_test();
    //express();
    //formore();
    //bigstep();
    //forstr1();
    //plus_one();
    //block();
    //forstr2();
    //equal();
    //compstr1();
    //compstr2();
    //while_();
    //waiting();
    //dowhile();
    //textn1();
    //textn2();
    //textn3();
    //textn4();
    //nested();
    return 0;
}





