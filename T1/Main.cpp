#include <iostream>
#include <string>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "Functions.h"
#include "Accum.h"
using namespace std;


template <class T>  T& max (T& t1, T& t2)
{
    return t1 < t2 ? t2:t1;
}

int main()
{
    // std::cout<<"Type you name"<<std::endl;
    // std::string name;
    // std::cin>>name;
    // std::cout<<"Hello, "<<name<<std::endl;
    //Accum<person> Pepole(0);

    Person P1("behrooz", "ataei", 780076);
    Person P2("Behnam", "ataei", 780077);
    Accum<Person> pepole(0);
    pepole+=P1;
    pepole+=P2;
    cout<< pepole.GetTotal()<<endl;
    cout << "max of " << P1.GetName() << "  and  "<<P2.GetName()<<" is "<<max(P1,P2).GetName()<<endl;
    // cout<<"P1 is :";
    // if(!(P1<P2))
    //     cout <<" not ";
    // cout<< "less than p2"<<endl;
    
    // cout<<"P1 is :";
    // if(!(P1<300))
    //     cout <<" not ";
    // cout<< "less than 300"<<endl;
    
    // cout<<"300 is :"; 
    // if(!(300<P1))
    //     cout <<" not ";
    // cout<< "less than p1"<<endl;

    // cout<<"P1 is";
    // if(!(P1>>P2))
    //     cout <<" not ";
    // cout<< "greater than p2"<<endl;

    // cout<<"return BadFunction = "<<BadFunction()<<endl;

    Person Kate("Kate", "Gregory", 345);
    Kate.AddResource();
    Kate.AddResource();
    Person Kate2 = Kate;
    Kate = Kate2;
    string s1 = Kate.GetResourceName();
    cout<<s1<<endl;



    // Tweeter P2("Behnam", "Hamidi",  787000, "@shoever");
    // std::cout<< "after innermost block" <<std::endl;
    // cout<< "P1: "<<P1.GetName()<<" "<<P1.GetNumber() <<endl;

    // Status S = Pending;
    // S = Approved;
    // int x;
    // std::cout<<" Enter a number"<<std::endl;
    // std::cin>>x;
    // prime(x);   
    return 0;
}