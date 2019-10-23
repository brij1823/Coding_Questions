//WAP to see if all the characters in the string are unique or not.

#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main()
{
    string name;
    cin>>name;

    unordered_map <char,int> record;
    int length = name.length();
    int flag = 0;
    for(int i=0;i<length;i++)
    {
       if(record[name[i]]!=0)
       {
           flag =1;
           cout<<"Not unique";
           break;
       }
       else{
        record[name[i]] = 1;
       }
    }
    if(flag == 0)
    {
        cout<<"Unique";
    }
}
