#include <iostream>

using namespace std;

int main()
{
    int agk1,agk2,a1,a2,a3,a4,a5,a6,hasil;
    cout << "Masukkan angka		: ";
    cin>>agk1;
    a1 = agk1/100000;
    a2 = agk1/10000%10;
    a3 = agk1/1000%10;
    a4 = agk1/100%10;
    a5 = agk1/10%10;
    a6 = agk1%10;
    agk2 = a6*100000+a5*10000+a4*1000+a3*100+a2*10+a1;
    hasil = a6*a5+a5*a4+a4*a3+a3*a2+a2*a1+a1*a6;
    cout<<"Angka terbalik   	: "<<agk2<<endl;
    cout<<"Hasil angka      	: "<<a6<<"*"<<a5<<" + "
    <<a5<<"*"<<a4<<" + "<<a4<<"*"<<a3<<" + "<<a3<<"*"<<a2<<" + "
    <<a2<<"*"<<a1<<" + "<<a1<<"*"<<a6<<" = "<<hasil;

    return 0;
}
