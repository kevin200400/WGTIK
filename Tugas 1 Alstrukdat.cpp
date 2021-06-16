#include <iostream>
#include <iomanip>
using namespace std;
int arrT[] = {1, 2, 3};
int lenarrT = sizeof (arrT)/sizeof (int); //mengetahui banyaknya elemen pada array
int functiontotal (int* arrT) {
	int temp = 0;
	for (int i = 0; i<lenarrT; i++) {
		temp = temp + arrT[i];
	}
	return temp;
}
int main (){
	for (int i = 0; i<lenarrT; i++) {
		cout<<arrT[i]<<" ";
	}
	cout<<endl<<functiontotal (arrT);
	return 0;
}
