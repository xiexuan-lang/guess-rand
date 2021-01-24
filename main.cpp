#include <iostream>
using namespace std;
int main()
{int mynum,num;
srand((unsigned int) time(NULL));

    num=rand()%100+1;
    cout<<"enter the num:";
    cin>>mynum;

    while(mynum!=num)
    {
        if(mynum>num)
            cout<<"*********too big***********"<<endl;
        else
            cout<<"********too small**********"<<endl;
        cout<<"enter the num:";
        cin>>mynum;
    }

    cout<<"yes,you are good enough\n";
    cout<<"It is:"<<num<<endl;
    return 0;
}