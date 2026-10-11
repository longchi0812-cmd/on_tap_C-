#include <iostream>
using namespace std;

int main() {
    double chieuDai, chieuRong;
    
    // Nh?p d? li?u t? bàn phím
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> chieuRong;
    
    // Tính toán
    double chuVi = (chieuDai + chieuRong) * 2;
    double dienTich = chieuDai * chieuRong;
    
    // Xu?t k?t qu?
    cout << "Chu vi hinh chu nhat la: " << chuVi << endl;
    cout << "Dien tich hinh chu nhat la: " << dienTich << endl;
    
    return 0;
}

