//1. Tao chuong trinh
#include<stdio.h>
#include<math.h>
//2. Tao main
int main(){
	//3. Khai bao va khoi tao cac bien theo yeu cau 
	float edge_square = 2;//canh hinh vuong
	float edge_length = 5;//chieu dai chu nhat
	float width_length = 3;//chieu rong chu nhat 3
	float radius_circle = 4;//ban kinh duong tron
	//khai bao hang so PI
	const float PI = 3.14;
	//Tinh chu vi dien tich cac hinh 
	float area_perimeter = edge_square*4;//chu vi hinh vuong 
	float area_square = edge_square*edge_square;//dien tich hinh vuong 
	float rectangular_perimeter = (edge_length + width_length)*2;//chu vi chu nhat 
	float rectangular_area = edge_length*width_length;//dien tich chu nhat 
	float diameter_of_a_ircle = (radius_circle*2)*PI;//chu vi hinh tron
	float circle_area = (radius_circle*radius_circle)*PI;//dien tich hinh tron
}
