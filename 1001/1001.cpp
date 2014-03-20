#include<iostream>
#include <string>
#include <vector>
using namespace::std;

int n;
vector<int> r_int;
int dot;

string power()
{
    int i,j,k;
        
    //in this case, r=0
    for(i=0;i<5;i++)
    {
        if(r_int[i]!=0)
            break;
    }
    if(i==5)
    {
        string str_zero;
        str_zero = '0';
        return str_zero;
    }

    vector<int> answer(n*5);
    answer[0]=1;
    for(i=0;i<n;i++)
    {
        vector<int> tmp(answer);
        if(n==1)
        {
            for(vector<int>::size_type ix=0,ll=0;ix!=answer.size();++ix,++ll)
                answer[ix] = r_int[ll];
        }
        else
        {               
            for(vector<int>::size_type ix=0;ix!=answer.size();++ix) 
                answer[ix] = 0;

            for(j=0; j<5*(n-1); ++j)        
            {           
                if(tmp[j]!=0)           
                {       
                    for(k=0; k<5; ++k)              
                        answer[j+k]+=tmp[j]*r_int[k];       
                }       
            }
            for(j=1; j<n*5; ++j)
            {
                answer[j]+=answer[j-1]/10;
                answer[j-1]%=10;
            }
        }
    }

    string str;
    str.clear();
    for(i=0; i<n*5; ++i)
        str=(char)(answer[i]+'0')+str;
    str.insert(n*5-dot*n, 1, '.');
    while(str[0]=='0')
        str.erase(str.begin());
    while(str[str.size()-1]=='0')
        str.erase(str.end()-1);
    if(str[str.size()-1]=='.')
        str.erase(str.end()-1);

    return str;

}

int main()
{   
    int i;
    char r[7];//easier to cin
    string ans;

    while(cin>>r>>n)
    {
        if(n<=0 || n>25)
            return 0;
        
        for(i=0; i<6; ++i)
        {
            if(r[i]=='.')
            {
                dot=6-i-1;
                break;
            }
        }
        if(i==6)
            dot = 0;
        
        r_int.clear();
        for(i=5; i>=0; --i)
        {
            if(r[i]!='.')
                r_int.push_back(r[i]-'0');
        }

        ans = power();
        for(i=0;i<ans.size();++i)
            cout<<ans[i];
        cout<<endl;

    }

    return 1;
}