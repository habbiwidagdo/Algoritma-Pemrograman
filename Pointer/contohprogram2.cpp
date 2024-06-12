#include <iostream>

using namespace std;

struct Weapon {
    const char* name;
    int attack;
    int guard;
};

struct Player {
    const char* name;
    int score;
    int hp;
    Weapon* weapon;
};

int main() {
    Player player1;
    Weapon weapon1; // Membuat objek weapon1 untuk player1
    player1.name = "Ujang";
    player1.score = 0;
    player1.hp = 100;
    weapon1.name = "Katana";
    weapon1.attack = 16;
    weapon1.guard = 10;
    player1.weapon = &weapon1; // Menggunakan pointer untuk mengarahkan weapon player1 ke weapon1
    // Cetak status player
    cout << "PLAYER STATUS" << endl;
    cout << "Name: " << player1.name << endl;
    cout << "Score: " << player1.score << endl;
    cout << "HP: " << player1.hp << endl;
    cout << "Weapon" << endl;
    cout << " Name: " << player1.weapon->name << endl; // Menggunakan operator -> untuk mengakses atribut pointer
    cout << " Attack: " << player1.weapon->attack << endl;
    cout << " Guard: " << player1.weapon->guard << endl;
    return 0;
}