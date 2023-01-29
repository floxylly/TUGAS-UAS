#include<iostream>
#include<cstdlib>
using namespace std;
struct gim{
    int pemain, musuh;
};
string kondisi(string pemain,string musuh){
    if(pemain == "Gajah"){
        if (musuh == "Orang"){
            return "Menang :)";
        }else if(musuh == "Semut"){
            return "Kalah:(";
        }else if(musuh == "Gajah"){
            return "Seri:|";
        }
    }else if(pemain == "Orang"){
        if (musuh == "Semut"){
            return "Menang :)";
        }else if(musuh == "Gajah"){
            return "Kalah:(";
        }else if(musuh == "Orang"){
            return "Seri:|";
        }
    }else if(pemain == "Semut"){
        if (musuh == "Gajah"){
            return "Menang :)";
        }else if(musuh == "Orang"){
            return "Kalah:(";
        }else if(musuh == "Semut"){
            return "Seri:|";
        }

}
}
void hasilMain(string pemain,string musuh){
    string skor = kondisi (pemain,musuh);
   cout << "Anda Dinyatakan " << skor << endl;
}
int main (){
    string game[3] = {"Gajah","Orang", "Semut"};
    gim pemain1, musuh1;
    string ulang;
    do{
        system("cls");
        for(int a=0;a<3;a++){
            cout << a+1 << ". "<< game[a] << endl;
    }
        cout << "Pilihan : ";
        cin>> pemain1.pemain;
        musuh1.musuh = (rand()%3)+1;
        cout << "Musuh : "<<musuh1.musuh<<endl;
        cout <<"------------------------------" << endl;
        cout << "Pemain : " << game[pemain1.pemain-1]<<endl;
        cout << "Musuh : " << game[musuh1.musuh-1]<<endl;
        hasilMain(game[pemain1.pemain-1],game[musuh1.musuh-1]);
          cout << "Main Lagi? <y/n> : ";
        cin >> ulang;
    }while (ulang == "y");
    system ("cls");
    cout << "Selesai "<< endl;
}
