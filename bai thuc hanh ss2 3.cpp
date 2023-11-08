//1 tai thu vien
#include <stdio.h>
#include <math.h> //cong thuc toan hoc
//2 tao ham main de chay chuong trinh
int main(){
	//3 Khai bao va khoi tao bien number1, number2
	int number1 = 9;
	int number2 = 6;
	//4 tinh tong, hieu, nhan, chia, so du cua 2 so...
	int sum = number1 + number2;
	int sub = number1 - number2;
	int mul = number1 * number2;
	//Thuong 2 so, lam tron len, lam tron xuong..
	int devide = number1 / number2;
	int devide_ceil = ceil((double)number1 / (double)number2);
	int devide_floor = floor((double)number1 / (double)number2);
	// so du 
	int surplus = number1 % number2;
	//5 tang number1 len 1, giam number2 xuong 1
	number1++;
	number2--;
	//6 tinh number1 luy thua number2
	int result = pow(number1, number2);
	
}
