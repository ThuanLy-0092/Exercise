#include <iostream>
#define max 20
struct PhanSo {
	int tu;
	int mau;
	float giatri;
};
struct MaTranPhanSo{
	PhanSo s[max][max];
	int m;    //So dong
	int n;    //So cot
};

using namespace std;
void printMenu();
int Xn1(int n);
int Xn2(int n);
void swap(int* x, int* y);
int sum(int* x, int* y);
void nhapMang(int a[100], int& n);
int tongMang(int* b, int n);
void nhapChuoi(char s[]);
int demKyTu(char* s);
int demKyTuChu(char* s);
void ghep2Chuoi(char* s1, char* s2);
void demNguyenAmVaPhuAm(char* s);
float Max(float* i, float* j, float* k);
float Min(float* i, float* j, float* k);
void nhapPhanSo(PhanSo& s);
void nhapMaTranPhanSo(MaTranPhanSo& s);
void xuatPhanSo(PhanSo s);
void xuatMaTranPhanSo(MaTranPhanSo s);
int UCLN(int a, int b);
PhanSo rutGon(PhanSo& s);
PhanSo tinhGiaTri(PhanSo& s);
MaTranPhanSo tinhGiaTriMaTran(MaTranPhanSo& mps);
void kiemTraMaTranVuong(MaTranPhanSo mps);
bool kiemTraMaTranDoiXung(MaTranPhanSo mps);
MaTranPhanSo maTranChuyenVi(MaTranPhanSo mps);
void xuatDinhThucCap1(PhanSo a);
void nhapMaTranPhanSo2(MaTranPhanSo& s);
PhanSo tichPhanSo(PhanSo a, PhanSo b);
PhanSo hieuPhanSo(PhanSo a, PhanSo b);
PhanSo tongPhanSo(PhanSo a, PhanSo b);
void timDinhThucCap2(MaTranPhanSo s);
void nhapMaTranPhanSo3(MaTranPhanSo& s);
MaTranPhanSo maTranMoRong(MaTranPhanSo s);
PhanSo tong3DuongCheoHuyen(PhanSo* b);
PhanSo tong3DuongCheoHuyen(PhanSo* b);
PhanSo tong3DuongCheoSac(PhanSo* b);
MaTranPhanSo maTranMoRong(MaTranPhanSo s);
PhanSo tong3DuongCheoHuyen(PhanSo b[]);
PhanSo tong3DuongCheoSac(PhanSo b[20]);
void timDinhThucCap3(MaTranPhanSo s);
void timMaTranBacThang(MaTranPhanSo& a);
int tinhHangMaTran(MaTranPhanSo s);
void tong2MaTran(MaTranPhanSo a, MaTranPhanSo b);
void tich2MaTran(MaTranPhanSo a, MaTranPhanSo b);
int main() {
	int choice;
	int v;
	int s1, s2;
	int* ptr1 = &s1;
	int* ptr2 = &s2;
	int m;
	int a[100];
	int* b = a;
	char* x = new char[100000];
	char* a1 = new char[100000];
	char* a2 = new char[100000];
	char* s = new char[100];
	float i, j, k;
	float* i1 = &i;
	float* j1 = &j;
	float* k1 = &k;
	MaTranPhanSo mps1;
	MaTranPhanSo mps2;
	PhanSo d;
	MaTranPhanSo mps4;
	mps4.m = 2;
	mps4.n = 2;
	MaTranPhanSo mps5;
	mps5.m = 3;
	mps5.n = 3;
	do {
		printMenu();
		cout << "\nMoi nhap lua chon cua ban:";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			// Code cho tinh Xn bang de quy
			cout << "\nBai1.1";
			cout << "\nXin moi nhap n:";
			cin >> v;
			cout << "\nTinh Xn dung de quy = ";
			cout << Xn1(v);
		
			break;
		case 2:
			system("cls");
			// Code cho tinh Xn khong dung de quy
			cout << "\nBai1.2";
			cout << "\nXin moi nhap n:";
			cin >> v;
			cout << "\nTinh Xn khong dung de quy = ";
			cout << Xn2(v);
			break;
		case 3:
			system("cls");
			// Code cho doi cho (swap) 2 so
			cout << "\n\nBai 2.1";
			cout << "\nMoi nhap so thu 1: ";
			cin >> s1;
			cout << "\nMoi nhap so thu 2: ";
			cin >> s2;
			swap(ptr1, ptr2);
			cout << "\nSo thu 1 sau khi doi cho:" << s1;
			cout << "\nSo thu 2 sau khi doi cho:" << s2;
			break;
		case 4:
			system("cls");
			// Code cho cong 2 so
			cout << "\nMoi nhap so thu 1: ";
			cin >> s1;
			cout << "\nMoi nhap so thu 2: ";
			cin >> s2;
			cout << "\n\nBai 2.2";
			cout << "\nTong 2 so vua nhap la: " << sum(ptr1, ptr2);
			break;
		case 5:
			system("cls");
			// Code cho tinh tong cac phan tu trong mang mot chieu
			cout << "\n\nBai 2.3";
			cout << "\nMoi nhap so phan tu cua mang:";
			cin >> m;
			nhapMang(a, m);
			cout << "\nTong mang ban vua nhap la:" << tongMang(b, m);
			break;
		case 6:
			system("cls");
			// Code cho dem so ki tu trong chuoi
			cin.ignore();
			cout << "\n\nBai 2.4";
			cout << "\nMoi nhap chuoi:";
			nhapChuoi(x);
			cout << demKyTu(x);
			break;
		case 7:
			system("cls");
			// Code cho ghep 2 chuoi
			cout << "\n\nBai 2.5";
			cout << "\nMoi nhap chuoi 1:";
			nhapChuoi(a1);
			cout << "\nMoi nhap chuoi 2:";
			nhapChuoi(a2);
			ghep2Chuoi(a1, a2);
			break;
		case 8:
			system("cls");
			// Code cho dem so nguyen am va phu am trong chuoi
			cin.ignore();
			cout << "\n\nBai 2.6";
			cout << "Moi nhap chuoi:";
			nhapChuoi(s);
			demNguyenAmVaPhuAm(s);
			break;
		case 9:
			system("cls");
			// Code cho tim so lon nhat va nho nhat trong 3 so
			cout << "\n\nBai 2.7";
			cout << "\nMoi nhap 3 so bat ki:";
			cout << "\nMoi nhap so thu 1:";
			cin >> i;
			cout << "\nMoi nhap so thu 2:";
			cin >> j;
			cout << "\nMoi nhap so thu 3:";
			cin >> k;
			cout << "\nSo lon nhat trong 3 so la: " << Max(i1, j1, k1);
			cout << "\nSo be nhat trong 3 so la: " << Min(i1, j1, k1);
			break;
		case 10:
			system("cls");
			// Code cho nhap va xuat ma tran phan so
			cout << "\n\nBai 3.1";
			nhapMaTranPhanSo(mps1);
			xuatMaTranPhanSo(mps1);
			break;
		case 11:
			system("cls");
			// Code cho kiem tra ma tran vuong
			cout << "\n\nBai 3.2";
			nhapMaTranPhanSo(mps2);
			kiemTraMaTranVuong(mps2);
			break;
		case 12:
			system("cls");
			// Code cho kiem tra ma tran doi xung
			cout << "\n\nBai 3.3";
			nhapMaTranPhanSo(mps2);
			if (kiemTraMaTranDoiXung(mps2) == true) {
				cout << "\nDay la ma tran doi xung";
			}
			else {
				cout << "\nDay khong phai la ma tran doi xung";
			}
			break;
		case 13:
			system("cls");
			// Code cho tinh dinh thuc ma tran
			cout << "\n\nBai 3.4";
			//Cap1
			PhanSo d;
			cout << "\nMoi nhap ma tran cap 1";
			nhapPhanSo(d);
			cout << "\nDinh thuc cua ma tran cap 1 la:";
			xuatPhanSo(d);

			//Cap2
			cout << "\n\nCap 2";
			cout << "\nMoi nhap ma tran cap 2";
			nhapMaTranPhanSo2(mps4);
			timDinhThucCap2(mps4);

			//Cap3
			cout << "\n\nCap 3";
			cout << "\nMoi nhap ma tran cap 3";
			nhapMaTranPhanSo3(mps5);
			timDinhThucCap3(mps5);
			break;
		case 14:
			system("cls");
			// Code cho bien doi ma tran thanh ma tran bac thang
			cout << "\nBai 3.5";
			nhapMaTranPhanSo(mps1);
			timMaTranBacThang(mps1);
			break;
		case 15:
			system("cls");
			// Code cho tinh hang cua ma tran
			cout << "\nBai3.6";
			MaTranPhanSo mps1;
			cout << "\nMoi nhap ma tran:";
			nhapMaTranPhanSo(mps1);
			timMaTranBacThang(mps1);
			cout << "\nHang cua ma tran vua nhap la:";
			cout<<tinhHangMaTran(mps1);
			break;
		case 16:
			system("cls");
			// Code cho tinh tong va tich cua 2 ma tran
			cout << "\nBai 3.7";
			cout << "\nMoi nhap ma tran A:";
			nhapMaTranPhanSo(mps1);
			cout << "\nMoi nhap ma tran B:";
			nhapMaTranPhanSo(mps2);
			tong2MaTran(mps1, mps2);
			tich2MaTran(mps1, mps2);
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		}
	} while (choice);

	return 0;
}


