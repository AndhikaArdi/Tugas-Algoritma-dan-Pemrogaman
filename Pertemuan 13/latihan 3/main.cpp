#include <iostream>

using namespace std;
typedef struct lat1{
    float phi=3.14;
    int luaspersegipanjang(int panjang,int lebar){
        return panjang*lebar;
    }
    float luaslingkaran(int r){
        return (22*r*r)/7;
    }
    float volumekerucut(int r,int t){
        return (phi*r*r*t)/3;
    }
    float volumebola(int r){
        return (4*phi*r*r*r)/3;
    }
};
struct lat1 latihan1;
int main()
{


    cout <<latihan1.luaspersegipanjang(1,3)<< endl;
    cout <<latihan1.luaslingkaran(5)<< endl;
    cout <<latihan1.volumekerucut(5,3)<< endl;
    cout <<latihan1.volumebola(5)<< endl;
    return 0;
}
