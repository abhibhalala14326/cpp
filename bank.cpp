#include <iostream>
#include <string>
using namespace std;
class bank
{
protected:
    int account_number;
    long balance;
    string name;

public:
    void data()
    {
        cout << "enter the account number :" << endl;
        cin >> account_number;

        cout << "enter the name :" << endl;
        cin >> name;
        cout << "enter the balance :" << endl;
        cin >> balance;
    }
    void show_bank_data()
    {
        cout << "account number :" << account_number << endl;
        cout << "      name      :" << name << endl;
        cout << "    balance     :" << balance << endl;
    }
    void diposit()
    {
        int amt;
        cout << "enter the diposit amount :" << endl;
        cin >> amt;
        balance = balance + amt;
    }
    void withdrad()
    {
        int amt = 0;
        cout << "enter the withdrad amount :" << endl;
        cin >> amt;
        if (amt <= balance)
        {
            balance = balance - amt;
        }
        else
        {
            cout << "less amount ";
        }
    }
    int chek_balance(int a)
    {
        if (account_number == a)
        {
            show_bank_data();
            return 1;
        }
        return (0);
    }
};
int main()
{
    bank obj[2];
   
    int chois, a, s;

    for (int i = 0; i < 2; i++)
    {
        obj[i].data();
    }
    s:
    do
    {
        cout << "< -------------------------------------------------- >" << endl;
        cout << "< -------------------------------------------------- >" << endl;
        cout << "    1.withdra " << endl;
        cout << "    2.diposit " << endl;
        cout << "    3.chek balance " << endl;
        cout << "    4.exit " << endl;

        cout << "          <--------- youe chois -------------->" << endl;
        cin >> chois;

        switch (chois)
        {

        case 1:

            for (int i = 0; i < 2; i++)
            {

                cout << "enter the  account number  :" << endl;
                cin >> a;

                obj[i].chek_balance(a);
                obj[i].withdrad();
            }

            break;

        case 2:

            for (int i = 0; i < 2; i++)
            {

                cout << "enter the diposit account number" << endl;
                cin >> a;

                obj[i].chek_balance(a);
                obj[i].diposit();
            }

            break;
        case 3:
            for (int i = 0; i < 2; i++)
            {

                cout << "enter the chek account number" << endl;
                cin >> a;
                obj[i].chek_balance(a);
            }

        case 4:
            cout << "GOOD DAY " << endl;
             goto s;
            break;
           

        default:
            cout << "no banking";
            break;
        }
    } while (chois != 4);

    return 0;
}