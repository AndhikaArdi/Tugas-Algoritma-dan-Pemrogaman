#include <iostream>
#include <string>
#include <cstdlib>

/*TUGAS ALPRO PERTEMUAN KE-4,PROGRAM FUNGSI BOOLEAN....
Nama : Kandela Andhika Ardi
Nim  : A11.2022.14286
Kel  : 4207
tgl  : 23 Maret 2023*/

using namespace std;

//--------------------------- Deklarasi Soal --------------------------
bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x,int y);
//..................................
int maxN(int a,int b);
int minN(int a,int b);
int maxArr(int a[],int b);
int minArr(int a[],int b);
//..................................
bool isFound(int a,int Arr[],int b);
void swapN(int &a,int &b);

//--------------------------- Deklarasi Lainnya -----------------------
int Loop(int a);
void display1(int a,int b,int c[],int d);
int badan(int angka1, int angka2, int ukArr, int Arr[]);
bool cek_input(const string& str);
void clear();

int no123(int a,int b,int pilihan);
void eks123(int a,int b,int pilihan);
int maxmin(int pilihan,int angka1,int angka2,int Arr[],int ukArr);
int eksFound(int Arr[],int ukArr);

//==================================================================================================================

int main()
{
    int loop_utama = 1;
    while(loop_utama == 1){
    //~~~~~~~~~~~~~~~~~~~~~~~~~ PERULANGAN UTAMA ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        clear();
        int angka1,angka2,ukArr;
        cout << "\t\t\t\t\t\t  SELAMAT DATANG\n\n" << "\t\t\t\t  Tolong masukkan inputan yang diperlukan......\n\n";
        cout << "Masukkan Angka Pertama = ";cin >> angka1;
        cout << "Masukkan Angka kedua = ";cin >> angka2;

        cout << "\nMasukkan jumlah element untuk array anda = ";cin >> ukArr;
        int Arr[ukArr];
        for(int a = 0; a < ukArr; a++){
            cout << "masukkan array ke-" << a+1 << " = ";cin >> Arr[a];
        }

        loop_utama = badan( angka1, angka2, ukArr, Arr);
    //-----------------
    }


    return 0;
}
//==================================================================================================================

//````````````````````````````````````````````````` DEFINISI SOAL ``````````````````````````````````````````````````

bool isEven(int x){
    bool z = (x % 2 == 0)? 1 : 0;
    return z;
}

bool isOdd(int x){
    bool z = (x % 2 == 1)? 1 : 0;
    return z;
}

bool isFactor(int x,int y){
    bool z = (y % x == 0)? 1 : 0;
    return z;
}
//-----------------------------------------------------

int maxN(int a,int b){
    int hasil = (a>b)? a : b;
    return hasil;
}
int minN(int a,int b){
    int hasil = (a<b)? a : b;
    return hasil;
}
int maxArr(int a[],int b){
    int hasil = 0;
    for(int i=0;i<b;i++){
        hasil = maxN(hasil,a[i]);
    }
    return hasil;
}
int minArr(int a[],int b){
    int hasil = 9999;
    for(int i=0;i<b;i++){
        hasil = minN(hasil,a[i]);
    }
    return hasil;
}

//-----------------------------------------------------
bool isFound(int a,int Arr[],int b){
    int hasil = 0;
    for(int i = 0;i<b;i++){
        if(Arr[i] == a){
            hasil = 1;
        }
    }
    return hasil;
}

