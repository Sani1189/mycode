#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string b,words[10] = { "award", "await", "bubble", "coding", "spring", "mango", "dead", "poets", "society", "attend" };

    string a = words[rand() % 10];
    int len=a.length()

    int s[10];
    char ch;
    int n=0;
    int i,count =0;
    s[i]=0;

    for (int i = 0; i < len+2; i++)

    {
        cout<<"Guess the letter: ";
        cin>>ch;

        for(i=0 ; i<len;i++)
        {
            if(i==s[i])
            {
                cout<<b[i];
            }
            else if(ch==a[i])
            {
                b[i]=ch;
                s[i]=i;
                cout<<ch;
            }
            else
            {
                cout<<"_";
            }
        }

        n++;
        cout <<endl;

    }
    return 0;
}
