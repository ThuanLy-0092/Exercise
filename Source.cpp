#include<iostream>
using namespace std;
#define MAX 100
//Bai1
void nhapMANG(int& n, int a[MAX]) {
	cout << "Moi nhap mang:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMANG(int& n, int a[MAX]) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
//Bai2
void themPhanTu(int& n, int a[], int vt, int gt) {
	//Vong lap duoc su dung de chuyen tung phan tu qua phai 1 don vi
	for (int i = n - 1; i >= vt; i--) {
		//bat dau tu phan tu ke cuoi va dung o phan tu muon them vao
		a[i + 1] = a[i];
	}
	//gan gia tri phan tu tai vi tri do bang gia tri
	a[vt] = gt;
	n++;
	xuatMANG(n, a);
}
void suaPhanTu(int& n, int a[], int vt, int gt) {
	for (int i = 0; i < n - 1; i++) {
		if (i == vt) {
			a[i] = gt;
		}
	}
	xuatMANG(n, a);
}
void xoaPhanTu(int& n, int a[], int vt) {
	for (int i = vt; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
	xuatMANG(n, a);
}
//Bai3
void vitriMin(int& n, int a[MAX]) {
	int min = a[0];
	int t = 0;
	for (int i = 1; i < n; i++) {
		if (min > a[i]) {
			t = i;
		}
	}
	cout << "\nVI TRI CO GIA TRI NHO NHAT LA:" << t;
}
//Bai5
bool kiemtraSNT(int& a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void kiemtraSNTMANG(int& n, int a[MAX]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (kiemtraSNT(a[i]) == true && a[i] < 100) {
			b[t] = a[i];
			t++;
		}
	}
	if (b[0] != 0) {
		cout << "So Nguyen to be hon 100 co trong mang la:";
		xuatMANG(t, b);
	}
	else {
		cout << "Khong co so nguyen to thoa man.";
	}
}
//Bai4
void giatriChanBeHon2004(int& n, int a[MAX]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] < 2004) {
			b[t] = a[i];
			t++;
		}
	}
	if (b[0] != 0) {
		cout << "CAC GIA TRI THOA MAN LA:";
		xuatMANG(t, b);
	}
	else {
		cout << "MANG KHONG CO SO NAO THOA MAN.";
	}
}//Bai6
float tongGiaTriAm(int& n, float a[MAX]) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			tong += a[i];
		}
	}
	return tong;
}
void swapST(float& a, float& b) {
	float t = 0;
	t = a;
	a = b;
	b = t;
}
//Bai6
void nhapMANGST(int& n, float a[MAX]) {
	cout << "Moi nhap mang:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void xuatMANGST(int& n, float a[MAX]) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
//Bai7
void mangsothucTangDan(int& n, float a[MAX]) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swapST(a[i], a[j]);
			}
		}
	xuatMANGST(n, a);
}
//Bai8
void giatriChan(int& n, int a[MAX]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[t] = a[i];
			t++;
		}
	}
	xuatMANG(t, b);
}
//Bai10
int giatriDuong(int& n, float a[MAX]) {
	int t = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			t = a[i];
			break;
		}
	}
	return t;
}
//Bai11
int sochanCuoi(int& n, int a[MAX]) {
	int t = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 == 0) {
			t = a[i];
			break;
		}
	}
	return t;
}
//Bai12
int sochanDau(int& n, int a[MAX]) {
	int t = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			t = a[i];
			break;
		}
	}
	return t;
}
//Bai14
int songuyentoDau(int& n, int a[MAX]) {
	int t = -1;
	for (int i = 0; i < n; i++) {
		if (kiemtraSNT(a[i]) == true) {
			t = a[i];
			break;
		}
	}
	return t;
}
//Bai15
//So duong cuoi cua mang so thuc
float soduongCuoi(int& n, float b[MAX]) {
	float t = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (b[i] > 0) {
			t = b[i];
			break;
		}
	}
	return t;
}
//Bai 16
int songuyentoCuoi(int& n, int a[MAX]) {
	int t = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (kiemtraSNT(a[i]) == true) {
			t = a[i];
			break;
		}
	}
	return t;
}
//Bai 18
int Max(int& t, int a[MAX]) {
	int b = a[0];
	for (int i = 1; i < t; i++) {
		if (a[i] > b) {
			b = a[i];
		}
	}
	return b;
}
int songuyentoLonNhat(int& n, int a[MAX]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (kiemtraSNT(a[i]) == true) {
			b[t] = a[i];
			t++;
		}
	}
	return Max(t, b);
}
bool kiemtrasoChinhPhuong(int& n) {
	if (n < 4) {
		return false;
	}
	int i = 0;
	while (i * i <= n) {
		if (i * i == n) {
			return true;
		}
		i++;
	}
	return false;
}
//Bai 20
void soChinhPhuongDau(int& n, int a[MAX]) {
	int t = -1;
	for (int i = 0; i < n; i++) {
		if (kiemtrasoChinhPhuong(a[i]) == true) {
			t = a[i];
			break;
		}
	}
	if (t == -1) {
		cout << "\nMang da cho khong co so chinh phuong.";
	}
	else {
		cout << "\nSo chinh phuong dau tien trong mang la:" << t;
	}
}

