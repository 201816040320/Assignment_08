#include <iostream>

using namespace std;

template <class T>
bool isEqualTo(T &a,T &b)
{
    if(a==b)
        return true;
    else
        return false;
}

template <class T>
class sss
{


public:
    T z;
    sss(T a = 0)
    {
        z=a;
    }
    bool operator==(sss &right)
    {
        if(z==right.z)
            return true;
        else
            return false;
    }
};
int main()
{
    int a=3,b=5;
    double c=5.0,d=5.0;
    sss< int > r(1),R(1);
    sss< double > y(5.0), Y(5.0);
    isEqualTo(a,b)?cout <<"相等"<<endl:cout<<"不相等"<<endl;
    isEqualTo(c,d)?cout <<"相等"<<endl:cout<<"不相等"<<endl;
    isEqualTo(r,R)?cout <<"相等"<<endl:cout<<"不相等"<<endl;
    isEqualTo(y,Y)?cout <<"相等"<<endl:cout<<"不相等"<<endl;

}
