#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main()
{
    string name1,name2;
    cin>>name1>>name2;

    unordered_map<char,int> record;

    int len1 = name1.length();
    int len2 = name2.length();

    if(len1 != len2)
    {
        cout<<"Not an identical pair";
    }
    else{
            for(int i = 0;i<len1;i++)
            {
                record[name1[i]]++;
            }
            int flag = 0;

            for(int i=0;i<len2;i++)
            {
                if(record[name2[i]] == 0)
                {
                    flag = 1;
                    cout<<"Not an identical pair";
                    break;
                }
                else{
                    record[name2[i]]--;
                }
            }

            if(flag == 0)
            {
                cout<<"Identical Pair";
            }
    }

}
