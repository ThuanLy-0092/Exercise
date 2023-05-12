#include<iostream>
using namespace std;
#define MAX 20
void nhapMaTranSoThuc(float a[][MAX], int& n, int& m)
{
	do
	{
		cout << "nhap vao so dong n: ";
		cin >> n;
		cout << "nhap vao so cot m: ";
		cin >> m;
		if (n < 0 || n>1000 || m < 0 || m>1000)
		{
			cout << "so luong cot hoac dong khong hop le. Vui long nhap lai: " << endl;
		}
	} while (n < 0 || n>1000 || m < 0 || m>1000);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "nhap vao phan tu a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void xuatMaTranSoThuc(float a[][MAX], int& n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

//input: 1	
//	     2
//		 111
//		 222
//	     333
//output:	222
//			222
//			333

void chepGiaTri2DongBatKy(float a[][MAX], int& n, int& m)
{
	int x, y;
	cout << "nhap vao gia tri dong can copy: ";
	cin >> x;
	x--;
	cout << "nhap vao gia tri dong can paste: ";
	cin >> y;
	y--;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == x)
			{
				a[y][j] = a[x][j];
			}
		}
	}
	xuatMaTranSoThuc(a, n, m);
}

void chepGiaTri2CotBatKy(float a[][MAX], int& n, int& m)
{

	int x, y;
	cout << "nhap vao gia tri cot can copy: ";
	cin >> x;
	x--;
	cout << "nhap vao gia tri cot can paste: ";
	cin >> y;
	y--;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == x)
			{
				a[i][y] = a[i][x];
			}
		}
	}
	xuatMaTranSoThuc(a, n, m);
}

//input: 
//111
//222
//333
//output:
//333
//222
//111
void hoanDoiGiaTriDongDauTienVaDongCuoiCung(float a[][MAX], int& n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			swap(a[0][j], a[n - 1][j]);
		}
	}
	cout << "Ma tran sau khi hoan doi la: " << endl;
	xuatMaTranSoThuc(a, n, m);
}

//input: 
//112
//122
//132
//output:
//211
//221
//231
void hoanDoiGiaTriCotDauTienVaCotCuoiCung(float a[][MAX], int& n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			swap(a[i][0], a[i][m - 1]);
		}
	}
	cout << "Ma tran sau khi hoan doi la: " << endl;
	xuatMaTranSoThuc(a, n, m);
}

void loaiBo1DongBatKy(float a[][MAX], int& n, int& m)
{
	int x;
	cout << "vi tri cua dong can loai bo: ";
	cin >> x;
	x--;
	if (x >= 0 && x < n)
	{
		for (int i = x; i < n - 1; i++) //xac dinh vi tri cua dong can loai bo
		{
			for (int j = 0; j < m; j++) //duyet tung phan tu cua dong
			{
				a[i][j] = a[i + 1][j]; // lan luot gan phan tu cua cac dong i+1 ve dong i 
			}
		}
	}
	n--; //giam 1 dong
	xuatMaTranSoThuc(a, n, m);
}

void loaiBo1CotBatKy(float a[][MAX], int& n, int& m)
{
	int x;
	cout << "vi tri cua dong can loai bo: ";
	cin >> x;
	x--;
	if (x >= 0 && x < n)
	{
		for (int i = 0; i < n; i++) //xac dinh vi tri cua cot can loai bo
		{
			for (int j = x; j < m - 1; j++) //duyet tung phan tu cua cot
			{
				a[i][j] = a[i][j + 1]; // lan luot gan phan tu cua cac cot j+1 ve cot j 
			}
		}
	}
	m--; //giam 1 cot
	xuatMaTranSoThuc(a, n, m);
}