//B1 DeQuy

void printMenu() {
	cout << "\n\nThom ngon moi ban an nha:";
	cout << "\nDE QUY:\n";
	cout << "1. Tinh Xn bang de quy\n";
	cout << "2. Tinh Xn khong dung de quy\n";
	cout << "\nCON TRO:\n";
	cout << "3. Doi cho (swap) 2 so\n";
	cout << "4. Cong 2 so\n";
	cout << "5. Tinh tong cac phan tu trong mang mot chieu\n";
	cout << "6. Dem so ki tu trong chuoi\n";
	cout << "7. Ghep 2 chuoi\n";
	cout << "8. Dem so nguyen am va phu am trong chuoi\n";
	cout << "9. Tim so lon nhat va nho nhat trong 3 so\n";
	cout << "\nMA TRAN PHAN SO:\n";
	cout << "10. Viet chuong trinh cho phep nhap va xuat ma tran phan so A co m dong va n cot\n";
	cout << "11. Kiem tra xem A co phai ma tran vuong hay khong\n";
	cout << "12. Kiem tra xem ma tran A co phai la ma tran doi xung khong\n";
	cout << "13. Tinh dinh thuc cua ma tran A trong cac truong hop cap cua A la 1, 2 va 3\n";
	cout << "14. Bien doi ma tran A thanh ma tran bac thang\n";
	cout << "15. Tinh hang cua ma tran A\n";
	cout << "16. Tinh tong va tich cua 2 ma tran\n";
}
int Xn1(int n) {
	int sum = 0;
	if (n <= 1) {  //Dieu kien dung cua dequy
		return 1;
	}
	else {
		for (int i = n; i >= 0; i--) {      //neu n > 1 thi dung de quy phi tuyen de tinh Xn
			sum += i * Xn1(i - 1);
		}
	}
	return sum;
}
 //B1 Ko dung De Quy
