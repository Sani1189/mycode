#include <bits/stdc++.h>
#include <string>

using namespace std;

void timeConversion(string s) 
{
    int pos1 = (int)s[0] - '0';
    int pos2 = (int)s[1] - '0' ;

    cout<< "Output:"<<endl;
    if(s[8]=='P' || s[8]=='p')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            for(int i=0; i<8; i++)
            {
                cout<<s[i];
            }
        }
        else
        {
            cout<<(pos1*10)+pos2+12;
            
            for(int i=2; i<8; i++)
            {
                cout<<s[i];
            }
            
        }
    }
    
    
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            cout<<"00";
            
            for(int i=2; i<8; i++)
            {
                cout<<s[i];
            }
        }
        else
        {
            for(int i=0; i<8; i++)
            {
                cout<<s[i];
            }
        }
    }
}

int main()
{
    string s="12:12:12PM";
    //cout<<"Enter a time in 12 hour AM/PM format(hh:mm:ssAM/PM)"<<endl;
    //getline(cin, s);
    cout<<"Input: "<<endl;
    cout<<s<<endl;
    
    timeConversion(s);
    
    return 0;
}
