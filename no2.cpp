#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int agk1,agk2,mode;
    double s,kll;
    cout<<"Masukkan angka 1     : ";
    cin>>agk1;
    cout<<"Masukkan angka 2     : ";
    cin>>agk2;
    cout<<"Masukkan mode        : ";
    cin>>mode;
    s = sqrt(pow(agk1,2)+pow((agk2/2),2));
    kll = (mode%2)*(agk2+2*s) + (mode-1)*(2*(agk1+agk2));
    cout<<"Keliling bangunan    : "<<kll;
    return 0;
}
