#include <iostream>

using namespace std;
double s1(double epsilon);
double s2(double epsilon);

int main()
{
    double x=0.0001;
    cout<<"Hello World"<<endl;
    cout<<"s1("<<x<<") = "<<s1(x)<<endl;
    cout<<"s2("<<x<<") = "<<s2(x)<<endl;
    return 0;
}

double s1(double epsilon){
    double sum=0;
    int number=1;
    while(1.0/(2.0*number -1.0) >epsilon){
        double element= 1.0/ (2.0*number -1.0);
        if(number % 2 == 0){
            element*=(-1);
        }
        sum+=element;
        number++;
    }
    return 4*sum;
}
/*
Proszę nie pisać dodatkowej funkcji do obliczania wartości silni. Zamiast tego
proszę wykorzystać wartość uzyskaną przy obliczaniu poprzedniego wyrazu
szeregu.
*/
double s2(double epsilon){
    double sum=1;
    int currentNumber=1;
    
    double previousFact=1;
    double currentFact=previousFact*currentNumber;
    
    while(1/currentFact>epsilon){
        currentFact=previousFact*currentNumber;
        double element= 1/ currentFact;
        sum+=element;
        currentNumber++;
        previousFact=currentFact;
    }
    return sum;
}