#include<iostream>

using namespace std;

int main()
{
    //Назва телефону
    string compName = "Iphone XR";
    //Номер моделі
    unsigned int ModellD = 12345;
    //Сирійний код
    unsigned short int versionCode = 1234;
    //Вік телефона
    unsigned short int telphYears = 4;
    //Працює?
    bool working = true;
    //Процесор
    string  CPU = "A12 Bionic";
    //SDD
    string SDD = "128GB";
    //повна назва(засекречена Пентагоном)
    string CompFullName = "Apple Iphone XR";


    unsigned int totalMemoryInBytes =

        sizeof(CompFullName) +
        sizeof(compName) +
        sizeof(ModellD) +
        sizeof(versionCode) +
        sizeof(telphYears) +
        sizeof(working) +
        sizeof(CPU) +
        sizeof(SDD);


    cout << "Повна назва телефона:\t" << CompFullName << endl;
    cout << "Назва телефона:\t\t" << compName << endl;
    cout << "Вік телофона:\t\t\t" << telphYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working) ? "Так" : "Ні") << endl;
    cout << "Процесор:\t\t\t\t" << CPU << endl;
    cout << "SDD:\t\t\t\t\t" << SDD << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;

}






























































