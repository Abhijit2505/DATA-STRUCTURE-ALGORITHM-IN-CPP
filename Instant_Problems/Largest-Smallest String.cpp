#include <iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    map<string,int> mapp;
    string output = "";
    int count = 0;
    for(int i=0;i<sizeof(s)-1;i++)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            string key = output;
            if(mapp.count(key)==0)
            {
                mapp[key] = count;
                output = "";
                count=0;
            }
            if(s[i] == '\0')
            {
                break;
            }
        }
        else if(s[i] != ' ' && s[i] != '\0')
        {
            output = output + s[i];
            count++;
        }
    }
    map<string,int>::iterator it = mapp.begin();
    int greater_num = 0;
    int smaller_num = sizeof(s);
    string greater_string = "";
    string smaller_string = "";
    while(it != mapp.end())
    {
        if(it -> second > greater_num)
        {
            greater_string = it -> first;
            greater_num = it -> second;
        }
        if(it -> second < smaller_num)
        {
            smaller_string = it -> first;
            smaller_num = it -> second;
        }
        it++;
    }

    cout << "Greater - String = " << greater_string << endl;
    cout << "Smaller - String = " << smaller_string << endl;
}
