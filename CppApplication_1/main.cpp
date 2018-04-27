/* 
 * File:   main.cpp
 * Author: Simon
 * I am using this as OO practice 
 * Created on April 14, 2018, 10:17 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class Geeks
{
public:
  
    void printname()
    {
        newgeekname = changename(geekname,geeksurname);
        cout << "Geekname is: " << newgeekname;
    }
    
    void setname(string name)
    {
        this->geekname = name;
    }
    
    void setsurname(string name)
    {
        this->geeksurname = name;
    }
    
private:
    string geekname;
    string geeksurname;
    string newgeekname;

    string getname()
    {
        return geekname;
    }
   
    string changename(string geekname, string geeksurname)
    {
        newgeekname = geekname + " " + geeksurname;
        return newgeekname;
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    Geeks first;
    Geeks second;
    string name;
    string surname;
    
    
    cout << "Please enter a name: \n";
    cin >> name;
    cout << "Please enter a surname: \n";
    cin >> surname;
    first.setname(name);
    first.setsurname(surname);
    
    second = first; //set the 2 objects together
    second.printname();


    
    
    return 0;
}