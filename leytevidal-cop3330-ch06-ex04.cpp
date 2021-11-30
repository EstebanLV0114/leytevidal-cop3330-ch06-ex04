#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Name_value 
{ 
    public:
        string name; 
        int value; 
};

int main() 
{
    Name_value namePlusValue; 
    vector<Name_value> nameValueVector; 
    int base = 0; 

    cout << "Please input a name followed by a numerical value. ";

    cin >> namePlusValue.name;
    cin >> namePlusValue.value;

    nameValueVector.resize(base + 1);
    nameValueVector[base] = namePlusValue;
    base++;

    while(!((namePlusValue.name == "NoName") && (namePlusValue.value == 0))) 
    {
        cout << "\nPlease input another name followed by a numerical value. If you are finished, type \"NoName 0\".\n";
        cin >> namePlusValue.name;
        cin >> namePlusValue.value;
        int checkName = 1;

        for(int i = 0; i < base; i++) 
        {
            if((namePlusValue.name == nameValueVector[i].name) && !((namePlusValue.name == "NoName") && (namePlusValue.value == 0))) 
            {
                cout << "\nName already exists in list, please enter the next name.\n";
                checkName = 0; 
                return 0;
            }
        }

        if(checkName == 1) 
        {
            nameValueVector.resize(base + 1);
            nameValueVector[base] = namePlusValue;
            base++;
        }
    }

    for(int i = 0; i < base - 1; i++) 
    {
        cout << "\n(" << nameValueVector[i].name << ", " << nameValueVector[i].value << ")";
    }

    cout << "\n";
    return 0;
}