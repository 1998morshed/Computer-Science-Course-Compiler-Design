#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

void check_digit(string s)
{
    int i = 0,f = 0,ff = 0;

    while(s[i]!='.')
    {
        if(s[i] < '0' || s[i] > '9')
        {
            cout<<"Invalid,0"<<endl;
            return;
        }
        i++;
        if(i == s.size())
            break;
    }

    i++;

    while(s[i]!='.')
    {
        if(s[i] < '0' || s[i] > '9')
        {
            cout<<"Invalid,0"<<endl;
            return;
        }
        i++;
        if(i == s.size())
            break;
    }

    if( i >= s.size() )
        cout<<"Digit,3"<<endl;
    else
        cout<<"Invalid,0"<<endl;
}

bool check_email(string s)
{
    int n = s.size(),i = 0,dot = 0;
    for( ; i<n; i++)
    {
        if(s[i] == '@')
        {
            i++;
            break;
        }
        if(s[i] == '.')
            dot++;
        else if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'));
        else
            return false;

        if(dot > 1)
            return false;

    }

    if(i == n)
        return false;

    for( ; i<n; i++)
    {
        if(s[i] == '.')
        {
            i++;
            break;
        }
        if(s[i] >= 'a' && s[i] <= 'z');
        else
            return false;
    }

    if(i == n )
        return false;

    for( ; i<n; i++)
    {
        if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'));
        else
            return false;
    }

    if(i == n)
        return true;

    return false;

}

bool check_web(string s)
{
    string ss = s.substr(0,4);
    cout<<ss<<endl;
    if(ss != "www.")
        return false;
    else
    {
        int i = 4;
        int n = s.size();
        for( ; i<n; i++)
        {
            if(s[i] == '.')
            {
                i++;
                break;
            }
            if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'));
            else
                return false;
        }

        if(i == n)
            return false;

        for( ; i<n; i++)
        {
            if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'));
            else
                return false;
        }

        return true;

    }
}

bool check_id(string s)
{
    if(s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z');
    else
        return false;

    int i = 1;
    int n = s.size();
    for(; i<n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9');
        else
            break;
    }

    if(i == n)
        return false;

    for(; i<n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        if(s[0] >= '0' && s[0] <= '9')
            check_digit(s);
        else if(check_email(s))
            cout<<"Email,1"<<endl;
        else if(check_web(s))
            cout<<"Web,2"<<endl;
        else if(check_id(s))
            cout<<"Id,4"<<endl;
        else
            cout<<"Invalid,0"<<endl;

    }

    return 0;
}

