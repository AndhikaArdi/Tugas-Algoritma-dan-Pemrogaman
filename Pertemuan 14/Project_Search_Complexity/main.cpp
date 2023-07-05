#include <iostream>
#include <chrono>
#include <iterator>

using namespace std;

void show(int arr[],int n);

int Linear(int arr[],int low,int n,int key);
int Binary(int arr[], int low, int high, int key);

void complexity(int arr[], int n, int key, int (*search) (int[], int,int,int));

//--------------------------------------------------------------

int main()
{
    int arr[] = {2,4,9,5,7,3,12,8};
    int n = sizeof(arr) / sizeof(int);

    cout << "ARRAY = ";
    show(arr,n);
    cout << "\n//...........................................\n";

    cout << "\n\tLINEAR SEARCH \n";
    int key_L = 9;
    cout << "key = " << key_L << "\nhasil : ";
    complexity(arr, n, key_L, &Linear);

    cout << "\n\tBINARY SEARCH \n";
    int key_B = 12;
    cout << "key = " << key_B << "\nhasil : ";
    complexity(arr, n, key_B, &Binary);



    return 0;
}

void show(int arr[],int n){
    cout << "{";
    for(int a=0;a<n;a++){
        cout << arr[a];
        if(a<n-1){
            cout << ",";
        }
    }cout << "}\n";
}

int Linear(int arr[],int low,int n,int key) {
    for (int i=0; i<n ;i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int Binary(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }//...............END WHILE....................
    return -1;
}

void complexity(int arr[], int n, int key, int (*search) (int[], int,int,int))
{
    auto start = chrono::steady_clock::now();

    int duplicate[n];
    copy (arr, arr + n, duplicate);
    int result = search(duplicate,0, n,key);

    auto end = chrono::steady_clock::now();

    //........................................

    if (result == -1) {
        cout << "Nilai " << key << " tidak ditemukan dalam array." << endl;
    } else {
        cout << "Nilai " << key << " ditemukan pada indeks ke-" << result << "." << endl;
    }

    //........................................

    cout << "\nTook " << chrono::duration <double, milli>(end - start).count() << " ms ";
    cout << "and " << sizeof(duplicate) + sizeof(n) + sizeof(start) + sizeof(end) << " bytes" << endl;

    cout << endl;
}
