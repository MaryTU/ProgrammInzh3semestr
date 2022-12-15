#include <iostream>
using namespace std;

double f1(double n){
	if(n>100){
		return n*10;
	}
	return f1(n*3);
}

void f2(double (*func)(double)){
	cout<<func(5.5);
}
int main(){

    f2(f1);

}
