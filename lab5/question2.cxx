#include<iostream>
using namespace std;
using std:: endl;
int main (){
    srand(static_cast<int>(time(nullptr)));
    int daysUntilExpiration = rand() % 12;
    cout<<" the subscription number is : "<<daysUntilExpiration <<endl;
     switch (daysUntilExpiration ){ 
     case 6 ... 10:
         cout<<" Your subscription will expire soon. Renew now! "<<endl;
         break;
       case 2 ... 5:
       cout <<" Your subscription expires in "<<daysUntilExpiration <<" Renew now and save 10%"<<endl;
       break;
       case 1:
       cout<<" Your subscription expires within a day. Renew now and save 20% "<<endl;
       break;
       case 0:
       cout<<"Your subscription expired "<<endl;
       break;
       default :
       cout<<"You have an active subscription"<<endl;
        }
        return 0;
        
}