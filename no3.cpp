#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int xs,ys,xd,yd;
    double hasil;
    cout<<"x1       : ";
    cin>>xs;
    cout<<"y1       : ";
    cin>>ys;
    cout<<"x2       : ";
    cin>>xd;
    cout<<"y2       : ";
    cin>>yd;
    hasil = sqrt(pow((yd-ys),2)+pow((xd-xs),2));
    cout<<"Hasil    : "<<hasil;
    return 0;
}
