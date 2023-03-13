#include <iostream>
/*TUGAS PERTEMUAN KEDUA TEORI....
PROGRAM PENJULAHAN, PENGURANGAN, PERKALIAN, TOTAL PENJUMLAHAN ARRAY, RATA-RATA ARRAY
Nama : Kandela Andhika Ardi
Nim  : A11.2022.14286
Kel  : 4207
tgl  : 10 Maret 2023*/

using namespace std;

int Loop(){
    string loop;
    cout << "\nApakah anda ingin mengulang? (y/t) = ";cin >> loop;

    if((loop == "y")||(loop == "Y")||(loop == "ya")){
        cout << "\n========================================================================================================================\n\n";
        return 1;
    }else if((loop == "t")||(loop == "T")||(loop == "tidak")){
        return 0;
    }else{
        cout << "error, inputan salah";
        return Loop();
    }
}
//--------------------------------------------------------------
void tambah(int a,int b){
    cout << a<<" + "<<b<<" = "<< a+b << endl;
    Loop();
}
//--------------------------------------------------------------
void kurang(int a,int b){
    cout << a<<" - "<<b<<" = "<< a-b << endl;
    Loop();
}
//--------------------------------------------------------------
void kali(int a,int b){
    cout << a<<" x "<<b<<" = "<< a*b << endl;
    Loop();
}
//--------------------------------------------------------------
void jum_rat_Arr(int a[],int b,int ukArr){
    float jum = 0;

    for(int c = 0; c < ukArr; c++){
        jum = jum + a[c];
    }

    if(b == 1){
        cout << "\nTotal Penjumlahan elemen Array = " << jum <<endl;
        Loop();
    }else{
        cout << "\nRata-rata elemen Array (" <<
        jum << "/" << ukArr << ") = " << jum/ukArr <<endl;
        Loop();
    }
}
//--------------------------------------------------------------
int Arr4(){
    int totArr,operasi;
    cout << "masukkan jumlah Array = ";cin >> totArr;
    int Arr[totArr];
    for(int a = 0; a < totArr; a++){
        cout << "masukkan angka ke-" << a+1 << " = ";cin >> Arr[a];
    }

    cout << "\nPilihlah operai Array dibawah ini...\n" <<
    "1. Total penjumlahan nilai Array\n" <<
    "2. Nilai rata-rata dari Array diatas\n" <<
    "operasi yang saya pilih : ";cin >> operasi;

    if(operasi == 1){
        jum_rat_Arr(Arr,1,totArr);
    }else if(operasi == 2){
        jum_rat_Arr(Arr,2,totArr);
    }else{
        cout << "\ninputan salah,coba lagi\n";
        cout << "............................................................\n";
        return Arr4();
    }

}
//--------------------------------------------------------------
int opsi(int a){
    int Angka1,Angka2;
    cout << "masukkan angka 1 = ";cin >> Angka1;
    cout << "masukkan angka 2 = ";cin >> Angka2;

    switch(a){
        case 1:
        tambah(Angka1,Angka2);break;
        case 2:
        kurang(Angka1,Angka2);break;
        case 3:
        kali(Angka1,Angka2);break;
    }
}

//==========================================================================
int main(){
    int check = 1;
    while(check == 1){
        cout << "Pilihlah Opsi dibawah ini...\n" <<
        "1. Pertambahan\n" <<
        "2. Pengurangan\n" <<
        "3. Perkalian\n" <<
        "4. Array\n" <<
        "\n0. Keluar\n";

        cout << "\nopsi yang saya pilih : ";

        int pilihan;
        cin >> pilihan;
        cout << "------------------------------------------------------------\n";

        switch(pilihan){
            case 1:
            check = opsi(pilihan);break;
            case 2:
            check = opsi(pilihan);break;
            case 3:
            check = opsi(pilihan);break;
            case 4:
            check = Arr4();break;
            case 0:
            check = 0;break;

            default:
            cout << "Error, inputan salah\n";
            return 0;
        }
    }

    return 0;
}
