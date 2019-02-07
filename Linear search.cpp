#include<bits\stdc++.h>
#include<cstdlib>
using namespace std;

int main()
{
    int a,searc,fnd=0;
        cin>>a;
    int ar[a];
    for(int i=0; i<a; i++)
        ar[i]=rand()%20;

    for(int i=0; i<a; i++)
        cout<<ar[i]<<" ";

    cout<<endl;

    cout<<"enter search number : ";
    cin>>searc;

    for(int i=0; i<a; i++){
        if(ar[i]==searc){
                fnd=1;
            cout<<"Number is found"<<endl;
        break;
        }
    }
    if(fnd==0)
        cout<<endl<<"\tnot found"<<endl;

        return 0;
}

