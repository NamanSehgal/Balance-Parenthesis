#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[30];
    cout<<"Enter the String: ";
    cin>>a;

    int b;
    b=strlen(a);
    int push=0,pop=0,top=0,i,d;

    for(i=0;i<b;i++)
    {
        if(a[i]=='(')
        {
            push=push+1;
            top=top+1;
        }

        if(a[i]==')')
        {
            pop=pop-1;
            top=top-1;
            if(top<0)
            {
                cout<<"Wrong Expression"<<endl;
                break;
            }
        }
    }
            if(top==0)
            {
                cout<<"Right Expression"<<endl;
            }
            else
            {
                cout<<"Wrong Expression"<<endl;
            }

    return 0;
}
