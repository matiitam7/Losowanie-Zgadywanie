
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    int zakres;
    int wylosowana; // wylosowana liczba
    int zgadywana;
    
    cout << "Zakres:";
    cin >> zakres;
    cout << "Wylosowana liczba to ta:\n";
    
    time_t t;
    srand((unsigned) time(&t));
    wylosowana=(rand()%zakres);
    
    cout << wylosowana << "\n";                                       //Ta linijka jest do testów - SKOMENTUJ
    cout << "Wylosowalem pewna liczbe, zgadnij ja \n";
    
    /*
    
    cin >> zgadywana;                                       //1.proba losowania
    
    if (zgadywana == wylosowana)
        {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
    
        if (zgadywana == wylosowana)
        {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    
    cin >> zgadywana;                                       //2.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    cin >> zgadywana;                                       //3.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    cin >> zgadywana;                                       //4.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba" << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    cin >> zgadywana;                                       //5.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    cin >> zgadywana;                                       //6.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    cin >> zgadywana;                                       //7.proba losowania
    
    if (zgadywana == wylosowana)
    {
        cout << "Brawo! To ta liczba: " << zgadywana << endl;
    }
    
    
    else if (zgadywana != wylosowana)
    {
        if (zgadywana < wylosowana)
        {
            cout << "Ta liczba jest za mala - probuj dalej\n";
        }
        else if (zgadywana > wylosowana)
        {
            cout << "Ta liczba jest za duza - proboj dalej\n";
        }
        
        if (zgadywana == wylosowana)
        {
            cout << "Brawo! To ta liczba: " << zgadywana << endl;
        }
    }
    */

    // ---------------------------------------------------------- W PETLI WHILE
    
    while (zgadywana != wylosowana)
    {
     
     cin >> zgadywana;
     
     if (zgadywana == wylosowana)
     {
     cout << "Brawo! To ta liczba: " << zgadywana << endl;
     }
     
     
     else if (zgadywana != wylosowana)
     {
     if (zgadywana < wylosowana)
     {
     cout << "Ta liczba jest za mala - probuj dalej\n";
     }
     else if (zgadywana > wylosowana)
     {
     cout << "Ta liczba jest za duza - proboj dalej\n";
     }
     
     if (zgadywana == wylosowana)
     {
              cout << "Brawo! To ta liczba: \n" << zgadywana << endl;
     }
     }

     
    }
    
    
    
    


    
    return 0;
}
