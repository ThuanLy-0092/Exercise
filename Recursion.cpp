#include<iostream>
using namespace std;
int demchuso(int n); //Khai bao 2 ham lai o tren de tai su dung ham
int luyThua(int m, int n);
//Bai1
float tinhSn1(int n)   //Ham tinh Sn1 (Baitap1)
{
	if (n == 1) {     //dieu kien dung 
		return 1;
	}
	else {
		return ((float)1) / n + tinhSn1(n - 1);  //goi de quy de truy xuat va tinh toan cac phan tu truoc do
	}
}
//Bai2
int tinhSn2(int n) { //Ham thuc hien phep tinh Sn2( Baitap 2)
	if (n == 1) {  //tuong tu bai 1
		return 2;
	}
	else {
		return n * (n + 1) + tinhSn2((n - 1));
	}
}
//Bai3
int fibo(int n) {   //Ham tim chu so fibo thu n
	if (n <= 1) {    //dieu kien dung nhu vay vi so dau tien cua day la 1
		return n;
	}
	else {
		return fibo(n - 2) + fibo(n - 1);   //truy xuat den 2 phan tu truoc do de tinh tong
	}
}
void printFibo(int n) {  //Ham in n chu so fibo
	for (int i = 1; i <= n; i++) { //Ham de in n so fibo dau tien
		cout<<fibo(i)<<" ";
	}
}
//Bai4 
int daoNguoc(int n) { //Ham dao nguoc so
	int kq =0;
	if (n == 0) {  //dieu kien dung neu so = 0 se tra ve ket qua 0 va ket thuc vong lap
		return 0;
	}
	else {
		return kq += (n % 10) * luyThua(10,demchuso(n)-1) + daoNguoc(n / 10);      //dung de quy de dao nguoc so
	}
}
//Bai5
int demchuso(int n) {   //Ham dem so chu so 
	if (n < 10) {   //dieu kien dung neu so be hon 10 tra ve 1 chu so
		return 1;
	}
	else {
		return 1 + demchuso(n / 10);   //sau moi vong lap tien hanh dem 1 chu so r chia so do cho 10
	}
}
//Bai6
int soNhiPhan(int n) {  //Ham chuyen doi so thap phan sang nhi phan
	if (n == 0) {  //dieu kien dung neu so do =0 se tra ve 0
		return 0;
	}
	else {
		return soNhiPhan(n / 2) * 10 + n % 2; // sau moi vong lap lay n/2 va tinh so du. De quy hoat dong theo quy tac LIFO nen ta se 
	}                                         //khong can dao nguoc so       
}
//Bai7
int uocChungLonNhat(int a, int b) { //Ham tinh uoc chung lon nhat cua 2 so a va b
	if (b == 0) { //Dieu kien dung neu so nhap vao =0
		return a;
}
	else {
		return uocChungLonNhat(b, a % b);       //tien hanh theo thuat toan Euclid
	}
}
//Bai8
int boiChungNhoNhat(int a, int b) {   //Ham tinh boi chung nho nhat cua 2 so
	return (a * b) / uocChungLonNhat(a,b);     //Ap dung theo cong thuc
}
//Bai9
int luyThua(int m, int n) {  //Ham tinh luy thua m^n
	if (n == 0) {   //dieu kien dung neu so mu =0
		return 1;
	}
	else {
		return m * luyThua(m, n - 1);  //sau moi vong lap tien hanh nhan m voi chinh no
	}
}

int main() {
	int n;
	cout << "\nMoi nhap so n: ";
	cin >> n;
//B1	
	
	cout << "\nSn1 = ";
	cout << tinhSn1(n);

//B2
	cout << "\nSn2 = ";
	cout << tinhSn2(n);
	
//B3
	cout << "\nn chu so fibo dau tien la: ";
	printFibo(n);

//B4	
	cout << "\nDao nguoc chu so n vua nhap vao:";
	cout<<daoNguoc(n);

//B5	
	cout << "\n Dem so chu so cua n:";
	cout << demchuso(n);
	
//B7	
	cout << "\nSo n sau khi chuyen qua so nhi phan la:";
	cout << soNhiPhan(n);
	
	int a, b;
	cout << "\nMoi nhap so a:";
	cin >> a;
	cout << "\nMoi nhap so b:";
	cin >> b;
//B6	
	cout << "\nUoc chung lon nhat cua a va b la: ";
	cout<<uocChungLonNhat(a, b);

//B8
	cout << "\nBoi chung nho nhat cua cua a va b la: ";
	cout << boiChungNhoNhat(a, b);

//B9	
	cout << "\nLuy thua cua a va b vua nhap vao la: ";
	cout << luyThua(a, b);
}