//Bai9
void vitriAm(int& n, int a[]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			b[t] = i;
			t++;
		}
	}
	xuatMANG(t, b);
}
//Bai13
bool kiemtraSoHoanThien(int& n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (tong == n) {
		return true;
	}
	return false;
}
int soHoanThienCuoi(int& n, int a[]) {
	int t = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (kiemtraSoHoanThien(a[i]) == true) {
			t = i;
			break;
		}
	}
	return t;
}
//Bai17
int Min(int& n, int b[]) {
	int gt = b[0];
	for (int i = 1; i < n; i++) {
		if (gt > b[i]) {
			gt = b[i];
		}
	}
	return gt;
}
int soHoanThienMin(int& n, int a[]) {
	int t = -1;
	int b[MAX];
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (kiemtraSoHoanThien(a[i]) == true) {
			b[x] = a[i];
			x++;
		}
	}
	if (x == 0) {
		return t;
	}
	else {
		return Min(x, b);
	}
}
//Bai19
void nhapKhoangxy(int& x, int& y) {
	cout << "Moi nhap x:";
	cin >> x;
	cout << "\nMoi nhap y:";
	cin >> y;
}
int giatriThuocKhoang(int& n, int a[], int x, int y) {
	for (int i = 0; i < n; i++) {
		if ((a[i] <= y) && (a[i] >= x)) {
			return a[i];
			break;
		}
	}
}
//Bai21
int chuSoDauTien(int n) {
	int tmp = 0;
	while (n != 0) {
		tmp = n;
		n /= 10;
	}
	return tmp;
}
int chuSoCuoiCung(int& n) {
	int t = n % 10;
	return t;
}
int chusoLeDauTien(int& n, int a[]) {
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (chuSoDauTien(a[i]) % 2 != 0) {
			t = i;
			break;
		}
	}
	return a[t];
}
//Bai22
void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
void mangTangDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	xuatMANG(n, a);
}
void xuLyMang(int& n, int a[]) {
	int b[MAX]; //chan
	int tmpb = 0;
	int c[MAX]; //le
	int tmpc = 0;
	int ketqua = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[tmpb] = a[i];
			tmpb++;
		}
		else {
			c[tmpc] = a[i];
			tmpc++;
		}
	}
	mangTangDan(tmpb, b);
	for (int i = 0; i < tmpb; i++) {
		if (b[i] > Max(tmpc, c)) {
			ketqua = b[i];
			break;
		}
	}
	if (ketqua != 0) {
		cout << "\nSo chan thoa man:" << ketqua;
	}
	else {
		cout << "\nKhong co so chan thoa man yeu cau.";
	}
}
//Bai23
void chusoDauTienLe(int& n, int a[]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (chuSoDauTien(a[i]) % 2 != 0) {
			b[t] = a[i];
			t++;
		}
	}
	xuatMANG(t, b);
}
//Bai24
int uocChungLonNhatMang(int& n, int a[]) {
	int m = 0;
	int t = 0;
	for (int i = Min(n, a); i > 0; i--) {
		if (m == n) {
			return t;
			break;
		}
		m = 0;
		t = i;
		for (int j = 0; j < n; j++) {
			if (a[j] % t != 0) {
				break;
			}
			if (a[j] % t == 0) {
				m++;
			}
		}
	}
	return 1;

}
//Bai24*
int boiChungNhoNhatMang(int& n, int a[]) {
	int bcnn = 1;
	int ucln = uocChungLonNhatMang(n, a);
	int kq = 0;
	for (int i = 0; i < n; i++) {
		bcnn *= a[i];
	}
	return kq = bcnn / ucln;
}
//Bai25
void giatriChanThuocKhoang(int& n, int a[], int x, int y) {
	for (int i = 0; i < n; i++) {
		if ((a[i] <= y) && (a[i] >= x) && (a[i] % 2 == 0)) {
			cout << a[i] << " ";
		}
	}
}
//Bai26
void viTriSNT(int& n, int a[]) {
	for (int i = 0; i < n; i++) {
		int t = i;
		if (kiemtraSNT(a[i]) == true) {
			cout << t << " ";
		}
	}
}
//Bai27
bool kiemtrachuso(int n) {
	int dem1 = 0;
	int dem2 = 0;
	while (n != 0) {
		int t = n % 10;
		n /= 10;
		dem1++;
		if (t % 2 != 0) {
			dem2++;
		}
	}
	if (dem2 != dem1) {
		return false;
	}
	return true;
}
void mangSoChiToanChuSoLe(int& n, int a[]) {
	int b[MAX];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (kiemtrachuso(a[i]) == true) {
			b[t] = a[i];
			t++;
		}
	}
	xuatMANG(t, b);
}

