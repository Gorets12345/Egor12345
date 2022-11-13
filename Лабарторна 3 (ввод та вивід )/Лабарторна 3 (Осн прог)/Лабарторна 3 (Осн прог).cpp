#include<iostream>
#include<string>
using namespace std;

extern void menu();
extern void show_menu();
extern wstring** enter_login();
extern char** enter_password();

int startupAuthoriz(int argsC,
    char* argsV[])

{
    int passwordLength = 0;
    for (int argumentIndex = 1;
        argumentIndex < argsC;
        argumentIndex++)
    {
        const char* argK = argsV[argumentIndex];
        const char* argV = argsV[argumentIndex + 1];
        if (strcmp(argK, "-login") == 0)
        {
            std::cout << "Ви авторизувались як\t" << argV << endl;
        }
        else
        {
            if (strcmp(argK, "-password") == 0)
            {
                passwordLength = strlen(argV);
                break;
            }
        }
    }



    return passwordLength;
}
int main(int argsC,
    char* argsV[],
    char* environmentParameters[]
)
{

    setlocale(LC_ALL, "");

    if (argsC > 1)
    {
        return startupAuthoriz(argsC, argsV);
    }
    else
    {
        menu();
    }

    cin.get();
    return 0;
}

#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{

    wcout << L"Оберiть пункт меню:" << endl;
    wcout << L"1.) Ввести iм'я користувача" << endl;
    wcout << L"2.) Ввести пароль" << endl;
    wcout << L"3.) Завершити роботу" << endl;
}
wstring** enter_login()
{
    wstring* login = new wstring();
    wcout << L"Введiть iм'я користувача (login):" << endl;
    wcin.ignore();
    getline(wcin, *login);

    return &login;
}
char** enter_password()
{
    const short int MAX_PASSWORD_LENGTH = 16;
    char* password = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Введiть пароль:" << endl;
    cin >> password;
    return &password;
}
void menu()
{
    short int selectedMenuItem = 1;
    wstring login = L"";
    char* password = nullptr;
    show_menu();
    cin >> selectedMenuItem;
    switch (selectedMenuItem)
    {
    case 1:
        login = **enter_login();
        break;
    case 2:
        password = *enter_password();
        break;
    case 3:
    default:

        exit(0);
    }

    if (!login.empty())
    {
        wcout << L"Ваш логiн:\t" << login << endl;
    }
    else
    {
        if (password != nullptr)
        {


            wcout << L"Пароль успiшно змiнено на:\t"
                << endl << password;
            delete[] password;
        }
    }
}
#endif