#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
    srand(time(0));
    // srand(static_cast<unsigned int>(time(nullptr)));
    int lb = 10, ub = 1000;
    int RandomNum = (rand() % (ub-lb+1))+lb ;
    
    int GuessNum;
    int tries = 1;
    // cout<<RandomNum<<endl;    
    while(true){
        cout<<"Guess a ramdom number between 100 to 1000"<<endl;
        cin>>GuessNum;

        if(GuessNum > RandomNum){
            cout<<"Too high !"<<endl;
        }
        else if(GuessNum < RandomNum){
            cout<<"Too Low !"<<endl;
        }
        else{
            cout<<"Congratulations ! You guess the correct number"<<endl;
            cout<<"You try "<<tries<<" times. "<<endl;
            break;
        }
        tries++;
    }
    // }while(GuessNum != RandomNum);

    return 0;
}
