// 12F_elsocpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;


int main()
{
    //std::cout << "Hello World!\n";
    int a = 5;
    int b = 7;

    cout << "Hello World!\n" << "és még ezt is" << endl << "ez megint egy uj sor\n" << "5+7="<< a+b;

    cin >> a;

    cout << a;

    // változótípusok

    int c = 123;
    long int nagyszam = 14523624563456346346;
    long long int nagynagyszam = nagyszam * c;
    // ...
    unsigned long long int d = -7;

    cout << d;

    bool logikai = true;

    cout << (logikai && true) || false;


    if (!logikai)
    {
        cout << "a logikai változó értéke" << logikai;
    }

    if (!1) // ==0
    {
        cout << "je ez is mukodik";
    }

    if (true)
    {
        //...
    }
    else
    {
        //...
    }

    while (false)
    {

    }

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    string str = "asdfj";

    cout << str;

    int f = 5;

    switch (f)
    {
    case 5: 
        cout << "ez bizony ot";
        break;
    case 7:
        cout << "ez bizony 7";
        break;
    case 8:
        cout << "ez bizony 8";
        break;
    default:
        break;
    }

    f = 6;
    switch (f)
    {
    case 5:
        cout << "ez bizony ot";
        break;
    case 6:
    case 7:
        cout << "ez bizony 6 vagy 7";
        break;
    default:
        cout << "ez bizony nagyon sok";
    }


    // iteráció egy sokaság elemein keresztül
    /** /
    for (auto& i : v)
    {

    }
    /**/




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/**/

/** /
komment
/**/
