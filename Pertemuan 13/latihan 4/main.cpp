#include <iostream>

using namespace std;
typedef struct mahasiswa{
    string nim;
    string nama;
    string jurusan;
    int tahun;

}mhs;
typedef struct mahasiswa2{
    string nim;
    string nama;
    string jurusan;
    int tahun;

}mhs2;
int main()
{
    int n;

    mhs data[4];
    data[0].nim="A11.2020.01234";
    data[0].nama="Andi";
    data[0].jurusan="broadcasting\t";
    data[0].tahun=2023;
    data[1].nim="A11.2010.01234";
    data[1].nama="Budi";
    data[1].jurusan="Sistem Informasi";
    data[1].tahun=2013;
    data[2].nim="A11.2000.01234";
    data[2].nama="Ali";
    data[2].jurusan="DKV\t\t";
    data[2].tahun=2003;
    data[3].nim="A11.1990.01234";
    data[3].nama="Siti";
    data[3].jurusan="Kesehatan\t";
    data[3].tahun=1993;
    cout<<"=-=-=-=-=-=-=Statis=-=-=-=-=-=-="<<endl;
    cout<<"    NIM\t\tNama\t   Jurusan\tTahun Lulus"<<endl;
    for(int i =0;i<4;i++){
    cout << data[i].nim<<"\t"<<data[i].nama<<"\t"<<data[i].jurusan<<data[i].tahun<<"\t"<<endl;
    }
    cout<<"=-=-=-=-=-=-=Dinamis=-=-=-=-=-=-="<<endl;
    cout<<"Masukan jumlah data = ";
    cin>>n;
    mhs2 data2[n];
    for(int i=0;i<n;i++){
        cout<<"NIM = ";
        cin>>data2[i].nim;
        cout<<"Nama = ";
        cin>>data2[i].nama;
        cout<<"Jurusan = ";
        cin>>data2[i].jurusan;
        cout<<"Tahun Lulus = ";
        cin>>data2[i].tahun;
    }
    cout<<"    NIM\t\tNama\t   Jurusan\tTahun Lulus"<<endl;
    for(int i =0;i<n;i++){
    cout << data2[i].nim<<"\t"<<data2[i].nama<<"\t"<<data2[i].jurusan<<"\t"<<data2[i].tahun<<"\t"<<endl;
    }
    return 0;
}
