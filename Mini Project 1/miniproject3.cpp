#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Record untuk menyimpan informasi user
struct User {
    string name;
    string nim;
    string prodi;
    string email;
    string password;
};

// Record untuk menyimpan informasi mata kuliah
struct Course {
    string name;
    string lecturer;
    int presensi;
};

// Fungsi untuk menampilkan menu utama
void showMenu() {
    cout << "=== PROGRAM ABSENSI KELAS ===" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    cout << "==============================" << endl;
}

// Fungsi untuk menampilkan menu setelah login
void showLoggedInMenu() {
    cout << "=== MENU ===" << endl;
    cout << "1. Tambah Mata Kuliah" << endl;
    cout << "2. Presensi" << endl;
    cout << "3. Riwayat Presensi" << endl;
    cout << "4. Keluar" << endl;
    cout << "============" << endl;
}

// Fungsi untuk registrasi user
User registerUser() {
    User newUser;
    cout << "Nama: ";
    getline(cin, newUser.name);
    cout << "NIM: ";
    getline(cin, newUser.nim);
    cout << "Prodi: ";
    getline(cin, newUser.prodi);
    cout << "Email: ";
    getline(cin, newUser.email);
    cout << "Password: ";
    getline(cin, newUser.password);
    return newUser;
    
}
    
// Fungsi untuk login
bool loginUser(const vector<User>& users, User& loggedInUser) {
    string email, password;
    cout << "Email: ";
    getline(cin, email);
    cout << "Password: ";
    getline(cin, password);
    cout<<endl <<endl <<endl<<endl;
    for (const User& user : users) {
        if (user.email == email && user.password == password) {
            loggedInUser = user;
            cout << "Selamat Datang, " << loggedInUser.name << "!" << endl ; // Menampilkan ucapan selamat datang
            return true;
        }
    }

    return false;
}

// Fungsi untuk menambah mata kuliah
void addCourse(vector<Course>& courses) {
    Course newCourse;
    cout << "Nama Mata Kuliah: ";
    getline(cin, newCourse.name);
    cout << "Nama Dosen: ";
    getline(cin, newCourse.lecturer);
    newCourse.presensi = 0;
    courses.push_back(newCourse);
}

// Fungsi untuk melakukan presensi
void takeAttendance(vector<Course>& courses) {
    cout << "Pilih Mata Kuliah yang ingin di-presensi:" << endl;
    for (int i = 0; i < courses.size(); ++i) {
        cout << i + 1 << ". " << courses[i].name << endl;
    }

    int choice;
    cout << "Pilih: ";
    cin >> choice;
    cin.ignore(); // Membersihkan newline di buffer

    if (choice >= 1 && choice <= courses.size()) {
        courses[choice - 1].presensi++;
        cout << "Presensi berhasil dilakukan." << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
}

// Fungsi untuk menampilkan riwayat presensi
void showAttendanceHistory(const vector<Course>& courses) {
    cout << "=== RIWAYAT PRESENSI ===" << endl;
    for (const Course& course : courses) {
        cout << "Mata Kuliah: " << course.name << endl;
        cout << "Jumlah Presensi: " << course.presensi << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    vector<User> users;
    vector<Course> courses;
    User loggedInUser;

    bool isLoggedIn = false;
    bool exitProgram = false;

    while (!exitProgram) {
        if (!isLoggedIn) {
            showMenu();
            int choice;
            cout << "Pilih menu: ";
            cin >> choice;
            cin.ignore(); // Membersihkan newline di buffer

            switch (choice) {
                case 1:
                    users.push_back(registerUser());
                    break;
                case 2:
                    isLoggedIn = loginUser(users, loggedInUser);
                    if (!isLoggedIn) {
                        cout << "Login gagal. Email atau password salah." << endl;
                    }
                    break;
                case 3:
                    exitProgram = true;
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
            }
        } else {
            showLoggedInMenu();
            int choice;
            cout << "Pilih menu: ";
            cin >> choice;
            cin.ignore(); // Membersihkan newline di buffer

            switch (choice) {
                case 1:
                    addCourse(courses);
                    break;
                case 2:
                    takeAttendance(courses);
                    break;
                case 3:
                    showAttendanceHistory(courses);
                    break;
                case 4:
                    isLoggedIn = false;
                    loggedInUser = User();
                    break;
                default:
                    cout << "Pilihan tidak valid." << endl;
            }
        }
    }

    cout << "Terima kasih telah menggunakan program ini." << endl;

    return 0;
}