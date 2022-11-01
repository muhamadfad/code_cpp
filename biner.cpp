#include <iostream>
#include<sstream>
#include <math.h>
using namespace std;


//fungsi untuk mengkonversi string menjadi integer
int konversi(string AA,int N)
{
    int hasil;
    stringstream temp_a;
    temp_a << AA[N];
    temp_a >> hasil;

return hasil;
}

int main()
{
string a;
int b;
int x,y,z,t,u,v,w,r;
int A,B,C,D,E,F,G,H;
cout<<"program mengubah biner ke desimal integer"<<endl;
cout<<"=============================="<<endl;
cout<<"masukan bilangan biner = ";cin>>a;
b = a.length();

x = konversi(a,0);
y = konversi(a,1);
z = konversi(a,2);
u = konversi(a,3);
t = konversi(a,4);
v = konversi(a,5);
w = konversi(a,6);
r = konversi(a,7);

if (b == 3){
    A=pow(x*2,2);
    B=pow(y*2,1);
    C=pow(2,0)*z;
    cout<<A+B+C;
}
if (b == 4){
    A=pow(x*2,3);
    B=pow(y*2,2);
    C=pow(z*2,1);
    D=pow(2,0)*t;
    cout<<A+B+C+D;
}

if (b == 5){
    A=pow(x*2,4);
    B=pow(y*2,3);
    C=pow(z*2,2);
    D=pow(t*2,1);
    E=pow(2,0)*u;
    cout<<A+B+C+D+E;
}

if (b == 6){
    A=pow(x*2,5);
    B=pow(y*2,4);
    C=pow(z*2,3);
    D=pow(t*2,2);
    E=pow(u*2,1);
    F=pow(2,0)*v;
    cout<<A+B+C+D+E+F;
}

if (b == 7){
    A=pow(x*2,6);
    B=pow(y*2,5);
    C=pow(z*2,4);
    D=pow(t*2,3);
    E=pow(u*2,2);
    F=pow(v*2,1);
    G=pow(2,0)*w;
    cout<<A+B+C+D+E+F+G;
}

if (b == 8){
    A=pow(x*2,7);
    B=pow(y*2,6);
    C=pow(z*2,5);
    D=pow(t*2,4);
    E=pow(u*2,3);
    F=pow(v*2,2);
    G=pow(w*2,1);
    H=pow(2,0)*r;
    cout<<A+B+C+D+F+G+H;
}


return 0;
}








