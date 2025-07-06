// A simple guess a number game with score
//We have to guess a number from 1 to 10 which is generated if we'll guess write +1 score is given

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c=0,d=0,f=0;
    cout<<" Welcome to guess Game \n\n   Rules:\n"<<endl;
    cout<<"   1.Enter Y for yes and N for exit the game"<<endl;
    cout<<"   2.You have to choosea number between 1 to 10 "<<endl;
    char e;
    do
    {
    	
        cout<<"\n Guess number from 1-10 you        ";
        cin>>a;
        cout<<endl;
        b=rand()%10+1;
  
        if(b==a)
        {
            cout<<"Congratulations you guess it correct     "<<endl;
            c++;
        }
        else
        {
            cout<<"Sorry, you guess it wrong Try again    "<<endl;
            d++;
        }
        f++;
        cout<<"Do you want to Play again Y/N     "; 
        cin>>e;
        cout<<endl;
        if(e=='N'||e=='Y'){}
        else
        {
            cout<<"Invalid input.Plz enter again to play game or to exit    "<<endl;
        }
    }while(e!='N');
    cout<<"You tried "<<f<<"times"<<endl;
    cout<<"You guessed correct number "<<c<<" times"<<endl;
    cout<<"You guessed wrong number  "<<d<<" times"<<endl;
}