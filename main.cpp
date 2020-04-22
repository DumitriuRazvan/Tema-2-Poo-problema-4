#include <iostream>
#include <cstring>
#include "Nod.h"
#include "Nod_dublu.h"
#include "Nod_prioritate.h"
#include "Coada_prioritate.h"

using namespace std;

int main()
{
//    Nod exemplu;
//    cout << exemplu;
//   cin >> exemplu;
//    cout << exemplu;

//
//    Nod_dublu exemplu2("Razvan");
//    Nod_dublu exemplu_meu(exemplu2);
//    cout << exemplu_meu;
//    cin >> exemplu2;
//    cout << exemplu2;
//        Nod_prioritate exemplu_nou("Marius", nullptr, nullptr, 3);
//        cout << exemplu_nou;
//        cin >> exemplu_nou;
//        cout << exemplu_nou;
//
    int n;
        Coada_prioritate cozi[100];
        cout << "n= "; cin >> n;
        for(int i=1;i<=n;i++)
            cin>>cozi[i];
        for(int i=1;i<=n;i++)
            cout << cozi[i];
        cout<<cozi[1].top()<<endl;
        cout<<endl;
        cozi[1].pop();
        cout<<cozi[1]<<endl;
        cozi[1].empty();
        cout<<cozi[1];

//        Coada_prioritate test;
//        test.insert( (char*)"aleluia",666);
//        test.insert( (char*)"am reusit", 420);
//        cout<<test.top()<<endl;
//        cout << test<<endl;;
//        test.pop();
//        cout<< test<<endl;
//        test.empty();
//        cout << test<<endl;
}
