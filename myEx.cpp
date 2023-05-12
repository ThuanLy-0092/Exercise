#include"Header.h"
//B311
void nhapMaTran(int& n, int& m, int a[MAX][MAX]) {
	cout << "Moi nhap so dong:";
	cin >> n;
	cout << "\nMoi nhap so cot:";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}
//B312
void nhapMaTranST(int& n, int& m, float a[MAX][MAX]) {
	cout << "Moi nhap so dong:";
	cin >> n;
	cout << "\nMoi nhap so cot:";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}
//b313
void xuatMaTran(int& n, int& m, int a[MAX][MAX]) {
	cout << "Ma tran " << n << "x" << m;
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
	}
}
//b314
void xuatMaTranST(int& n, int& m, float a[MAX][MAX]) {
	cout << "Ma tran " << n << "x" << m;
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
	}
}
//B315
float MAXMaTranST(int& n, int& m, float a[MAX][MAX]) {
	float max = a[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
			}
		}
	}
	return MAX;
}
//B316
int soChanNhoHon2004(int& n, int& m, int a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((a[i][j] < 2004) && (a[i][j] % 2 == 0)) {
				cout << a[i][j] << " ";
			}
		}
	}
	return 0;
}
//B317
bool kiemtraSNT(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int demSNT(int& n, int& m, int a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (kiemtraSNT(a[i][j]) == true) {
				dem++;
			}
		}
	}
	return dem;
}
//B318
float tongGiaTriAm(int& n, int& m, float a[MAX][MAX]) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < 0) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}//B319
void swap(float& a, float& b) {
	float t = 0;
	t = a;
	a = b;
	b = t;
}
void sortArray(int& n, float a[MAX]) {
	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++) {
			if (a[k] > a[j]) {
				k = j;
			}
		}
		swap(a[i], a[k]);
	}
}
void sapXepMaTranTangDan(int& n, int& m, float a[MAX][MAX], float b[500]) {
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[t] = a[i][j];
			t++;
		}
	}
	sortArray(t, b);
}
void sapXepMaTranTangDanNgang(int& n, int& m, float a[MAX][MAX], float b[500]) {
	sapXepMaTranTangDan(n, m, a, b);
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = b[c];
			c++;
		}
	}
	xuatMaTranST(n, m, a);

}
void sapXepMaTranTangDanDoc(int& n, int& m, float a[MAX][MAX], float b[500]) {
	sapXepMaTranTangDan(n, m, a, b);
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[j][i] = b[c];
			c++;
		}
	}
	xuatMaTranST(n, m, a);

}
//B320
float tongSoDuongST(int& n, int& m, float a[MAX][MAX]) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}
//B321
int tichGiaTriLeSN(int& n, int& m, int a[MAX][MAX]) {
	int tich = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 != 0) {
				tich *= a[i][j];
			}
		}
	}
	return tich;
}
//B322
float tongGiaTriTren1DongST(int& n, int& m, float a[MAX][MAX]) {
	n--;
	float tong = 0;
	for (int i = 0; i < m; i++) {
		tong += a[n][i];
	}
	return tong;
}
//B323
float tichGiaTriTren1CotST(int& n, int& m, float a[MAX][MAX]) {
	m--;
	float tich = 1;
	for (int i = 0; i < n; i++) {
		tich *= a[i][m];
	}
	return tich;
}
//B324
float tongGiaTriDuongTren1DongST(int& n, int& m, float a[MAX][MAX]) {
	n--;
	float tong = 0;
	for (int i = 0; i < m; i++) {
		if (a[n][i] > 0) {
			tong += a[n][i];
		}
	}
	return tong;
}
//B325
int tichGiaTriChanTren1CotST(int& n, int& m, int a[MAX][MAX]) {
	m--;
	int tich = 1;
	for (int i = 0; i < n; i++) {
		if (a[i][m] % 2 == 0) {
			tich *= a[i][m];
		}
	}
	return tich;
}
//B326
float trungBinhCongST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	float tong = 0;
	float kq = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				tong += a[i][j];
				dem++;
			}
		}
	}
	return kq = tong / dem;

}
//B327
float tongGiaTriBien(int& n, int& m, float a[MAX][MAX]) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[0][i];
		tong += a[m][i];
	}
	return tong;
}
//B328
float trungBinhNhanST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	float tich = 1;
	float kq = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				tich *= a[i][j];
				dem++;
			}
		}
	}
	return	kq = tich / dem;
}
//B329
void bienDoiMangDuong(int& n, int& m, float a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < 0) {
				a[i][j] = -a[i][j];
			}
		}
	}
	xuatMaTranST(n, m, a);
}
//B330
void bienDoiMangSoNguyen(int& n, int& m, float a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			float t = a[i][j] - (int)a[i][j];
			if ((t != 0) && (t >= 0.5)) {
				a[i][j] = (int)a[i][j] + 1;
			}
			if ((t != 0) && (t < 0.5)) {
				a[i][j] = (int)a[i][j];
			}
		}
	}
	xuatMaTranST(n, m, a);
}
//B332
int tongGiaTriLeTren1CotST(int& n, int& m, int a[MAX][MAX]) {
	m--;
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][m] % 2 != 0) {
			tong += a[i][m];
		}
	}
	return tong;
}
//B333
int kiemTraSoHoanThien(int n) {
	for (int i = 0; i <= sqrt(n); i++) {
		if (i * i == n) {
			return true;
		}
	}
	return false;
}
int tongSoHoanThienTren1CotST(int& n, int& m, int a[MAX][MAX]) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (kiemTraSoHoanThien(a[i][j]) == true) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}
//B334
int demSoDuongST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				dem++;
			}
		}
	}
	return dem;
}
//Bai335
int demSNTST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (kiemtraSNT(a[i][j]) == true) {
				dem++;
			}
		}
	}
	return dem;
}
//B336
int tanSuatXuatHien(int& n, int& m, float a[MAX][MAX], int x) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == x) {
				dem++;
			}
		}
	}
	return dem;
}
//B337
int soChuSoSN(int& n, int& m, int a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			while (a[i][j] != 0) {
				dem++;
				a[i][j] /= 10;
			}
		}
	}
	return dem;
}
//B338
int demSoLuongSoDuong1Hang(int& n, int& m, float a[MAX][MAX]) {
	n--;
	int dem = 0;
	for (int i = 0; i < m; i++) {
		if (a[n][i] > 0) {    //n la so dong theo yeu cau
			dem++;
		}
	}
	return dem;
}
//B339
int demSoLuongSoHoanThien1Hang(int& n, int& m, int a[MAX][MAX]) {
	n--;
	int dem = 0;
	for (int i = 0; i < m; i++) {
		if (kiemTraSoHoanThien(a[n][i]) == true) {    //n la so dong theo yeu cau
			dem++;
		}
	}
	return dem;
}
//B340
int demSoLuongSoAmTrenCot(int& n, int& m, float a[MAX][MAX]) {
	m--;
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][m] < 0) {
			dem++;
		}
	}
	return dem;
}
//B341
int demSoLuongSoDuongOBienST(int& n, int& m, float a[MAX][MAX]) {
	m--;
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][0] < 0) {
			dem++;
		}
		if (a[i][m] < 0) {
			dem++;
		}
		if (a[i][0] < 0 && a[i][m] < 0) {
			dem += 2;
		}
	}
	return dem;
}
//B342
int demPhanTuCucDaiST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				if (j == 0) {
					if ((a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]))) {
						dem++;
					}
				}
				if (j != 0 && j != m - 1) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i][j - 1]))) {
						dem++;
					}
				}
			}
			if (i != 0 && i != n - 1) { //2
				if (j == 0) {
					if (((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]))) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j]))) {
						dem++;
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]))) {
						dem++;
					}
				}
			}
			if (i == n - 1) { //3
				if (j == 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j]))) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i - 1][j]))) {
						dem++;
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1]))) {
						dem++;
					}
				}
			}
		}
	}
	return dem;
}
//B343
int demPhanTuCucTriST(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				if (j == 0) {
					if ((a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j]) || (a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) || (a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]))) {
						dem++;
					}
				}
				if (j != 0 && j != m - 1) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i][j - 1])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i][j - 1]))) {
						dem++;
					}
				}
			}
			if (i != 0 && i != n - 1) { //2
				if (j == 0) {
					if (((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j])) || ((a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j + 1]) && (a[i][j] < a[i + 1][j]))) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i - 1][j]))) {
						dem++;
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j + 1]))) {
						dem++;
					}
				}
			}
			if (i == n - 1) { //3
				if (j == 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i - 1][j]))) {
						dem++;
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i - 1][j]))) {
						dem++;
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j - 1]))) {
						dem++;
					}
				}
			}
		}
	}
	return dem;
}
//B344
int demSoPhanTuPhanBiet(int& n, int& m, float a[MAX][MAX]) {
	float b[410];
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[t] = a[i][j];
			t++;
		}
	}
	sortArray(t, b);
	int dem = 1;
	for (int i = 0; i < t - 1; i++) {
		if (b[i] != b[i + 1]) {
			dem++;
		}
	}
	cout << "\n So phan tu phan biet la:";
	return dem;
}
//B345
float tongPhanTuCucTriST(int& n, int& m, float a[MAX][MAX]) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				if (j == 0) {
					if ((a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j]) || (a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])) {
						tong += a[i][j];
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) || (a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]))) {
						tong += a[i][j];
					}
				}
				if (j != 0 && j != m - 1) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i][j - 1])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i][j - 1]))) {
						tong += a[i][j];
					}
				}
			}
			if (i != 0 && i != n - 1) { //2
				if (j == 0) {
					if (((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j])) || ((a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j + 1]) && (a[i][j] < a[i + 1][j]))) {
						tong += a[i][j];
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i - 1][j]))) {
						tong += a[i][j];
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j + 1]))) {
						tong += a[i][j];
					}
				}
			}
			if (i == n - 1) { //3
				if (j == 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i - 1][j]))) {
						tong += a[i][j];
					}
				}
				if (j == m - 1) {
					if (((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i - 1][j])) || ((a[i][j] < a[i][j - 1]) && (a[i][j] < a[i - 1][j]))) {
						tong += a[i][j];
					}
				}
				if (j != m - 1 && j != 0) {
					if (((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1])) || ((a[i][j] < a[i][j + 1]) && (a[i][j] < a[i - 1][j]) && (a[i][j] < a[i][j - 1]))) {
						tong += a[i][j];
					}
				}
			}
		}
	}
	return tong;
}
//348
int maTranSoDuong(int& n, int& m, float a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				return 1;
			}
		}
	}
	return 0;
}
//349
bool kiemTraSoHoanThien(float n) {
	for (int i = 0; i <= sqrt(n); i++) {
		if (i * i == n) {
			return true;
		}
	}
	return false;
}
int maTranSoHoanThien(int& n, int& m, float a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (kiemTraSoHoanThien(a[i][j]) == true) {
				return 1;
			}
		}
	}
	return false;
}

