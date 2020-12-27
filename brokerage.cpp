//Needs correction in printing part, as many absurd values are getting printed

#include<bits/stdc++.h>
using namespace std;

long double intra(long double n, long double i){
    long double k, l, y, m, x;
    k = 0.00025*n;
    l = 2*0.000032*n;
    y = 0.00003*n;
    m = 0.18*(l+y)*2;
    x = 0.00003*n*2;
    i = k+l+y+m+x+n;
    return i;
}
long double deliv(long double n, long double d){
    long double kd, ld, md, xd;
    kd = 2*0.0011*n;
    ld = 2*0.000032*n;
    md = 2*0.18*ld;
    xd = 0.00015*n;
    d = kd+ld+md+xd+15;
    return d;
}
int main(){
    long double a, b, n, i, d, z, w;
    cout<<"Enter current price: ";
    cin>>a;
    cout<<"Enter quantities: ";
    cin>>b;
    n = a*b;
    intra(n,i);
    z=i/b;
    deliv(n,d);
    w=d/b;
    cout<<"Intraday total is "<<i<<" with individual price at: "<<z<<endl;
    cout<<"Delivery total is "<<i<<" with individual price at: "<<w<<endl;
}