//Bai28
int tongchusoLeDauTien(int& n, int a[]) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (chuSoDauTien(a[i]) % 2 != 0) {
			tong += a[i];
		}
	}
	return tong;
}
//Bai29
int chuSoHangChuc(int n) {
	n /= 10;
	int t = n % 10;
	return t;
}
int tongSoCoHangChucLa5(int& n, int a[]) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (chuSoHangChuc(a[i]) == 5) {
			tong += a[i];
		}
	}
	return tong;
}
bool cucTieu(int a, int b, int c) {
	if (b < a && b < c) {
		return true;
	}
	return false;
}
bool cucDai(int a, int b, int c) {
	if (b > a && b > c) {
		return true;
	}
	return false;
}
int tongCucTriMang̣̣(int& n, int a[]) {
	int tong = 0;
	for (int i = 1; i < n - 1; i++) {
		if (cucTieu(a[i - 1], a[i], a[i + 1]) == true || cucDai(a[i - 1], a[i], a[i + 1]) == true) {
			tong += a[i];
		}
	}
	return tong;
}
//Bai30
int tongchusoChanDauTien(int& n, int a[]) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (chuSoDauTien(a[i]) % 2 == 0) {
			tong += a[i];
		}
	}
	return tong;
}
//Bai31
int soLanXuatHienx(int& n, int a[], int& x) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			dem++;
		}
	}
	return dem;
}
//Bai32
int soLanMaxCoTrongMang(int& n, int a[]) {
	int t = Max(n, a);
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == t) {
			dem++;
		}
	}
	return dem;
}
//Bai33

int demPhanTuPhanBiet(int& n, int a[]) {
	mangTangDan(n, a);
	int t = 0;
	int dem = 1;
	for (int i = 0; i < n; i++) {
		t = a[i];
		if (a[i + 1] == t) {
			dem++;
		}
	}
	int kq = n - dem;
	cout << "\nVay so phan tu phan biet la: ";
	return kq;
}

