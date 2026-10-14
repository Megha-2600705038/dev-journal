//Example for switch statement:

#include <iostream>
using namespace std;

int main(){
    char choice;
    cout<<"Enter the menu :";
    cout<<"1.Biriyani\n2.Sadhya\n3.Noodles\n4.Friedrice\n5.Homelymeals\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case '1':
        cout<<"Your choice is Biriyani";
        break;
    case '2':
        cout<<"Your choice is Sadhya";
        break;
    case '3':
        cout<<"Your choice is Noodles";
        break;
    case '4':
        cout<<"Your choice is Friedrice";
        break;
    case '5':
        cout<<"Your choice is Homelymeals";
        break;
    default:
        cout<<"You have entered wrong choice";
        break;
    }
    return 0;
}
