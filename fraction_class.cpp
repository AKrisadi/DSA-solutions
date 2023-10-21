#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

    // Complete the class
    int num;

    int den;

    public:

    Fraction(int n,int d){

        num=n;

        den=d;

    }

    void add(Fraction &f1){

        this->num=this->num*f1.den + this->den*f1.num;

        this->den=this->den*f1.den;

        

    }

    void multiply(Fraction & f1){

        this->num=this->num*f1.num;

        this->den=this->den*f1.den;

    }

 

    void simplify(){

        int comm=__gcd(num,den);;

        num=num/comm;

        den=den/comm;

    }

 

    void print(){

        cout<<num<<"/"<<den<<endl;

    }

};

int main() {

    int n,d;

    cin>>n>>d;

    Fraction f(n,d);

    int count;

    cin>>count;

    while(count){

        int op;

        cin>>op;

        switch(op){

            case 1: {

                int a,b;

                cin>>a>>b;

                Fraction f1(a,b);

                f.add(f1);

                f.simplify();

                f.print();

                break;

 

            }

            case 2: {

                int a,b;

                cin>>a>>b;

                Fraction f1(a,b);

                f.multiply(f1);

                f.simplify();

                f.print();

                break;

            }

        }

        count--;

    }

    return 0;
}
