#include <iostream>

using namespace std;
//--------------------------------------------Deklarasi Soal--------------------------------------------------

int tambah(int a,int b);
int kurang(int a,int b);
int kali(int a,int b);
int bagi(int a,int b);
int pangkat(int a,int b);
int fibonansi(int a);
int faktorial(int a);

//===========================================================================================================
int main()
{
    int A1,A2,A3;
    cout << "KALKULATOR SEDERHANA DENGAN MENGGUNAKAN FUNGSI REKURSIF \n";
    cout << "Masukkan angka pertama = ";cin >> A1;
    cout << "Masukkan angka kedua = ";cin >> A2;

    cout << "\nPer Tambahan : \n";
    cout << A1 << " + " << A2 << " = " << tambah(A1,A2);

    cout << "\nPengurangan : \n";
    cout << A1 << " - " << A2 << " = " << kurang(A1,A2);

    cout << "\nPerkalian : \n";
    cout << A1 << " x " << A2 << " = " << kali(A1,A2);

    cout << "\nPembagian : \n";
    cout << A1 << " : " << A2 << " = " << bagi(A1,A2);

    //-------------------------------------------------------------------------
    cout << "\n\nFUNGSI PANGKAT, FIBONANSI, DAN FAKTORIAL \n";
    cout << "Masukkan angka = ";cin >> A3;

    cout << "\nPangkat : \n";
    cout << A3 << " Pangkat " << 2 << " = " << pangkat(A3,2);

    cout << "\n\nFibonansi : \n";
    cout << "Hasil Fibonansi dari " << A3 << " adalah = " << fibonansi(A3);

    cout << "\n\nFaktorial : \n";
    cout << "Faktorial dari " << A3 << " adalah = " << faktorial(A3) <<endl;

    return 0;
}
//===========================================================================================================

int tambah(int a,int b){
    if(b==0){
        return a;
    }else
        return tambah(a+1,b-1);
}
int kurang(int a,int b){
    if(b==0){
        return a;
    }else
        return kurang(a-1,b-1);
}
int kali(int a,int b){
    if(b==1){
        return a;
    }else
        return a+kali(a,b-1);
}
int bagi(int a,int b){
    if(a < b){
        return 0;
    }else
        return 1+bagi(a-b,b);
}
int pangkat(int a,int b){
    if(b==1){
        return a;
    }else
        return a*pangkat(a,b-1);
}
int fibonansi(int a){
    if(a <= 1){
        return a;
    }else
        return fibonansi(a-1) + fibonansi(a-2);
}
int faktorial(int a){
    if(a==1){
        return 1;
    }else
        return a*faktorial(a-1);
}
