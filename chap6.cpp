#include <iostream>
#include <fstream>
#include <cctype>
#include <climits>
#include <cstdlib>

//использование оператора if стр.258

int if_ ()
{
    char ch;
    int spaces = 0, total = 0;
    std::cin.get(ch); //Нет пришлашения для ввода
    while (ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        std::cin.get(ch);
    }
    std::cout << spaces << " spaces, " << total << " characters total in sentence\n";
    return 0;
}

//использование оператора if else стр.261

int ifelse ()
{
    char ch;
    std::cout << "Type, and shall repeat.\n";
    std::cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}

//использование оператора if else if else str.263

int if_else_if ()
{
    const int Fave = 27;
    int n;
    std::cout << "Enter a number in the range 1-100 fo find my favorite number: ";
    do
    {
        std::cin >> n;
        if (n < Fave)
            std::cout << "Too low -- guess again: ";
        else if (n > Fave)
            std::cout << "Too high -- guess again: ";
        else
            std::cout << Fave << " is right!\n";
    } while (n != Fave);
    return 0;
}

//использование логической операции OR str.265

int OR ()
{
    std::cout << "This program may reformat your hard disk\n and destroy all your data.\nDo you wish to continue? <y/n> ";
    char ch;
    std::cin >> ch;
    if ('y' == ch || 'Y' == ch)
        std::cout << "You were warned\a\a\n";
    else if ('n' == ch || 'N' == ch)
        std::cout << "A wise choice ...bye!\n";
    else
        std::cout << "That wasn't a y or n! Apparently you can't follow\ninstructions, so I'll trash your disk anyway.\a\n";
    return 0;
}

//Использование логической операции AND str.266

int AND ()
{
    const int ArSize = 6;
    float naaq[ArSize];
    int i = 0;
    float temp;
    std::cout << "Enter the NAAQs (New Age Awareness Quotients) of\nyour neighbors. Program terminates when you make\n" <<
                 ArSize << " entries or enter a negative value.\n";
    std::cout << "First value: ";
    std::cin >> temp;
    while (i < ArSize && temp >= 0) {
        naaq[i] = temp;
        i++;
        if (i < ArSize) {
            std::cout << "Next value: ";
            std::cin >> temp;
        }
    }
    if (i == 0)
        std::cout << "No data--bye!\n";
    else {
        std::cout << "Enter your NAAQ: ";
        float you;
        std::cin >> you;
        int count = 0;

        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;

        std::cout << count << " of yout neighbors have greater awareness of\n the New Age than you do.\n";
    }
    return 0;
}

//использование логической операции AND 2 str.268

int more_and ()
{
    const char * quality[4] =
    {
        "10,000-meter race.\n", //забег на 10000 метров
        "mug tug-of-war.\n",    //перетягивание каната в грязи
        "masters canoe jousting.\n", //состязание мастеров каноэ
        "pie-throwing festival.\n"   //фестиваль по бросанию пирожков
    };
    int age, idx;
    std::cout << "Enter your age in years: ";
    std::cin >> age;

    if (age > 17 && age < 35)
        idx = 0;
    else if (age >= 35 && age < 50)
        idx = 1;
    else if (age >= 50 && age < 65)
        idx = 2;
    else
        idx = 3;
    std::cout << "You quality for the " << quality[idx] << std::endl;
    return 0;
}

//использование логической операции NOT str.270

bool is_int (double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}

int not_ ()
{
    double num;
    std::cout << "Yo, dude! Enter an integer value: ";
    std::cin >> num;
    while (!is_int(num)) {
        std::cout << "Out of range -- please try again: ";
        std::cin >> num;
    }
    int val = int (num);
    std::cout << "You've enteres the integer " << val << "\nBye!\n";
    return 0;
}

//использование библиотеки ctype.h

int cctypes ()
{
    char ch;
    int whitespase = 0, digits = 0, chars = 0, punct = 0, others = 0;
    std::cout << "Enter text for analysis, and type @ to terminate input.\n";
    std::cin.get(ch);
    while ('@' != ch) {
        if (isalpha(ch)) //буква?
            chars++;
        else if (isspace(ch)) //пробел?
            whitespase++;
        else if (isdigit(ch)) //Цифра?
            digits++;
        else if (ispunct(ch)) //Символ?
            punct++;
        else
            others++;
        std::cin.get(ch);
    }
    std::cout << chars << " letters, " << whitespase << " whilespase, " << digits << " digits, " <<
                 punct << " punctuations, " << others << " others.\n";
    return 0;
}

//использование услвной операции стр. 275

int condit ()
{
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "The largers of " << a << " and " << b;
    int c = a > b ? a : b;
    std::cout << " is " << c << std::endl;
    return 0;
}

// использование оператора switch str.277

void showmenu()
{
    std::cout << "Please enter 1, 2, 3, 4, or 5:\n"
                 "1) Alarm           2) Report\n"
                 "3) Alibi           4) Comfort\n"
                 "5) Quit\n";
}

void report()
{
    std::cout << "It's been an excellent week for business.\nSales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    std::cout << "Your employees think you are the finest CEO\nin the industry. The board of directors think\n"
                 "you are the finest CEO in the industry.\n";
}

int switch_ ()
{
    showmenu();
    int choice;
    std::cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 : std::cout << "Alarm don't work!\n Dzin-Dzin-Dzin!\n Ahaha..\a\n";
                        break;
            case 2 : report();
                        break;
            case 3 : std::cout << "The boss was in all day.\n";
                        break;
            case 4 : comfort();
                        break;
            default : std::cout << "That's not a choice.\n";
        }
        showmenu();
        std::cin >> choice;
    }
    std::cout << "Bye!\n";
    return 0;
}