void tinhTong2MaTran(float a[][MAX], int n, int m)
{

	float b[MAX][MAX], c[MAX][MAX];
	int cot, dong;
	do
	{
		cout << "nhap vao so dong n cua ma tran 2: ";
		cin >> cot;
		cout << "nhap vao so cot m cua ma tran 2: ";
		cin >> dong;
		if (cot < 0 || cot>1000 || dong < 0 || dong>1000 || cot != n || dong != m)
		{
			cout << "so luong cot hoac dong khong hop le. Vui long nhap lai: " << endl;
		}
	} while (cot < 0 || cot>1000 || dong < 0 || dong>1000 || cot != n || dong != m);
	for (int i = 0; i < cot; i++)
	{
		for (int j = 0; j < dong; j++)
		{
			cout << "nhap vao phan tu a[" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < cot; i++)
	{
		for (int j = 0; j < dong; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "tong cua 2 ma tran la: " << endl;
	xuatMaTranSoThuc(c, n, m);
}

bool kiemTraSoChan(float n)
{
	if (n < 0) n * -1;
	while (n >= 0)
	{
		n -= 2;
	}
	if (n == 0) return true;
	return false;
}

int tinhTongSoChanTrongMang(int a[][MAX], int n, int m)
{
	int s{ 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (kiemTraSoChan(a[i][j])) s += a[i][j];
		}
	}
	return s;
}

bool kiemTraSoNguyenTo(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}


int demSoNguyenToCoTrongMang(int a[][MAX], int n, int m)
{
	int dem{ 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (kiemTraSoNguyenTo(a[i][j])) dem++;
		}
	}
	return dem;
}

void taoMaTran() {
	float a[8][4] = { {11.8, 6.82, 1.76, -6.82}, {2.50, -1.01, -2.60, 1.19}, {-4.88, -5.07, -3.21, 5.20},{-0.49, 1.52, 2.07, -1.66},{-14.04, -12.40, -6.66, 12.65},{0.27, -8.51, -10.19, 9.15},{9.53, -9.84, -17.00, 11.00},{-12.01, 3.64, 11.10, -4.48} };
	cout << "\n\n\nA=       ";
	for (int i = 0; i < 8; i++) {
		cout << "\n\n";
		for (int j = 0; j < 4; j++) {
			if (i == 0 || i == 1 || i == 5 || i == 6) {
				cout << " ";
				cout << a[i][j] << " ";
			}
			else {
				cout << a[i][j] << "  ";
			}
		}
	}
}

float timMaxMang(float a[MAX], int n)
{
	float max{ a[0] };
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}

float tinhChuanHangCuaMaTranA()
{
	float a[8][4] = { {11.8, 6.82, 1.76, -6.82}, {2.50, -1.01, -2.60, 1.19}, {-4.88, -5.07, -3.21, 5.20},{-0.49, 1.52, 2.07, -1.66},{-14.04, -12.40, -6.66, 12.65},{0.27, -8.51, -10.19, 9.15},{9.53, -9.84, -17.00, 11.00},{-12.01, 3.64, 11.10, -4.48} };
	float b[MAX];
	int k = 0;
	for (int i = 0; i < 8; i++)
	{
		float s{ 0 };
		for (int j = 0; j < 4; j++)
		{
			s += abs(a[i][j]);
		}
		b[k] = s;
		k++;
	}
	return timMaxMang(b, k);
}

float tinhChuanCotCuaMaTranA()
{
	float a[8][4] = { {11.8, 6.82, 1.76, -6.82}, {2.50, -1.01, -2.60, 1.19}, {-4.88, -5.07, -3.21, 5.20},{-0.49, 1.52, 2.07, -1.66},{-14.04, -12.40, -6.66, 12.65},{0.27, -8.51, -10.19, 9.15},{9.53, -9.84, -17.00, 11.00},{-12.01, 3.64, 11.10, -4.48} };
	float b[MAX];
	int k = 0;
	for (int j = 0; j < 4; j++)
	{
		float s{ 0 };
		for (int i = 0; i < 8; i++)
		{
			s += abs(a[i][j]);
		}
		b[k] = s;
		k++;
	}
	return timMaxMang(b, k);
}

float tinhChuanFrobeniusCuaA()
{
	float a[8][4] = { {11.8, 6.82, 1.76, -6.82}, {2.50, -1.01, -2.60, 1.19}, {-4.88, -5.07, -3.21, 5.20},{-0.49, 1.52, 2.07, -1.66},{-14.04, -12.40, -6.66, 12.65},{0.27, -8.51, -10.19, 9.15},{9.53, -9.84, -17.00, 11.00},{-12.01, 3.64, 11.10, -4.48} };
	float s =0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			s += a[i][j] * a[i][j];
		}
	}
	return sqrt(s);
}

int main()
{
	int n, m;
	float a[MAX][MAX];
	/*nhapMaTranSoThuc(a, n, m);*/
	/*xuatMaTranSoThuc(a, n, m);*/
	/*chepGiaTri2DongBatKy(a, n, m);
	chepGiaTri2CotBatKy(a, n, m);*/
	/*hoanDoiGiaTriDongDauTienVaDongCuoiCung(a, n, m);
	hoanDoiGiaTriCotDauTienVaCotCuoiCung(a, n, m);*/
	/*loaiBo1DongBatKy(a, n, m);*/
	/*loaiBo1CotBatKy(a, n, m);*/
	/*tinhTong2MaTran(a,n,m);*/
	//taoMaTran();
	//cout << tinhChuanHangCuaMaTranA;
	//cout << tinhChuanCotCuaMaTranA;
	cout << tinhChuanFrobeniusCuaA();
	return 0;
}