#include <iostream>

using namespace std;

bool isGenap(int a);
void find1(int A[],int n);

int main()
{
    int n;
    cout << "masukkan jumlah Array = ";cin >> n;
    int A[n];
    for(int a=0;a<n;a++){
        cout << "masukkan array index ke-"<< a+1 <<" = ";cin >>A[a];
    }

    cout << "\nArray = {";
    for(int a=0;a<n;a++){
        cout << A[a];
        if(a<n-1){
            cout << ",";
        }
    }cout << "}";

    cout << "\nmencari angka genap terkecil.....\n";
    find1(A,n);

    return 0;
}

bool isGenap(int a){
    return (a%2==0)? 1 : 0 ;
}

void find1(int A[],int n){
    int min = 10000,index;
    for(int a=0;a<n;a++){
        if(isGenap(A[a]) && min>A[a]){
            min = A[a];
            index = a;
        }
    }
    cout << "angka terkecil dari Array tersebut adalah = " << min << ", dengan index = " << index <<endl;
}
