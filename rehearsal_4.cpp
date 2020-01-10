#include <iostream>
#include<string>
using namespace std;

    string compress(string N){
        string sum="";
        int count=0;
        while (count<N.size())
        {
            sum=sum+N[count];
            count+=3;
        }
        return sum;
    }

int main()
{
    string a = compress("CPECMU");
    string b = compress("X");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
