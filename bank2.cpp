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
   
};
int main()
{

    bank c1;
    int chois;
    c1.data();
    c1.show();
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
            c1.data();
            c1.withdrad();

            break;

        case 2:

            c1.data();
            c1.diposit();
            break;
        case 3:
            c1.data();
            c1.show();
            break;
        case 4:
            cout << "GOOD DAY " << endl;
            break;

        default:
            cout << "no banking";
            break;
        }
    } while (chois != 4);

    return 0;
}