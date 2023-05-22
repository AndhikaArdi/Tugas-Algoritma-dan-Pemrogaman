#include <iostream>

using namespace std;

void show(int A[],int n);
void bubble(int A[],int n);
void selection(int B[],int n);

int main()
{
    int A[]={5,6,3,4,1,2};
    int n = sizeof(A)/sizeof(int);
    bubble(A,n);
    show(A,n);

    int B[]={5,6,3,4,1,2};
    int m = sizeof(B)/sizeof(int);
    selection(B,m);
    show(B,m);

    return 0;
}

void show(int A[],int n){
    cout << "Array setelah di sorting = {";
    for(int a=0;a<n;a++){
        cout << A[a];
        if(a<n-1){
            cout << ",";
        }
    }
    cout << "}\n";
}

void bubble(int A[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-i-1;j++){
            if(A[j]<A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
}

void selection(int B[],int n){
    for(int i=0;i<n-1;i++){
        int low=i;
        for(int j=i+1;j<n;j++){
            if(B[j]>B[low]){
                swap(B[j],B[low]);
            }
        }
    }
}