int Xn2(int n) {
	if (n <= 1) {
		return 1;    // X0,X1 =1
	}
	int temp = 3;   
	for (int i = 3; i <= n; i++) {   //Vong lap duoc gui de tinh Xn voi n>=2
		temp = temp * (i + 1);
	}
	return temp;
}


//B2 Con tro
//2.1
void swap(int* x, int* y) {    //Ham doi cho 2 so
	int  t =*x;        //*x va *y truy xuat den o gia tri ma 2 con tro nay tro toi de tien hanh doi cho           
	*x = *y;
	*y = t;

}

//2.2
int sum(int* x, int* y) {  //Ham tinh tong 2 so
	int sum = *x + *y;      //tien hanh cong 2 gia tri trong o gia tri ma 2 con tro tro toi
	return sum;
}
//2.3
void nhapMang(int a[100], int& n) {    //Ham nhap mang
	for (int i = 0; i < n; i++) {
		cout << "Moi nhap phan tu a[" << i << "]:";
		cin >> a[i];
	}
}
int tongMang(int* b,int n) { //Ham tinh tong mang
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += b[i];
	}
	return sum;
}
//2.4
void nhapChuoi(char* s) {   //Ham nhap chuoi
	cin.getline(s, 100000);
}
int demKyTu(char* s) {      //Ham dem ki tu cua chuoi
	int n = 0;
	while (*s != '\0') {   //vong lap duoc goi de tien hanh dem
		n++;
		s++;
	}
	return n;
}
//2.5
void ghep2Chuoi(char* s1,char* s2) {
	int n1 = demKyTu(s1);
	int n = demKyTu(s1) + demKyTu(s2);
	for (int i = n1; i < n; i++) {
		*(s1+i) = *s2;
		s2++;
	}
	*(s1 + n) = '\0';
	cout << "\nChuoi sau khi ghep:" << s1;
}
//2.6
int demKyTuChu(char* s) {      //Ham dem ki tu cua chuoi
	int n = 0;
	while (*s != '\0') {   //vong lap duoc goi de tien hanh dem
		if ((*s <= 122 && *s >= 97) || (*s <= 90 && *s >= 65)) {
			n++;
		}
		s++;
	}
	return n;
}
void demNguyenAmVaPhuAm(char* s) {
	int dem = 0;
	int n = demKyTuChu(s);
	while (*s != '\0') {
		if (*s == 'u' || *s == 'e' || *s == 'o' || *s == 'a' || *s == 'i' ||*s =='I'||*s=='U'||*s=='E'||*s=='O'||*s=='A') {
			dem++;
		}
		s++;
	}
	cout << "So nguyen am: "<< dem;
	cout << "So phu am: " << n - dem;
}
//2.7
float Max(float* i, float* j, float* k) {    //Ham tim so lon nhat trong 3 so
	if ((*i > *j) && (*i > *k)) {      //dung gia tri cua o ma con tro tro toi de so sanh
		return *i;
	}
	if ((*j > *i) && (*j > *k)) {
		return *j;
	}
	if ((*k > *j) && (*k > *i)) {
		return *k;
	}
}
float Min(float* i, float* j, float* k) {    //Ham tim so be nhat trong 3 so
	if ((*i < *j) && (*i < *k)) {       //Nhu ham tren
		return *i;
	}
	if ((*j < *i) && (*j < *k)) {
		return *j;
	}
	if ((*k < *j) && (*k < *i)) {
		return *k;
	}
}

