#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"
void areEquals(double expected, double got){
	if(expected != got){
	
		std::cout << "Expected = " << expected << "but got value" <<
		got << "\n";
	}


}

int main(){
	areEquals(4, pow(2.0, 2));
	areEquals(4, add(2,2));
	areEquals(16, multiply(4, 4));
	std::cout << "End of test!" << std::endl;
	return 0;
}
