# include<iostream>
using namespace std;
using std::endl;
int main (){
  srand(static_cast<int>(time(nullptr)));
 int daysUntilExpiration = (0 + (rand() % 12));
 cout<<"daysUntilExpiration is : "<<daysUntilExpiration<<endl;
   if (daysUntilExpiration == 0)
        cout<<" Your subscription has expaired "<<endl; 
      else  if (daysUntilExpiration == 1)
    cout<<" your subscription expires within a day! Renew now and save 20% "<<endl;
     else if (daysUntilExpiration <= 5)
    cout<<" Your subscription expires in " <<daysUntilExpiration<<" Renew now ans save 10%!"<<endl;
    else if (daysUntilExpiration <= 10)
        cout<<" Your subscription will expire soon. Renew now! "<<endl;
   else 
        
        cout<< " You have an active subscription"<<endl;
        
           return 0;   }