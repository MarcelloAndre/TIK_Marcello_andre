#include <iostream>
using namespace std;

int main(){
    /* 
    jika nilai >= 90 maka lulus sangat memuaskan
    jika nilai >= 80 maka lulus  memuaskan
    jika nilai >= 75 cukup
    tidak boleh > 100
    tidak boleh < 0
    < 75 tidak lulus
    */
    int nilai;
    cout<<"Masukkan Nilai ="; cin>>nilai;
    if (nilai > 100) {
        cout<<"di luar jangkauan";
}
    else if (nilai >= 90) {
        cout<<"lulus sangat memuaskan";
}
    else if (nilai >= 80) {
        cout<<"lulus memuaskan";
}
    else if (nilai < 75) {
        cout<<"tidak lulus";
}
    else if (nilai < 0) {
        cout<<"di luar jangkauan";
}
    else  {
        cout<<"cukup";
}
    return 0;
}
