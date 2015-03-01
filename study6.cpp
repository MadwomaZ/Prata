#include <iostream>
#include <memory>
#include <array>
#include <cctype>
#include <string>
#include <cstring>

//question

int question6 ()
{
    /*
    int ct1 = 0, ct2 = 0;
    char ch;
    std::cout << "Enter char string: \n";
    while((ch = std::cin.get()) != '$')
    {
        std::cout << ch;
        ct1++;
        if ('$' == ch)
            ct2++;
        std::cout << ch;
    }
    std::cout << "\nct1 = " << ct1 << ", ct2 = " << ct2 << ",\nDone!\n";
    */
    /*
    if (!!(ct1 == 0))
        std::cout << "LOL\n";

    int res, x;
    std::cin >> x;
    res = x > 0 ? x : -x;
    std::cout << res <<std::endl;
    */
    /*
    char ch1;
    int a_grade, b_grade, c_grade, d_grade, f_grade;
    switch (ch1) {
    case 'A':
        a_grade++;
        break;
    case 'B':
        b_grade++;
        break;
    case 'C':
        c_grade++;
        break;
    case 'D':
        d_grade++;
        break;
    default:
        f_grade++;
        break;
    }
    */
    int line = 0;
    char ch;
    /*
    while (ch = (std::cin.get()) != 'Q') {
        if (ch == '\n')
        {
            line++;
            ch = std::cin.get();
        }
    }
    std::cout << "\nLine = " << line << std::endl;
    */
    //std::cin.get(ch) != 'Q' ? std::cin.get(ch) //not good 070215 1739
    /*
    while (std::cin.get(ch)) {
        if ('Q' == ch)
            break;
        if ('\n' != ch)
            continue;
        line++;
    }
    */
    return 0;
}

//стр. 300 070215 2214

int study6_1 ()
{
    char ch, ch_new;
    std::cout << "Enter your text: \n";
    while ((ch = std::cin.get()) != '@') {
            //cctype sm str.274
            if (tolower(ch)) //возвращает в верхнем регистре для нижнего регистра
                ch_new = (toupper(ch));
            if (toupper(ch)) //возвращает в нижнем регистре для верхнего регистра
                ch_new = tolower(ch);
            continue;
            std::cin.get(ch);
    }

    std::cout << "Your new text: " << ch_new << std::endl;
    return 0;
} //2301 неправильно работает     not 2305     ok for chap 2307

//2317

int study6_2 ()
{
    const int N = 10;
    int i = 0;
    std::array <double, N> mass;
    std::cout << "Enter your money: ";
    for (i = 0; i < N; i++) {
        std::cin >> mass[i];
        double tmp = static_cast <double> (mass[i]);
        if (!(isdigit(tmp))) {
            std::cout << "Oh, God! This is not number!" << mass[i] << " " << (char)mass[i] << std::endl;
            break;
        }

    }
    return 0;
} //2352 не доработана до делать

int study6_2_ ()
{
    const size_t N = 10;
    size_t i = 0;
    std::array <double, N> mass;
    std::cout << "Enter your money: ";
    for (; i < N; i++) {
        std::string tmp;
        std::getline(std::cin, tmp);
        bool fail = false;
        for (size_t j = 0; j < tmp.length(); ++j)
        {
            if (!isdigit(tmp[j]) && tmp[j] != '.')
            {
                std::cout << "Oh, God! This is not number!" << tmp << " ---> " << tmp[j] << std::endl;
                fail = true;
                break;
            }
        }
        if (fail)
            break;
        mass[i] = atof(tmp.c_str());
        std::cout << "Extracted " << mass[i] << std::endl;
    }

    return 0;
} //2352 не доработана до делать

//100215 0034

void show_menu()
{
    std::cout << "Please enter one of the following choices:\n"
                 "h)Hello, Word!       m) Menu\n"
                 "u)Username           q) Quit\n";
}

void username()
{
    std::string user;
    std::cout << "Please, enter your name: ";
    std::cin >> user;
    std::cout << "Hello, " << user << "! Your Beautiful!"<< std::endl;
}

int study6_3 ()
{
    show_menu();
    char choice;
    std::cin.get(choice);
    while (isalpha(choice))
    {
        switch(choice)
        {
            case 'h' :
            case 'H' : std::cout << "Hello, Word!\n";
                       break;
            case 'm' :
            case 'M' : show_menu();
                       break;
            case 'u' :
            case 'U' : username();
                       break;
            case 'q' :
            case 'Q' : std::cout << "You exit. Bye!\n";
                       break;
            default  : std::cout << "That's not a choice! Please, enter h, m, u or q:\n";
        }
        if ('q' == choice || 'Q' == choice)
            break;
        std::cin >> choice;
    }
    return 0;
} //0110 profit!

//130215 0352

struct bop
{
    std::string fullname;  //Реальное имя
    std::string title;     //Должность
    std::string bopname;   //Секретное имя
    int preference;          //0 - полное имя, 1 - титул, 2 - секретное имя
};

int preference_bop(bop commands[4])
{

    return 0;
}

void show_menu_bop ()
{
    std::cout << "Benevolent Order of Programmers Report:\n"
                 "a.Display by name       b.Display by title\n"
                 "c.Display by bopname    d.Display by preference\n"
                 "q.quit\nEnter your choice: ";
}


int study6_4()
{
    bop * commands = new bop[4];

    commands[0] = {"Vano Ivan Ivanych", "SysAdmin", "Pony_Val", 2};
    commands[1] = {"Dimka Rhevish", "GenDirector", "OLOLOsh", 1};
    commands[2] = {"Serega Pysh-Pyshkovish", "Proger", "Skymin", 0};
    commands[3] = {"Vasil'evna Olga Petrovna", "Yborchica", "Charicha!", 2};

    show_menu_bop();
    char choice;
    std::cin.get(choice);
    while (isalpha(choice))
    {
        switch(choice)
        {
            case 'a' :
            case 'A' : std::cout << commands[0].fullname << std::endl << commands[1].fullname << std::endl <<
                                    commands[2].fullname << std::endl << commands[3].fullname << std::endl;
                       break;
            case 'b' :
            case 'B' : std::cout << commands[0].title << std::endl << commands[1].title << std::endl <<
                                    commands[2].title << std::endl << commands[3].title << std::endl;
                       break;
            case 'c' :
            case 'C' : std::cout << commands[0].bopname << std::endl << commands[1].bopname << std::endl <<
                                    commands[2].bopname << std::endl << commands[3].bopname << std::endl;
                       break;
            case 'd' :
            case 'D' : std::cout << "T\n";//preference_bop(commands); //dont work 150215 0436
                       break;
            case 'q' :
            case 'Q' : std::cout << "You exit. Bye!\n";
                       break;
            default  : std::cout << "That's not a choice! Please, enter a, b, c, d or q:\n";
        }
        if ('q' == choice || 'Q' == choice)
            break;
        std::cin >> choice;
    }
    return 0;
}












