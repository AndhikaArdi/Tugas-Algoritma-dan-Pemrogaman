#include <iostream>

using namespace std;
enum musim{kemarau,penghujan};
musim cuaca;
int main()
{
    cuaca = kemarau;
    cout << cuaca << endl;
    cuaca = penghujan;
    cout << cuaca << endl;
    return 0;
}
