#include <iostream>
#include <string>
using namespace std;
class bank
{
protected:
    int account_number;
    long b;
    string name;

public:
    bank(){

    };
    bank(int account, long balance,string name1)
    {
        account_number = account;
        b = balance;
        
        name=name1;

        
    }
    void show_data()
    {
        cout<<account_number<<endl;
        cout<<b<<endl;
        cout<<name;
    }
};
int main()
{
    bank Bank[n];
    Bank[1] = bank(101, 20000,"abhi");
    Bank[2] = bank(102, 30000,"avan");
    Bank[3] = bank(103, 5000,"akash");
    Bank[4] = bank(104, 56000,"ronik");
    int c;
       do{
      
       cout<<"enter the emp number :"<<endl;
       cin>>banmk[n];
       
          
        cout << "< -------------------------------------------------- >" << endl;
        cout << "< -------------------------------------------------- >" << endl;
        cout << "    1.withdra " << endl;
        cout << "    2.diposit " << endl;
        cout << "    3.chek balance " << endl;
        cout << "    4.exit " << endl;

        cout << "          <--------- youe chois -------------->" << endl;
        cin >> c;

        switch (c)
        {

        case 1:

            
            break;

        case 2:

           
            break;
        case 3:
            
        case 4:
            cout << "GOOD DAY " << endl;
           
            break;
           

        default:
            cout << "no banking";
            break;
        }
    } while (c != 4);
    return 0;
}