void swapN(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

//``````````````````````````````````````````````` DEFINISI LAINNYA ``````````````````````````````````````````````````

int Loop(int a){
    string loop;
    if(a == 1){
        cout << "\nApakah anda ingin memilih opsi lain? (y/t) = ";cin >> loop;
    }else{
        cout << "\nApakah anda ingin mengulang, dan memasukkan angka baru? (y/t) = ";cin >> loop;
    }

    if((loop == "y")||(loop == "Y")||(loop == "ya")){
        return 1;
    }else if((loop == "t")||(loop == "T")||(loop == "tidak")){
        return 0;
    }else{
        cout << "error, inputan salah";
        return Loop(a);
    }
}

void display1(int a,int b,int c[],int d){
    cout << "Inputan anda :\n" << endl;
    cout << "a = " << a << "\t\t b = " << b;
    cout << "\t\t Array[] = {";
    for(int i = 0; i < d;i++){
        cout << c[i];
        if(i<d-1){
            cout << ",";
        }
    }
    cout << "}\n" << endl;
}

bool cek_input(const string& str) {
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

int badan(int angka1, int angka2, int ukArr, int Arr[]){
    int check = 1;
        while(check == 1){
            clear();
            //~~~~~~~~~~~~~~~~~~~~~ PERULANGAN KE - 2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~
            cout << "\t\t\t\t\t\t  SELAMAT DATANG\n\n";

            display1(angka1,angka2,Arr,ukArr);
            cout << "Pilihlah Opsi dibawah ini...\n\n" <<
            "1. Check bilangan Genap \n" <<
            "2. Check bilangan Ganjil\n" <<
            "3. Check bilangan faktor\n" <<
            "4. Check bilangan terbesar\n" <<
            "5. Check bilangan terkecil\n" <<
            "6. Check bilangan terbesar dalam Array\n" <<
            "7. Check bilangan terkecil dalam Array\n" <<
            "8. Mencari suatu bilangan dalam Array\n" <<
            "9. Pertukaran angka\n" <<
            "\n0. Masukkan angka lagi\n";

            cout << "\n-> Tekan apa saja, lalu enter untuk menghentikan program\n";

            cout << "\nopsi yang saya pilih : ";

            string str_pilihan;
            int pilihan;

            cin >> str_pilihan;

            if (cek_input(str_pilihan)) {
                pilihan = stoi(str_pilihan);//

                if((pilihan < 10)&&(pilihan != 0)){
                cout << "------------------------------------------------------------\n";
                }

                switch(pilihan){
                    case 1:
                    check = no123(angka1,angka2,pilihan);break;     //Genap
                    case 2:
                    check = no123(angka1,angka2,pilihan);break;     //Ganjil
                    case 3:
                    check = no123(angka1,angka2,pilihan);break;     //Faktor

                    case 4:
                    check = maxmin(pilihan,angka1,angka2,Arr,ukArr);break;     //Max biasa
                    case 5:
                    check = maxmin(pilihan,angka1,angka2,Arr,ukArr);break;     //Min biasa
                    case 6:
                    check = maxmin(pilihan,angka1,angka2,Arr,ukArr);break;     //Max Array
                    case 7:
                    check = maxmin(pilihan,angka1,angka2,Arr,ukArr);break;     //Min Array

                    case 8:
                    check = eksFound(Arr,ukArr);break;                         //Cari Angka

                    case 9:
                    //swapN(angka1,angka2);                                      //Tukar Angka
                    cout << "Angka Berhasil di tukar!\n" <<endl;

                    cout << "Before :" << "\tAfter :" <<endl;
                    cout << "int a = " << angka1 ;
                    swapN(angka1,angka2);
                    cout << "\tint a = " << angka1 <<endl;
                    swapN(angka1,angka2);
                    cout << "int b = " << angka2 ;
                    swapN(angka1,angka2);
                    cout << "\tint b = " << angka2 <<endl;

                    cout << "\nPerubahan ini akan tersimpan untuk seterusnya....\n";

                    check = Loop(1);break;

                    case 0:
                    //cout << "\n========================================================================================================================\n\n";
                    main();


                    default:
                    return 0;
                } // ----> tutup switch case
            } else {
                return 0;
            } //---------> tutp if else

        } // ------------> tutup while

        int loop_utama;
        if(check == 0 ){
            loop_utama = Loop(0);
        }

        return loop_utama;
}

int no123(int a,int b,int pilihan){
    cout << "pilih, angka mana yang ingin di check...\n" <<
    "1. Angka Pertama\n" <<
    "2. Angka Kedua\n";
    int ops1;
    cout << "Angka yang saya pilih : ";cin >> ops1; cout <<endl;
    if(ops1 == 1){
        eks123(a,b,pilihan);
    }else if(ops1 == 2){
        eks123(b,a,pilihan);
    }else{
        cout << "inputan anda salah,coba lagi\n";
        cout << "............................................................\n";
        return no123(a,b,pilihan);
    }
}

void eks123(int a,int b,int pilihan){
    int x;
    switch(pilihan){
        case 1:
        x = isEven(a);break;
        case 2:
        x = isOdd(a);break;
        case 3:
        x = isFactor(a,b);break;
    }

    if(x == 1){
        cout << "Ya, " << a << " adalah ";
    }else{
        cout << "Tidak, " << a << " bukanlah ";
    }

    switch(pilihan){
        case 1:
        cout << "Angka Genap\n" ;break;     //Genap
        case 2:
        cout << "Angka Ganjil\n" ;break;     //Ganjil
        case 3:
        cout << "bilangan Faktor dari " << b << endl ;break;     //Faktor
    }

    Loop(1);
}

int maxmin(int x,int angka1,int angka2,int Arr[],int ukArr){
    if(x == 4){
        cout << "Bilangan terbesar adalah = " << maxN(angka1,angka2) <<endl;
    }else if(x == 5){
        cout << "Bilangan terkecil adalah = " << minN(angka1,angka2) <<endl;
    }else if(x == 6){
        cout << "Bilangan terbesar adalah = " << maxArr(Arr,ukArr) <<endl;
    }else if(x == 7){
        cout << "Bilangan terkecil adalah = " << minArr(Arr,ukArr) <<endl;
    }
    Loop(1);
}

int eksFound(int Arr[],int ukArr){
    int a;
    cout << "Angka apa yang ingin anda cari? ";
    cout << "Masukkan angka tersebut = ";cin >> a;
    int x = isFound(a,Arr,ukArr);
    if(x == 1){
        cout << "\nYa, Angka " << a << " terdapat pada Array";
    }else
        cout << "\nMaaf, Angka " << a << " tidak terdapat pada Array";

    cout << "[] = {";
    for(int i = 0; i < ukArr;i++){
        cout << Arr[i];
        if(i<ukArr-1){
            cout << ",";
        }
    }
    cout << "}" << endl;

    Loop(1);
}

void clear()
{
    #if __linux__
        system("clear");

    #elif _WIN32
        system("cls");

    #endif
}
