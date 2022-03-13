#include <iostream>

using namespace std;

int main()
{
    int n1,n2,ans;
    
    cout<<"enter n1 and n2: "<<endl;
    cin>>n1>>n2;
    
    try
    {
        if(n2==0)
        {
            throw n2;
        }
        else
        {
            ans=n1/n2;
            cout<<"Ans  "<<ans;
        }
    }
     
    catch(int x)
    {
            cout<<"can't divid by:  "<<x;
        
    }
    
    cout<<"end of the program "<<endl;
     
    

    return 0;
}
