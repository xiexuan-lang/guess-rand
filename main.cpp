#include <iostream>
using namespace std;
int main()
{int mynum,num,max;
srand((unsigned int) time(NULL));
cout<<"what is the max:";cin>>max;
    num=rand()%max+1;
    cout<<"enter the num:";
    cin>>mynum;

    while(mynum!=num)
    {
        if(mynum>num)
            cout<<"*********too big***********"<<endl;
        else
            cout<<"*******too small*********"<<endl;
        cout<<"enter the num:";
        cin>>mynum;
    }

    cout<<"yes,you are good enough\n";
    cout<<"It is:"<<num<<"it is 0 to"<<max<<endl;
    return 0;
}
