#include <iostream>
#include <string>
using namespace std;
class hotel

{
private:
    string Customer_name;
    int tabel_number;

public:
    void info()
    {

        cout << "\t\t\t\t";
        cout << "customer name :" << endl;
        cout << "\t\t\t\t";
        cin >> Customer_name;
        cout << "\t\t\t\t";
        cout << "tabel number :" << endl;
        cout << "\t\t\t\t";
        cin >> tabel_number;
    }
    void show()
    {

        cout << "\t\t\t\t";
        cout << "customer name :" << Customer_name << endl;
        cout << "\t\t\t\t";
        cout << "tabel number :" << tabel_number << endl;
    }
};

int main()
{
    int order, quantities;
    float gst, netbill, totalbill = 0;

    hotel obj;
    obj.info();

    cout << "<--------------------------------------------------------------------------------------------------------->";

    cout << endl
         << endl;
    cout << "\t\t\t<-----------------Kake Da Hotel----------------->" << endl;
    cout << endl;
    cout << "<--------------------------------------------------------------------------------------------------------->" << endl
         << endl;
    cout << "\t\t\t<-----------------Kake Da menu----------------->" << endl;
    cout << endl;
    cout << "<--------------------------------------------------------------------------------------------------------->" << endl;
    cout << "\t\t\t\t";
    cout << "1.BHAJIPAV     - 120" << endl;
    cout << "\t\t\t\t";
    cout << "2. VADAPAV     - 25" << endl;
    cout << "\t\t\t\t";
    cout << "3.   DHOSA     - 150" << endl;
    cout << "\t\t\t\t";
    cout << "4.ALO PRATHA   - 100" << endl;
    cout << "\t\t\t\t";
    cout << "5.SANDWISH     - 80 " << endl;
    cout << "\t\t\t\t";
    cout << "6.STING        - 20 " << endl;
    cout << "\t\t\t\t";
    cout << "7.TOTAL BILL      - 20 " << endl;
    cout << "\t\t\t\t";
    do
    {
        cout << "you`r Order :" << endl;
        cout << "\t\t\t\t";
        cin >> order;

        switch (order)
        {
        case 1:

            cout << "\t\t\t\t";
            cout << "quantities :" << endl;

            cout << "\t\t\t\t";
            cin >> quantities;

            totalbill = totalbill + (120 * quantities);
           
            break;

        case 2:
            cout << "\t\t\t\t";
            cout << "quantities :" << endl;
            cout << "\t\t\t\t";
            cin >> quantities;

            totalbill = totalbill + (25 * quantities);
            break;

        case 3:
            cout << "\t\t\t\t";
            cout << "quantities :" << endl;
            cout << "\t\t\t\t";
            cin >> quantities;
            totalbill = totalbill + (150 * quantities);

            break;
        case 4:

            cout << "\t\t\t\t";
            cout << "quantities :" << endl;
            cout << "\t\t\t\t";

            cin >> quantities;

            totalbill = totalbill + (100 * quantities);

            break;
        case 5:
            cout << "\t\t\t\t";
            cout << "quantities :" << endl;
            cout << "\t\t\t\t";
            cin >> quantities;

            cout << "\t\t\t\t";
            cout << "GST :" << netbill << endl;
            totalbill = totalbill + 80 * quantities;

            break;
        case 6:
            cout << "\t\t\t\t";
            cout << "quantities :" << endl;
            cout << "\t\t\t\t";
            cin >> quantities;

            totalbill = totalbill + (20 * quantities);

            break;
        case 7:
            // total bill
            cout << "**************************************total bill********************************************" << endl;
            cout << "\t\t\t\t";
            cout << "TOTAL BILL: " << totalbill << endl;
            cout << "\t\t\t\t";

            // gst amount
            gst = totalbill / 18;
            cout << "GST  18%    : " << gst << endl;
            cout << "\t\t\t\t";

            // total bill
            cout << "TOTAL BILL : " << totalbill + gst << endl;
            cout << "\t\t\t\t";

            exit(0);
            break;
        default:
            cout << "not item";
            break;
        }
    } while (order != 7);

    return 0;
}