//Bai34
void lietKeTanSuatXuatHien(int& n, int a[]) {
	mangTangDan(n, a);
	int dem = 1;
	for (int i = 0; i < n - 1; i++) {
		int j = i + 1;
		while (a[j] == a[i]) {
			dem++;
			j++;
			if (a[j] == a[i]) {
				break;
			}
			cout << "\nTan suat xuat hien cua " << a[i] << " la:" << dem;
			dem = 1;
		}
	}
}
//Bai35
void lietKeSoXuatHien1Lan(int& n, int a[]) {
	mangTangDan(n, a);
	int dem = 1;
	for (int i = 0; i < n - 1; i++) {
		int j = i + 1;
		while (a[j] == a[i]) {
			dem++;
			j++;
		}
		if (dem == 1) {
			cout << "\nTan suat xuat hien cua " << a[i] << " la:" << dem;
		}
		dem = 1;
	}
}
//Bai41
int	haiSo0LienTiep(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == 0 && a[i + 1] == a[i]) {
			return 1;
			break;
		}
	}
		return 0;
}
//Bai43
int mangCapSoCong(int& n, int a[]) {
	int d = a[1] - a[0];
	int tong = 0;
	for (int i = 0; i < n-1; i++) {
		int t = a[i + 1] - a[i];
		tong += t;
	}
	int p = 2 * (n - 1);
	if (p == tong) {
		return d;
	}
	return 0;
}
//Bai42
int mangLe(int& n, int a[]) {
	int dem = 0;
	for (int i = 0; i < n-1; i++) {
		int t = a[i] + a[i + 1];
		if (t % 2 != 0) {
			dem++;
		}
	}
	if (dem == n - 1) {
		return 1;
	}
	return 0;
}
//Bai45
void sapXepSoLeTangDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i] % 2 != 0) && (a[j] % 2 != 0) && (a[i] > a[j])) {
				swap(a[i], a[j]);
			}
		}
	}
	xuatMANG(n, a);
}
//Bai46
void sapXepSoNTTangDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (kiemtraSNT(a[i])==true && (kiemtraSNT(a[j])==true) && (a[i] > a[j])) {
				swap(a[i], a[j]);
			}
		}
	}
	xuatMANG(n, a);
}
//Bai47
void sapXepSoHoanThienGiamDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((kiemtraSoHoanThien(a[i]) == true) && (kiemtraSoHoanThien(a[j]) == true) && (a[i] < a[j])) {
				swap(a[i], a[j]);
			}
		}
	}
	xuatMANG(n, a);
}
//Bai49
void sapXepSoDuongTangDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i]>0) && (a[j]>0) && (a[i] > a[j])) {
				swap(a[i], a[j]);
			}
		}
	}
	xuatMANG(n, a);
}
//Bai50
void tron2MangTang(int& n, int& m, int a[], int b[]) {
	cout << "\nSau khi sap xep mang a tang dan: ";
	mangTangDan(n, a);
	cout << "\nSau khi sap xep mang b tang dan:";
	mangTangDan(m, b);
	int k = n + m;
	int t = 0;
	for (int i = n; i < k; i++) {
		a[i] = b[t];
		t++;
	}
	n += m;
}
void tron2MangTangThanhMangTang(int& n, int& m, int a[], int b[]) {
	tron2MangTang(n, m, a, b);
	cout << "\nKet qua tra ra mang ket hop va tang dan:";
	mangTangDan(n, a);
}
//Bai51
void mangGiamDan(int& n, int a[]) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	xuatMANG(n, a);
}
void tron2MangTangThanhMangGiam(int& n, int& m, int a[], int b[]) {
	tron2MangTang(n, m, a, b);
	cout << "\nKet qua tra ra mang ket hop va giam dan:";
	mangGiamDan(n, a);
}