//350
int maTranSoLe(int& n, int& m, int a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 != 0) {
				return 1;
			}
		}
	}
	return 0;
}
//351
int maTranToanDuong(int& n, int& m, float a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < 0) {
				return 0;
			}
		}
	}
	return 1;
}
//352
int kiemtraMangTangDan(int n, float a[MAX]) {
	int dem = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]) {
			dem++;
		}
	}
	if (dem == n - 1) {
		return 1;
	}
	return 0;
}
void kiemTraHangMaTranTangDan(int& n, int& m, float a[MAX][MAX]) {
	float b[MAX];
	int t = 0;
	for (int j = 0; j < m; j++) {
		b[t] = a[n][j];
		t++;
	}
	kiemtraMangTangDan(t, b);
}
//353
void kiemTraCotMaTranTangDan(int& n, int& m, float a[MAX][MAX]) {
	float b[MAX];
	int t = 0;;
	for (int i = 0; i < n; i++) {
		b[t] = a[i][m];
		t++;
	}
	kiemtraMangTangDan(t, b);
}
//354
int kiemTraMangGiamDan(int n, float a[450]) {
	int dem = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]) {
			dem++;
		}
	}
	if (dem == n - 1) {
		return 1;
	}
	return 0;
}

void maTranGiamDanTheoHangVaCot(int& n, int& m, float a[MAX][MAX]) {
	int dem_dong = 0;
	int dem_hang = 0;
	float b[450];
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[t] = a[i][j];
			t++;
		}
	}
	kiemTraMangGiamDan(t, b);
}
//355
int kiemTraDongCoSoAm(int& n, int& m, float a[MAX][MAX]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < 0) {
				dem++;
				return i;
				break;
			}
		}
	}
	if (dem == 0) {
		return dem;
	}
}







