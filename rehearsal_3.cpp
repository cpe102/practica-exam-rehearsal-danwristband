#include <iostream>
#include<cmath>
using namespace std;

double sumSqrt(double N) {
    
    if(N>0){
        int i=1;
        double sum;
        
        while(N+1>i) {
    
        sum=1/pow(i,0.5);
        i++;
        return sum ;

    
         }
      
    }
    else{
        return 0;
    }
}


int main()
{
    double a = sumSqrt(-5);
    double b = sumSqrt(3);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout<< a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
