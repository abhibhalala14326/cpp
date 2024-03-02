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
    cout << "you`r Order :" << endl;
    cout << "\t\t\t\t";
    cin >> order;

    switch (order)
    {
    case 1:
        cout << "\t\t\t\t";
        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 120 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << "\t\t\t\t";
        cout << " ORDER TO BHAJIPAV " << endl;
        cout << "\t\t\t\t";
        cout << "total bill :" << netbill + totalbill;
        cout << "\t\t\t\t";

        break;
    case 2:
        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 25 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << "\t\t\t\t";
        cout << " ORDER TO VADAPAV " << endl;
        cout << "\t\t\t\t";
        cout << "total bill :" << netbill + totalbill;
        cout << "\t\t\t\t";

        break;
    case 3:
        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 150 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << " ORDER TO DHOSA " << endl;
        cout << "total bill :" << netbill + totalbill;

        break;
    case 4:

        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 100 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << "\t\t\t\t";
        cout << " ORDER TO ALO PRATHA " << endl;
        cout << "\t\t\t\t";
        cout << "tORDERbTOl :" << netbill + totalbill;

        break;
    case 5:
        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 80 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << "\t\t\t\t";
        cout << " ORDER TO SANDWISH " << endl;
        cout << "\t\t\t\t";
        cout << "total bill :" << netbill + totalbill;
        cout << "\t\t\t\t";

        break;
    case 6:
        cout << "\t\t\t\t";
        cout << "quantities :" << endl;
        cout << "\t\t\t\t";
        cin >> quantities;

        totalbill = 20 * quantities;
        netbill = totalbill / 18;

        obj.show();
        cout << "\t\t\t\t";
        cout << " ORDER TO STING " << endl;
        cout << "\t\t\t\t";
        cout << "total bill :" << netbill + totalbill;
        cout << "\t\t\t\t";

        break;

    default:
        cout << "not item";
        break;
    }
    return 0;
}