#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 15;
    int c = 27;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
 
    cout << "a <- 10 = " << a << endl;
    cout << "b <- 15 = " << b << endl;
    cout << "c <- 27 = " << c << endl;
    cout << "P1 <- a = " << p1 << endl;
    cout << "P2 <- b = " << p2 << endl;
    cout << "*P1 <- c = " << *p1 << endl;
    cout << "a <- *p2 = " << a << endl;
    *p2 = 6;
    cout << "b <- 6 = " << *p2 << endl;
    cout << "p3 <- &b = " << p2 << endl;
    cout << "p3 <- &c = " << p3 << endl;
    cout << "*p1 <- *p3 = " << *p3 << endl;
    
    cout <<endl;
    cout <<"OUTPUTNYA ADALAH"<<endl; 
	cout <<"------------------------------"<<endl;
    cout << "NILAI A ADALAH = " << a <<endl;
    cout << "NILAI B ADALAH = " << b <<endl;
    cout << "NILAI C ADALAH = " << c <<endl;
    cout << "NILAI p1 ADALAH = " << p1 <<endl;
    cout << "NILAI p2 ADALAH = " << p2 <<endl;
    cout << "NILAI p3 ADALAH = " << p3 <<endl;
    
    



    cin.get();
    return 0;

}
