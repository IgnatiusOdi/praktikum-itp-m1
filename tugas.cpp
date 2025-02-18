#include <iostream>
using namespace std;
int main()
{
	int n;
    cout<<"======================================="<<endl;
    cout<<"|       Let's Play With Numbers       |"<<endl;
    cout<<"======================================="<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"  Masukkan 8 Digit Angka : "; cin>>n;
    cout<<"|                                     |"<<endl;
    cout<<"======================================="<<endl;
    cout<<"| Data Digit                          |"<<endl;
    cout<<"======================================="<<endl;
    
    int n1 = n/10000000;
    int n2 = n/1000000%10;
    int n3 = n/100000%10;
    int n4 = n/10000%10;
    int n5 = n/1000%10;
    int n6 = n/100%10;
    int n7 = n/10%10;
    int n8 = n%10;
    
    int dgj = n1*1000+n3*100+n5*10+n7;
    int dgn = n2*1000+n4*100+n6*10+n8;
    int hsl = dgj + dgn;
    int gj = n1%2 + n2%2 + n3%2 + n4%2 + n5%2 + n6%2 + n7%2 + n8%2;
    int gn = (n1+1)%2 + (n2+1)%2 + (n3+1)%2 + (n4+1)%2 + (n5+1)%2 + (n6+1)%2 + (n7+1)%2 + (n8+1)%2;
    
    cout<<"| Digit 1 : "<<n1<<"      | Digit 5 : "<<n5<<"      |"<<endl;
    cout<<"| Digit 2 : "<<n2<<"      | Digit 6 : "<<n6<<"      |"<<endl;
    cout<<"| Digit 3 : "<<n3<<"      | Digit 7 : "<<n7<<"      |"<<endl;
    cout<<"| Digit 4 : "<<n4<<"      | Digit 8 : "<<n8<<"      |"<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"| Digit Ganjil : "<<n1<<", "<<n3<<", "<<n5<<", "<<n7<<"           |"<<endl;
    cout<<"| Digit Genap  : "<<n2<<", "<<n4<<", "<<n6<<", "<<n8<<"           |"<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"  Hasil        : "<<hsl<<"                 "<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"======================================="<<endl;
    cout<<"| Data Angka                          |"<<endl;
    cout<<"======================================="<<endl;
    cout<<"| Ganjil  : "<<gj<<"      | Genap   : "<<gn<<"      |"<<endl;
    cout<<"=======================================";

    return 0;
}