int main() {
	float b[MAX];
	int a[MAX];
	int n;
	int gt;
	int vt;
	int x, y;
	cout << "\nMoi nhap so luong phan tu: ";
	cin >> n;
	nhapMANG(n, a);    //Nhap mang so nguyen 
	//nhapMANGST(n, b);     //Nhap mang so thuc

	//Bai2

	//cout << "Nhap gia tri:";
	//cin >> gt;
	//do {
		//cout << "\nMoi nhap vi tri:";
		//cin >> vt;
	//} while (((vt < 0) || (vt >= n)) && cout << "Moi nhap lai vi tri tu 0 den n-1");
	//xoaPhanTu(n, a, vt);
	//suaPhanTu(n, a, vt, gt);
	//themPhanTu(n, a, vt, gt);


	//Bai11 
	//cout << sochanCuoi(n, a);   //Ham tim so chan cuoi cung cua mang so nguyen


	//Bai12
	//cout << sochanDau(n,a);      //Ham tim so chan dau tien cua mang so nguyen

	//Bai14
	//cout << songuyentoDau(n, a);  //Ham tim so nguyen to dau tien cua mang so nguyen

	//Bai15
	//cout << soDuongcuoi(n, b);    //Ham tim so duong cuoi cua mang so thuc

	//Bai10
	//cout << giatriDuong(n,a);     //Ham tim gia tri duong dau tien cua mang so nguyen

	//Bai8
	//cout << giatriChan(n, a);     //Ham tim gia tri chan chan cua mang so nguyen


	//Bai7
	//mangsothucTangDan(n, b);   //Ham sap xep mang so thuc tang dan

	//Bai6
	//cout << tongGiaTriAm(n, b);   //Ham tinh tong gia tri am cua mang so thuc

	//Bai4
	//cout << giatriChanBeHon2004(n, a);     //Ham tim gia tri chan be hon 2004 cua mang so nguyen 

	//Bai5
	//cout << kiemtraSNTMANG(n, a);          //Ham kiem tra so nguyen to trong Mang va in ra

	//Bai3
	//cout << vitriMin(n,a);                 //Ham in ra vi tri mang gia tri nho nhat

	//Bai16
	//cout << songuyentoCuoi(n, a);          //Ham in ra so nguyen to cuoi cung cua mang so nguyen

	//Bai15
	//cout << soduongCuoi(n,b);              //Ham in ra so duong cuoi cua mang so thuc

	//Bai18
	//cout << songuyentoLonNhat(n, a);       //Ham in ra so nguyen to lon nhat cua mang so nguyen 


	//Bai20
	//soChinhPhuongDau(n, a);                //Ham in ra so chinh phuong dau tien cua mang so nguyen

	//Bai9
	//vitriAm(n, a);

	//Bai13
	//cout<<soHoanThienCuoi(n, a);

	//Bai17
	//cout << soHoanThienMin(n, a);

	//Bai19
	//nhapKhoangxy(x, y);
	//cout << giatriThuocKhoang(n, a,x,y);

	//Bai21
	//cout << chusoLeDauTien(n, a);

	//Bai22
	//xuLyMang(n, a);

	//Bai23
	//chusoDauTienLe(n,a);

	//Bai24
	//cout<<uocChungLonNhatMang(n, a);

	//Bai24*
	//cout<<boiChungNhoNhatMang(n,a);

	//Bai25
	//viTriSNT(n, a);

	//Bai26
	//mangSoChiToanChuSoLe(n, a);

	//Bai27
	//nhapKhoangxy(x, y);
	//giatriChanThuocKhoang(n, a, x, y);

	//Bai28
	//cout<<"\n"<<tongchusoLeDauTien(n, a);
	//return 0;

	//Bai29
	//cout << "Tong cac so co hang chuc la 5 =" << tongSoCoHangChucLa5(n, a);
	//cout << "Tong cuc tri cua mang la:" << tongCucTriMang̣̣(n, a);

	//Bai30
	//cout << "Tong cac chu so co chu so dau tien la so chan =" << tongchusoChanDauTien(n, a);

	//Bai31
	//cout << "Moi nhap x=";
	//cin >> x;
	//soLanXuatHienx(n, a, x);


	//Bai32
	//cout<<soLanMaxCoTrongMang(n, a);

	//Bai33
	//cout << demPhanTuPhanBiet(n, a); 

	//Bai34
	//lietKeTanSuatXuatHien(n, a);  //Chua hoan thanh

	//Bai35
	//lietKeSoXuatHien1Lan(n, a); //Chua Hoan Thanh

//Bai36-40 drop

	//Bai41
	//cout << haiSo0LienTiep(n, a);

	//Bai42
	//cout << mangLe(n, a);

	//Bai43
	//cout << mangCapSoCong(n, a);

	//Bai45
	//sapXepSoLeTangDan(n, a);

    //Bai46
	//sapXepSoNTTangDan(n, a);

    //Bai47
    //sapXepSoHoanThienGiamDan(n, a);
 
    //Bai49
    //sapXepSoDuongTangDan(n,a);

    //Bai50
//int m;
//int c[MAX];
//cout << "Moi nhap so phan tu mang b:";
//cin >> m;
//nhapMANG(m,c);
//tron2MangTangThanhMangTang(n,m,a,c);
    //Bai51
//int m;
//int c[MAX];
//cout << "Moi nhap so phan tu mang b:";
//cin >> m;
//nhapMANG(m,c);
//tron2MangTangThanhMangGiam(n, m, a, c);
}