//B3
//3.1
void nhapPhanSo(PhanSo& s) {        //Ham nhap phan so
	cout << "\nMoi nhap tu:";
	cin >> s.tu;
	cout << "\nMoi nhap mau:";
	do {
		cin >> s.mau;
	} while ((s.mau == 0) && cout << "Moi nhap mau khac 0:");
}
void nhapMaTranPhanSo(MaTranPhanSo& s) {     //Ham nhap ma tran phan so
	cout << "\nMoi nhap so dong ma tran:";
	cin >> s.m;
	cout << "\nMoi nhap so cot ma tran:";
	cin >> s.n;
	for (int i = 0; i < s.m; i++) {
		for (int j = 0; j < s.n; j++) {
			cout << "\nMoi nhap phan so vao vi tri a[" << i << "]" << "[" << j << "]:";
			nhapPhanSo(s.s[i][j]);
		}
	}
}
void nhapMaTranPhanSo2(MaTranPhanSo& s) {     //Ham nhap ma tran phan so 2x2
	cout << "\n\nMoi nhap gia tri cho ma tran cap 2";
	for (int i = 0; i < s.m; i++) {
		for (int j = 0; j < s.n; j++) {
			cout << "\nMoi nhap phan so vao vi tri a[" << i << "]" << "[" << j << "]:";
			nhapPhanSo(s.s[i][j]);
		}
	}
}
void nhapMaTranPhanSo3(MaTranPhanSo& s) {     //Ham nhap ma tran phan so 3x3
	cout << "\n\nMoi nhap gia tri cho ma tran cap 3";
	for (int i = 0; i < s.m; i++) {
		for (int j = 0; j < s.n; j++) {
			cout << "\nMoi nhap phan so vao vi tri a[" << i << "]" << "[" << j << "]:";
			nhapPhanSo(s.s[i][j]);
		}
	}
}
void xuatPhanSo(PhanSo s) {     //Ham xuat phan so
	rutGon(s);
	if (s.tu == 0) {
		cout << "0";
	}
	else if (s.tu == s.mau) {
		cout << "1";
	}
	else if (s.mau == 1) {
		cout << s.tu;
	}
	else {
		cout << s.tu << "/" << s.mau;
	}
}
void xuatMaTranPhanSo(MaTranPhanSo s) {      //Ham xuat ma tran phan so
	for (int i = 0; i < s.m; i++) {
		cout << "\n";
		for (int j = 0; j < s.n; j++) {
			xuatPhanSo(s.s[i][j]);
			cout << "  ";
		}
	}
}
int UCLN(int a, int b) { //Ham tim uoc chung lon nhat
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	if (a == 0) {
		return b;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		if (b > a) {
			b -= a;
		}
	}
	return b;
}
PhanSo rutGon(PhanSo& s) {   //Ham rut gon phan so
	int t = UCLN(s.tu, s.mau);
	s.tu = s.tu / t;
	s.mau = s.mau / t;
	return s;
}
PhanSo tinhGiaTri(PhanSo& s) {    //Ham tinh gia tri phan so
	s.giatri = s.tu * 1.0 / s.mau;
	return s;
}
MaTranPhanSo tinhGiaTriMaTran(MaTranPhanSo& mps){  //Ham tinh gia tri cua ma tran phan so
	for (int i = 0; i < mps.m; i++) {
		for (int j = 0; j < mps.n; j++) {
			tinhGiaTri(mps.s[i][j]);
		}
}
	return mps;
}//B3.2
void kiemTraMaTranVuong(MaTranPhanSo mps) {    //Ham kiem tra ma tran vuong
	if (mps.m == mps.n) {
		cout << "\nDay la ma tran vuong";
	}
	else {
		cout << "\nDay khong phai ma tran vuong";
	}
}
//B3.3
MaTranPhanSo maTranChuyenVi(MaTranPhanSo mps) {        //Ham tim ma tran chuyen vi
	MaTranPhanSo mps1;    //Khai bao 1 ma tran phan so
	PhanSo mps2[400];            //khai bao 1 mang 1 chieu kieu phan so
	int t = 0;
	for (int i = 0; i < mps.m; i++) {       //vong lap duoc goi de gan gia tri cho mang 1 chieu vua khai bao
		for (int j = 0; j < mps.n; j++) {
			mps2[t] = mps.s[i][j];
			t++;
		}
	}
	mps1.m = mps.n;               //Vi la ma tran chuyen vi nen so dong cua ma tran do phai bang so cot cua ma tran ban dau
	mps1.n = mps.m;               //tuong tu
	int x = 0;
	for (int i = 0; i < mps1.m; i++) {     //vong lap duoc goi de gan gia tri cho ma tran moi theo tung cot
		for (int j = 0; j < mps1.n; j++) { 
			mps1.s[j][i] = mps2[x];
			x++;
		}
	}
	tinhGiaTriMaTran(mps1);   //Ham tinh gia tri duoc goi de tinh gia tri cua tung phan so trong ma tran
	return mps1;

}
bool kiemTraMaTranDoiXung(MaTranPhanSo mps) {   //Ham kiem tra ma tran doi xung
	tinhGiaTriMaTran(mps);        //Goi ham tinh gia tri ma tran de tinh gia tri phan so trong ma tran duoc truyen vao
	MaTranPhanSo mps1 = maTranChuyenVi(mps);    //khoi tao 1 ma tran chuyen vi dua tren ham vua viet
	if ((mps1.m != mps.m) || (mps1.n != mps.n)) {    //neu so dong hoac so cot khac nhau thi khong phai doi xung
		return false;
	}
	for (int i = 0; i < mps.m; i++) {      //Vong lap duoc goi de duyet tung phan tu cua 2 ma tran
		for (int j = 0; j < mps.n; j++) {
			if (mps.s[i][j].giatri != mps1.s[i][j].giatri) {
				return false;       //Neu gia tri tuong ung khac tu dong tra ve false
			}
		}
	}
	return true;
}
//3.4
//Dinh thuc cua ma tran cap 1
void xuatDinhThucCap1(PhanSo a) {
	xuatPhanSo(a);
}

