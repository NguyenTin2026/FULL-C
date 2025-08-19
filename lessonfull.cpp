// ===============================
// TỔNG HỢP LẬP TRÌNH C++ TỪ CƠ BẢN ĐẾN NÂNG CAO
// ===============================

// 1. CƠ BẢN
/*
#include <iostream>          // Thư viện chuẩn cho nhập/xuất
using namespace std;

int main() {
    int x = 5;  
    // Xuất dữ liệu ra màn hình
    cout << "I am currently a junior at Drew uni starting to learn C++ Programming. x = " << x << endl;
    
    // Nhập dữ liệu từ bàn phím
    cin >> x;  
    return 0;
}

// Chạy lệnh C++:
// Bước 1: g++ ten_file.cpp -o ten_file.exe
// Bước 2: ./ten_file.exe
// Lưu ý:
// - .cpp là file nguồn (code C++)
// - .exe là file thực thi
// - Không bao giờ đặt output -o trùng với input .cpp
*/


// 2. KHAI BÁO BIẾN VÀ KIỂU DỮ LIỆU
/*
#include <iostream>
using namespace std;

int main() {
    int a = 10;                      // Số nguyên
    float b = 3.5;                   // Số thực, 4 bytes, chính xác ~7 chữ số
    double c = 2.71828;              // Số thực chính xác kép, 8 bytes, ~15 chữ số
    char d = 'T';                     // Ký tự
    string str = "Xin chào bạn Tin Tin!"; // Chuỗi ký tự
    bool isTinTin = true;             // Giá trị boolean
    const double PI = 3.14159;        // Hằng số, không thay đổi được

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "d = " << d << ", str = " << str << ", isTinTin = " << isTinTin << endl;
    cout << "PI = " << PI << endl;

    return 0;
}
// Chú thích:
// endl dùng để xuống dòng (tương tự \n)
*/


// 3. TOÁN TỬ
/*
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 2;

    // Toán tử số học
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;   // Chia nguyên
    cout << "x % y = " << x % y << endl;   // Chia lấy dư
    cout << "x++ = " << x++ << endl;       // Hậu tố: xuất x rồi mới tăng
    cout << "++y = " << ++y << endl;       // Tiền tố: tăng rồi mới xuất

    // Toán tử so sánh
    if(x == y) cout << "x bằng y" << endl;
    if(x != y) cout << "x khác y" << endl;
    if(x > y) cout << "x lớn hơn y" << endl;
    if(x < y) cout << "x nhỏ hơn y" << endl;
    if(x >= y) cout << "x lớn hơn hoặc bằng y" << endl;
    if(x <= y) cout << "x nhỏ hơn hoặc bằng y" << endl;

    // Toán tử logic
    if(x > 0 && y > 0) cout << "Cả x và y đều dương" << endl; // AND
    if(x > 0 || y < 0) cout << "Ít nhất 1 điều kiện đúng" << endl; // OR
    if(!(x < 0)) cout << "x không âm" << endl; // NOT

    return 0;
}
*/


// 4. ĐIỀU KIỆN
/*
#include <iostream>
using namespace std;

int main() {
    int x = -5;

    // If - else
    if(x > 0) cout << "Dương" << endl;
    else if(x == 0) cout << "Zero" << endl;
    else cout << "Âm" << endl;

    // Switch-case
    int day = 2;
    switch(day) {
        case 1: cout << "Mon" << endl; break;
        case 2: cout << "Tue" << endl; break;
        default: cout << "Other" << endl;
    }

    return 0;
}
*/


// 5. VÒNG LẶP
/*
#include <iostream>
using namespace std;

int main() {
    // FOR
    cout << "Vòng lặp FOR: ";
    for(int i=0; i<10; i++) cout << i << " ";
    cout << endl;

    // WHILE
    int n = 5;
    cout << "Vòng lặp WHILE: ";
    while(n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;

    // DO-WHILE
    n = 3;
    cout << "Vòng lặp DO-WHILE: ";
    do {
        cout << n << " ";
        n--;
    } while(n > 0);
    cout << endl;

    return 0;
}
*/


// 6. NHẬP XUẤT DỮ LIỆU
/*
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Nhập tuổi: ";
    cin >> age;
    cout << "Bạn " << age << " tuổi." << endl;

    return 0;
}
*/


// 7. HÀM
/*
#include <iostream>
using namespace std;

int cong(int a, int b) {
    return a + b;
}

int main() {
    cout << cong(3, 4) << endl; // In ra 7
    return 0;
}
*/


// 8. MẢNG & CHUỖI
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Mảng
    int arr[5] = {1,2,3,4,5};
    cout << "Phần tử đầu tiên: " << arr[0] << endl;

    // Chuỗi
    string name = "Tin";
    cout << "Độ dài: " << name.size() << endl;
    cout << "Ký tự đầu: " << name[0] << endl;

    return 0;
}
*/


// 9. CON TRỎ
/*
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Giá trị a = " << *p << endl;
    cout << "Địa chỉ a = " << p << endl;

    return 0;
}
*/


// 10. STRUCT & CLASS
/*
#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    int tuoi;
};

class Animal {
public:
    string name;
    void speak() { cout << "Hello, I am " << name << endl; }
};

int main() {
    SinhVien sv;
    sv.ten = "Tin";
    sv.tuoi = 20;
    cout << sv.ten << " " << sv.tuoi << endl;

    Animal dog;
    dog.name = "Buddy";
    dog.speak();

    return 0;
}
*/


// 11. TÍNH THỪA KẾ & ĐA HÌNH
/*
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof" << endl; }
};

int main() {
    Animal a;
    Dog d;
    a.sound();
    d.sound();

    Animal* ptr = &d;
    ptr->sound(); // Woof nhờ virtual

    return 0;
}
*/


// 12. THƯ VIỆN CHUẨN STL
/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    v.push_back(4);

    cout << "Vector: ";
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;

    map<string,int> m;
    m["Tin"] = 20;
    cout << "Gia tri m[\"Tin\"] = " << m["Tin"] << endl;

    for(auto it=m.begin(); it!=m.end(); ++it)
        cout << it->first << " : " << it->second << endl;

    return 0;
}
*/


// 13. XỬ LÝ FILE
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out("data.txt");
    if(!out) { cerr << "Không mở file ghi!" << endl; return 1; }
    out << "Hello file\nDay la dong thu 2\n";
    out.close();

    ifstream in("data.txt");
    if(!in) { cerr << "Không mở file đọc!" << endl; return 1; }
    string line;
    cout << "Noi dung file:\n";
    while(getline(in,line)) cout << line << endl;
    in.close();

    return 0;
}
*/


// 14. NGOẠI LỆ
/*
#include <iostream>
using namespace std;

int main() {
    try {
        throw 123;
    } catch(int e) {
        cout << "Lỗi: " << e << endl;
    }

    cout << "Chương trình tiếp tục chạy bình thường." << endl;
    return 0;
}
*/

// -------------------------- End --------------------------
