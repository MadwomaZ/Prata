#include <iostream>
#include <cstring>
#include <string>
#include <array>
//question 030215 0132 str.254


int question5 ()
{
    /*
    int j;
    for (j = 0; j < 11; j+=3)
        std::cout << j;
    std::cout << std::endl << j << std::endl;
    j =5;
    while (++j < 9)
        std::cout << j++ << std::endl;
    int k =8;
    do
        std::cout << "k = " << k << std::endl;
    while (k++ < 5);
    for (int i = 1; i < 65; i *= 2)
        std::cout << i << " ";
    int x = (1,024);
    std::cout << x << std::endl;
    int y;
    y = 1,024;
    std::cout << y << std::endl;
*/
    return 0;
}

//str. 255 0159
int study5_1 ()
{
    int max, min, sum = 0;
    std::cout << "Enter minimum integer of number: ";
    std::cin >> min;
    std::cout << "Enter maximum integer of number: ";
    std::cin >> max;
    for (min; min <= max; min++)
    {
        std::cout << min << std::endl;
        sum += min;
    }
    std::cout << "This number summe: " << sum << std::endl;
    return 0;
}

//0208
int study5_2 ()
{
    const int ArSize = 101;
    std::array <long double, ArSize> factorials;
    //long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;

}

//0213 profit: 1035

int study5_3 ()
{
    int input, result = 0;
    do  //FUCK!!!! 0224
    {
        std::cout << "Enter number: ";
        std::cin >> input;
        result += input;
    }
    while (input != 0);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

//1037

struct Investor
{
    int years;
    double procent;
    long double result;
};

//1127 profit!
int study5_4 ()
{
    Investor Dafna = {0, 0.1, 100.0};
    long double first_sum_Dafna = Dafna.result;
    Investor Cleo = {0, 0.05, 100.0};
    do
    {
        Dafna.years++, Cleo.years++;
        Dafna.result += (first_sum_Dafna * Dafna.procent);
        Cleo.result += (Cleo.result  * Cleo.procent);
        std::cout << "Dafna in " << Dafna.years << " years have $" << Dafna.result << std::endl;
        std::cout << "Cleo in "  << Cleo.years  << " years have $" << Cleo.result  << std::endl;
    } while (Cleo.result < Dafna.result);

    std::cout << "Cleo need " << Cleo.years << " for balance over Dafna: " << Cleo.result << std::endl;

    return 0;
}

//1135

std::array <std::string, 12> month =
{
    "Yanyar",
    "Febryar",
    "Marth",
    "April",
    "May",
    "Yune",
    "Yule",
    "August",
    "September",
    "October",
    "November",
    "Desember"
};

int study5_5 ()
{
    std::array <int, 12> bay_book;
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        std::cout << "Enter bays book for " << month[i] << ": ";
        std::cin >> bay_book[i];
        sum += bay_book[i];
    }
    std::cout << "\nAll book sales: " << sum << std::endl;
    return 0;
} //profit 1232

//1234

int study5_6()
{
    const int years = 3;
    const int month_num = 12;
    int bays_book_in_3_years [years] [month_num];
    int sum [3] = {}, all_sum = 0;
    for (int y = 0; y < years; y++)
    {
        std::cout << "Years " << y + 1 << ":\n";
        for (int m = 0; m < month_num; m++)
        {
            std::cout << "Enter bays book for " << month[m] << ": ";
            std::cin >> bays_book_in_3_years[y][m];
            sum[y] += bays_book_in_3_years[y][m];
        }
        std::cout << "\nAll book sales in " << y + 1 << " years: " << sum[y] << std::endl;
        all_sum += sum[y];
    }
    std::cout << "\nAll book sales: " << all_sum << std::endl;
    return 0;
} //prodfit 1458

//1527

struct car
{
    std::string company_name;
    int year;
};

int study5_7()
{
    int num;
    std::cout << "Сколько автомобилей поместить в каталог? ";
    std::cin >> num;
    car * autos = new car [num];
    for (int i = 0; i < num; i++)
    {
        std::cout << "Автомобиль #" << i + 1 << ":\nВведите производителя: ";
        std::cin >> autos[i].company_name;
        std::cout << "Укажите год выпуска: ";
        std::cin >> autos[i].year;
    }
    std::cout << "Вот ваша коллекция:\n";
    for (int i = 0; i < num; i++)
    {
        std::cout << autos[i].year << " " << autos[i].company_name << std::endl;
    }
    return 0;
} //profit 1540

//1556

int study5_8()
{
    const int N = 50;
    int count = -1;
    char word[N] = {};
    std::cout << "Вводите слова (для завершения введите слово done):\n";
    while (strcmp(word, "done"))
    {
        std::cin >> word;
        count++;
    }
    std::cout << "Вы ввели " << count << " слов.\n";
    return 0;
} //profit 1809

//1811

int study5_9()
{
    //const int N = 50;
    int count = -1;
    std::string word;
    std::cout << "Вводите слова (для завершения введите слово done):\n";
    while (word != "done")
    {
        std::cin >> word;
        count++;
    }
    std::cout << "Вы ввели " << count << " слов.\n";
    return 0;
} //1815


int study5_10() //050215 0309 FUCK!
{
    int i = 0, j = 0, strok = 0;
    char * arr [strok][strok];
    std::cout << "Введите количество строк: ";
    std::cin >> strok;
    for (i = strok - 1; i != 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            *arr[i][j] = '*';
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (i = 0; i < strok; i++)
    {
        for (j = strok - 1; i != j; j--)
        {
            *arr[i][j] = '.';
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}