//Dinh thuc cua ma tran cap 2
PhanSo tichPhanSo(PhanSo a, PhanSo b) {
	PhanSo c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	return c;
}
PhanSo hieuPhanSo(PhanSo a, PhanSo b) {
	PhanSo c;
	c.tu = (a.tu * b.mau) - (b.tu * a.mau);
	c.mau = a.mau * b.mau;
	return c;
}
PhanSo tongPhanSo(PhanSo a, PhanSo b) {
	PhanSo c;
	c.tu = (a.tu * b.mau) + (b.tu * a.mau);
	c.mau = a.mau * b.mau;
	return c;
}
PhanSo chiaPhanSo(PhanSo a, PhanSo b) {
	PhanSo c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	return c;
}
void timDinhThucCap2(MaTranPhanSo s) {
	PhanSo det;
	det = hieuPhanSo(tichPhanSo(s.s[0][0], s.s[1][1]), tichPhanSo(s.s[0][1], s.s[1][0]));
	cout << "Dinh thuc cua ma tran cap 2 la:";
	xuatPhanSo(det);
}
//Dinh thuc cap 3 cua ma tran
MaTranPhanSo maTranMoRong(MaTranPhanSo s) { //Ham tao ma tran mo rong
	s.n += 2;   //tang so cot len 2
	for (int i = 3; i < s.n; i++)
		for (int j = 0; j < s.m; j++) {
			s.s[j][i] = s.s[j][i - 3];  //Vong lap duoc dung de them 2 dong dau tien thanh ma tran moi
		}
	return s;
}
PhanSo tong3DuongCheoHuyen(PhanSo b[]) {  //Ham tinh tong 3 duong cheo huyen ma tran cap 3
	PhanSo temp1;          //Tien hanh chuyen ma tran thanh mang 1 chieu cu the o ham tinhDinhThucMaTranCap3
	PhanSo temp2;
	temp2.tu = 0;
	temp2.mau = 1;
	int dem = 0;
		for (int i = 0; i < 3; i++) {   //Vong lap duoc goi de tien hanh cac phep toan den cac vi tri nam tren duong cheo
			temp1 = tichPhanSo(b[i], b[i + 6]);    //luc nay cac phan tu tren duong cheo cach nhau 6 don vi
			rutGon(temp1); 
			temp1 = tichPhanSo(temp1, b[i + 12]);
			rutGon(temp1);
			temp2 = tongPhanSo(temp2, temp1);
			rutGon(temp2);
		}
	return temp2;    //tra ve gia tri phan so 
}
PhanSo tong3DuongCheoSac(PhanSo b[20]) {  //Ham tinh tong 3 duong cheo sac
	PhanSo temp1;                       //Tuong tu ham tren
	PhanSo temp2;
	temp2.tu = 0;
	temp2.mau = 1;
	int dem = 0;
		for (int i = 2; i < 5; i++) {
			temp1 = tichPhanSo(b[i], b[i + 4]);
			rutGon(temp1);
			temp1 = tichPhanSo(temp1, b[i + 8]);
			rutGon(temp1);
			temp2 = tongPhanSo(temp2, temp1);
			rutGon(temp2);
		}
	return temp2;
}
void timDinhThucCap3(MaTranPhanSo s) {  //Ham tim dinh thuc
	s = maTranMoRong(s);  //Gan s thanh ma tran mo rong
	PhanSo det; 
	det.tu = 0;
	det.mau = 1;
	PhanSo b[20];     //Khai bao 1 mang 1 chieu phan so
	int t = 0;
	for (int i = 0; i < s.m; i++) {
		for (int j = 0; j < s.n; j++) {  //Chuyen ma tran thanh mang 1 chieu
			b[t] = s.s[i][j];
			t++;
		}
	}
	PhanSo temp1 = tong3DuongCheoHuyen(b);    //Bien phu 1 chua tong 3 duong cheo huyen
	PhanSo temp2 = tong3DuongCheoSac(b);      //Bien phu 2 chua tong 3 duong cheo sac
	det = hieuPhanSo(temp1, temp2);  //Gan det bang hieu cua 2 duong cheo se tinh duoc dinh thuc theo kieu phan so
	cout << "Dinh Thuc cua ma tran cap 3 vua nhap la:";
	xuatPhanSo(det);
}
//B3.5
void timMaTranBacThang(MaTranPhanSo& a) {     //Ham tim ma tran bac thang
	PhanSo temp;    //khoi tao bien phu
	for (int i = 0; i < a.m; i++) {                  //Vong lap duoc goi de thuc hien phuong phap gauss
		for (int j = i + 1; j < a.m; j++) {                  //a+bx=0
			temp = chiaPhanSo(a.s[j][i], a.s[i][i]);  //Tien hanh tim x=-a/b de lam cho phan tu ben duoi phan tu co so =0
			rutGon(temp);                             //Tien hanh rut gon de tranh tran so
			for (int x = 0; x < a.n; x++) {          
				a.s[j][x] = hieuPhanSo(a.s[j][x], tichPhanSo(temp, a.s[i][x]));   // vi temp chi moi dang la a/b nen de bien phan tu a bang 0 can phai goi ham tinh hieu phan so
				a.s[j][x] = rutGon(a.s[j][x]);  //Tien hanh rut gon de tranh tran so
			}
		}
	}
	cout << "\nMa Tran sau khi duoc chuyen ve dang bac thang la";   //Sau khi dua ve se in ra ma tran bac thang 
	xuatMaTranPhanSo(a);
}
//B3.6
int tinhHangMaTran(MaTranPhanSo s) {   //Ham tim hang ma tran sau khi dua ve ma tran bac thang
	int dem=0;
	int rank = s.m;  //gan bien rank bang so dong
	for (int i = 0; i < s.m; i++) {     //2 vong lap duoc goi de dem so dong =0
		if (dem == s.n) {
			rank--;        //neu co dong =0 thi bien rank se tru di 1
		}
		dem = 0;
		for (int j = 0; j < s.n; j++) {
			if (s.s[i][j].tu == 0) {
				dem++;
			}
		}
	}
	return rank;   //tra ve hang ma tran
}
//B3.7
void tong2MaTran(MaTranPhanSo a, MaTranPhanSo b) { //Ham tinh tong 2 ma tran
	if (a.m != b.m || a.n != b.n) {          //Neu khong co cung so dong hoac cot thi khong the cong
		cout << "\nKhong the cong 2 ma tran nay";
	}
	for (int i = 0; i < a.m; i++) {    //Truy xuat tung phan tu tuong ung de tien hanh cong
		for (int j = 0; j < a.n; j++) {
			a.s[i][j] = tongPhanSo(a.s[i][j], b.s[i][j]);
		}
	}
	cout << "\nTong 2 ma tran nay la:";
	xuatMaTranPhanSo(a);   //Xuat ma tran sau khi cong
}
void tich2MaTran(MaTranPhanSo a, MaTranPhanSo b) {         //Ham tinh tich 2 ma tran
	if (a.n != b.m) {          //Tinh chat cua phep nhan ma tran
		cout << "\nKhong the nhan 2 ma tran nay";
	}
	MaTranPhanSo c;
	c.m = a.m;
	c.n = b.n;
	PhanSo temp;            
	for (int i = 0; i < a.m; i++) {        //Vong lap duoc goi de thuc hien cac phep tinh theo cong thuc
		for (int j = 0; j < b.n; j++) {         
			temp.mau = 1;
			temp.tu = 0;
			for (int k = 0; k < a.n; k++) {
				temp = tongPhanSo(temp, tichPhanSo(a.s[i][k], b.s[k][j]));
				rutGon(temp);
			}
			c.s[i][j] = temp;
		}
	}
	cout << "\nTich cua 2 ma tran vua nhap la:";
	xuatMaTranPhanSo(c);
	}

	
	