#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int minimum(int a, int b, int c)
{
    return min(a,min(b,c));
}
int main()
{
    string name1,name2;
    cin>>name1>>name2;

    int length1,length2;

    length1 = name1.length();
    length2 = name2.length();

    int matrix[length2+1][length1+1];

    for(int i=0;i<=length1;i++)
    {
        matrix[0][i] = i;
    }
    for(int i = 1;i<=length2;i++)
    {
        matrix[i][0] = i;
    }

    for(int i=1;i<=length2;i++)
    {
        for(int j=1;j<=length1;j++)
        {
            matrix[i][j] = minimum(matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]);
            if(name1[j] != name2[i])
            {
                matrix[i][j]++;
            }
        }

    }


    for(int i=0;i<=length2;i++)
    {
        for(int j=0;j<=length1;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }




}
