#include <iostream>

using namespace std;

class Karakter {
public:
    int Hp;
    int mana;
    int damage;
    int hp_potion = 2;
    int mana_potion = 2;

    void menu (){
        cout << "1.Tnput Karakter" << endl;
        cout << "2.Tampilkan Karakter" << endl;
        cout << "3.Gunakan Hp Potion" << endl;
        cout << "4.Gunakan Mana Potion" << endl;
        cout << "5.Jumlah Item" << endl;
        cout << "pilih(1/2/3/4/5) = ";
    }

    void inputKarakter (){
        cout << "masukkan Hp = ";
        cin >> Hp;

        cout << "masukkan mana = ";
        cin >>mana;

        cout << "masukkan damage = ";
        cin >> damage;

        cout << endl;
    }

    void displayKarakter () {
        cout << "HP Karakter = " << Hp << endl;
        cout << "Mana Karakter = " << mana << endl;
        cout << "damage Karakter = " << damage << endl;
        cout << endl;

    }

    void gunakanHp_potion () {
        if (hp_potion > 0) {
            Hp += 50;
            hp_potion--;
        }
    }

    void gunakanMana_potion () {
        if (mana_potion > 0) {
            mana += 50;
            mana_potion--;
        }
    }

    void jumlahItem () {
        cout << "Hp Potion = " << hp_potion << endl;
        cout << "Mana Potion = " << mana_potion << endl;
        cout << endl;
    }


};

int main()
{

    Karakter player;
    int pilih;
    do {
        player.menu();
        cin >> pilih;
        cout << endl;

        switch (pilih) {
            case 1:
                player.inputKarakter();
                break;
            case 2:
                player.displayKarakter();
                break;
            case 3:
                player.gunakanHp_potion ();
                break;
            case 4:
                player.gunakanMana_potion ();
                break;
            case 5:
                player.jumlahItem();
                break;
        }
    }
    while (pilih != 6);

    return 0;
}
