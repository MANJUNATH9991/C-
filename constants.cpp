#include <iostream>
using namespace std;

int main()
{
    const int small_room = 25;
    const int large_room  = 35;
    int no_of_small_room = 0;
    int no_of_large_room = 0;
    const double tax = 6.6/100;
    const int days = 30;

    cout<<"Estimate for carpet cleaning ervice:"<<endl;
    cout<<"************************************"<<endl;
    cout<<"\nNumber of small room: "<<endl;
    cin>>no_of_small_room;
    cout<<"Number of Large room; "<<endl;
    cin>>no_of_large_room;

    cout<<"price per small room is : $"<<small_room<<endl;
    cout<<"price per large room is : $"<<large_room<<endl;

    cout<<"cost: $ "<<(no_of_large_room*large_room)+(no_of_small_room*small_room)<<endl;
    cout<<"tax : $"<<((no_of_large_room*large_room)+(no_of_small_room*small_room))*tax<<endl;
    cout<<"================================================================="<<endl;
    cout<<"total estimate : $"<<((no_of_large_room*large_room)+(no_of_small_room*small_room))+(((no_of_large_room*large_room)+(no_of_small_room*small_room))*tax)<<endl;
    cout<<"the estimate is valid for "<<days<<" days"<<endl;

    return 0;

}