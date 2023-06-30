#include <iostream>

using namespace std;
struct sepeda{
    string merk="Polygon";
    string type="Sepeda Gunung";
    int tahun=2013;
    string harga="2.000.000";


}
;
int main()
{
    sepeda spd;
    cout << spd.merk << endl;
    cout << spd.type << endl;
    cout << spd.tahun << endl;
    cout << spd.harga << endl;
    return 0;
}
