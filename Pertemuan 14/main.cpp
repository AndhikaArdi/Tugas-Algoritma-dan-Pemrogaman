#include <iostream>
#include <chrono>
#include <iterator>

using namespace std;

void show(int arr[],int n);

void selection(int arr[], int n);
void insertion(int arr[], int n);
void bubble(int arr[], int n);

void complexity(int arr[], int n, void (*sort) (int[], int));

//--------------------------------------------------------------

int main()
{
    cout << "\t Bubble Sort\n" << endl;

    int arr[] = {2,4,9,5,7,3,12,8};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array Sebelum = ";
    show(arr,n);
    complexity(arr, n, &bubble);

    cout << "//.................................\n";
    //----------------------------------------------------------

    cout << "\n\t Selection Sort\n" << endl;

    int arr1[] = {2,4,9,5,7,3,12,8};
    int n1 = sizeof(arr1) / sizeof(int);

    cout << "Array Sebelum = ";
    show(arr1,n1);
    complexity(arr1, n1, &selection);

    cout << "//.................................\n";
    //----------------------------------------------------------

    cout << "\n\t Insertion Sort\n" << endl;

    int arr2[] = {2,4,9,5,7,3,12,8};
    int n2 = sizeof(arr2) / sizeof(int);

    cout << "Array Sebelum = ";
    show(arr2,n2);
    complexity(arr2, n2, &insertion);

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

void selection(int arr[], int n){
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=i; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void insertion(int arr[], int n){
    for(int i=1; i<n; i++){
        while(arr[i] < arr[i - 1] && i > 0){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
}

void bubble(int arr[], int n){
    for (int i=0; i< n-1; ++i){
        for (int j=0; j< n-1-i; ++j){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void complexity(int arr[], int n, void (*sort) (int[], int))
{
    auto start = chrono::steady_clock::now();

    int duplicate[n];
    copy (arr, arr + n, duplicate);
    sort(duplicate, n);

    auto end = chrono::steady_clock::now();

    //........................................

    cout << "Array Sesudah = ";
    show(duplicate,n);

    //........................................

    cout << "\nTook " << chrono::duration <double, milli>(end - start).count() << " ms ";
    cout << "and " << sizeof(duplicate) + sizeof(n) + sizeof(start) + sizeof(end) << " bytes" << endl;

    cout << endl;
}