// использование enum str.280

enum {red, orange, yellow, green, blue, violet, indigo};

int enum_ ()
{
    int code;
    std::cout << "Enter color code (0-6): ";
    std::cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red     : std::cout << "Her lips were red.\n";
                           break;
            case orange  : std::cout << "Her hair was orange.\n";
                           break;
            case yellow  : std::cout << "Her shoes were yellow.\n";
                           break;
            case green   : std::cout << "Her nails were green.\n";
                           break;
            case blue    : std::cout << "Her sweatsuit was blue.\n";
                           break;
            case violet  : std::cout << "Her eyes were violet.\n";
                           break;
            case indigo  : std::cout << "Her mood was indigo.\n";
                           break;
        }
        std::cout << "Enter color code (0-6): ";
        std::cin >> code;
    }
    std::cout << "Bye!\n";
    return 0;
}

//ипользование continue and break str.282

const int ArSize = 80;
int jump ()
{
    char line[ArSize];
    int spaces = 0;

    std::cout << "Enter a line of text:\n";
    std::cin.get(line, ArSize);
    std::cout << "Complete line:\n" << line << std::endl;
    std::cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        std::cout << line[i];    // display character
        if (line[i] == '.') // quit if it's a period
            break;
        if (line[i] == ' ') // skip rest of loop
            spaces++;
    }
    std::cout << "\n" << spaces << " spaces\n";
    std::cout << "Done.\n";
    return 0;
}

// не числовой ввод прекращает выполнение цикла стр.284

const int Max = 5;
int cinfish ()
{
    int i = 0;
    double fish[Max], total = 0.0;
    std::cout << "Please enter the weights of your fish.\nYou may enter up to " << Max << " fish <q to terminate>.\n";
    std::cout << "fish #1: ";
    while (i < Max && std::cin >> fish[i]) {
        if (++i < Max)
            std::cout << "fish #" << i+1 << ": ";
    }
    for (int j = 0; j < i; j++)
        total += fish[j];
    if (i == 0)
        std::cout << "No fish\n";
    else
        std::cout << total / i << " = average weight of " << i << " fish\nDone!\n";
// code to keep VC execution window open if q is entered
//	if (!cin)  // input terminated by non-numeric response
//	{
//	    cin.clear();  // reset input
//	    cin.get();    // read q
//	}
    return 0;
}

// Нечисловой ввод пропускается стр.285

int cingolf ()
{
    const int Max = 5;
    int golf[Max], i;
    double total = 0.0;
    std::cout << "Please enter your golf scores.\nYou must enter " << Max << " rounds.\n";
    for (i = 0; i < Max; i++)
    {
        std::cout << "round #" << i+1 << ": ";
        while (!(std::cin >> golf[i])) {
            std::cin.clear();     // reset input
            while (std::cin.get() != '\n')
                continue;    // get rid of bad input
            std::cout << "Please enter a number: ";
        }
    }
    for (i = 0; i < Max; i++)
        total += golf[i];
    std::cout << total / Max << " = average score " << Max << " rounds\n";
    return 0;
}

// Запись в файл стр.290

int outfile ()
{
    char automobile[50];
    int year;
    double a_price, d_price;

    std::ofstream outFile;               // create object for output
    outFile.open("carinfo.txt");    // associate with a file

    std::cout << "Enter the make and model of automobile: ";
    std::cin.getline(automobile, 50);
    std::cout << "Enter the model year: ";
    std::cin >> year;
    std::cout << "Enter the original asking price: ";
    std::cin >> a_price;
    d_price = 0.913 * a_price;

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobile << "\nYear: " << year << std::endl;
    std::cout << "Was asking $" << a_price << "\nNow asking $" << d_price << std::endl;

    outFile << std::fixed;
    outFile.precision(2);
    outFile.setf(std::ios_base::showpoint);
    outFile << "Make and model: " << automobile << "\nYear: " << year << std::endl;
    outFile << "Was asking $" << a_price << "\nNow asking $" << d_price << std::endl;

    outFile.close();                // done with file
    return 0;
}

// чтение файла стр.294

int sumfile ()
{
    const int SIZE = 60;
    int count = 0;          // количество прочитанных аргументов
    double value;
    double sum = 0.0;
    char filename[SIZE];
    std::ifstream inFile;        // file input

    std::cout << "Enter name of data file: ";
    std::cin.getline(filename, SIZE);
    inFile.open(filename);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        std::cout << "Could not open the file " << filename << "\nProgram terminating.\n";
        exit(EXIT_FAILURE);
    }
    inFile >> value;        // ввод первого значения
    while (inFile >> value)   // пока ввод успешен и не достигнут конец файла
    {
        ++count;
        sum += value;       // сумма элементов
    }
    if (inFile.eof()) //Конец файла
        std::cout << "End of file reached.\n";
    else if (inFile.fail()) //несоответствие типов данных
        std::cout << "Input terminated by data mismatch.\n";
    else  //непонятная причина
        std::cout << "Input terminated for unknown reason.\n";
    if (count == 0) //нет данных
        std::cout << "No data processed.\n";
    else
    {
        std::cout << "Items read: " << count << "\nSum: " << sum << "\nAverage: " << sum / count << std::endl;
    }
    inFile.close();
    return 0;
}







































