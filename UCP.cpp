//1. float pi; string nama; int angka;
//2. #include <iostream>
    //using namespace std;
    //int main()
    //{
    //    int nPanjang, nLebar, nLuas;
    //    cout << "Masukkan Panjang = ";
    //    cin >> nPanjang;
    //    cout << "Masukkan Lebar = ";
    //   cin >> nLebar;
    //    nLuas = nPanjang * nLebar;
    //   cout << "Luasnya adalah =  " << nLuas << endl;
    //}
//3. #include <iostream>
    //using namespace std;

    //struct Identitas {
    //    string nama;
    //    int umur;
    //};
    //int main() {
    //   Identitas ids;
    //    cout << "Nama : ";
    //    cin >> ids.nama;
    //    cout << "Umur : ";
    //    cin >> ids.umur;

    //    cout << endl;
    //    cout << "\n Nama : " << ids.nama;
    //    cout << "\n Umur : " << ids.umur;
    //}
//4. #include <iostream>
    //using namespace std;

    //string nama;
    //int nXpander, nPorsche, nAvanza, nBrio, nLambo;
    //int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLambo = 6000;

    //void input (){
    //    cout << "Nama Pembeli : ";
    //    cin >> nama;
    //    cout << "Jumlah Xpander:";
    //    cin >> nXpander;

    //    cout << "Jumlah Porsche:";
    //    cin >> nPorsche;

    //    cout << "Jumlah Avanza:";
    //    cin >> nAvanza;

    //    cout << "Jumlah Brio:";
    //    cin >> nBrio;

    //    cout << "Jumlah Lambo:";
    //    cin >> nLambo;

    //}

    //int TotalHarga(){
    //   return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLambo * hLambo);
    //}

    //void Display () {
    //    cout << "Total Harganya : " << TotalHarga() << endl;
    //}

    //int main() {
    //    char pilihan;
    //    do{
    //    input();
    //    Display();
    //    cout << "Apakah ingin membeli kembali ?";
    //    cin >> pilihan;
    //    } while (pilihan == 'y' || pilihan == 'Y');
    
    //} 
//5. #include <iostream>
    //using namespace std;

    //int main ()
    //{
    //    char pilihan;


    //   do{
    //     cout << "Berangkat ambil takjil" << endl;
    //     cout << "Antri Takjil" << endl;
    //     cout << "Dapat Takjil" << endl;
    //   cout << "Apakah mau antri lagi?" << endl;
    //    cin >> pilihan;
    // }while(pilihan == 'y' || pilihan == 'Y');   
    //}    

#include <iostream>
using namespace std;

int main() {
    string nama;
    int nMatematika, nBahasaInggris;
    string status;
    int i;
    int arr[20];
    int jumlah;

    cout << "Input Jumlah kandidat : ";
    cin >> jumlah;
    cout << "Nama Pendaftar : ";
    cin >> nama;
    cout << "Nilai Matematika :";
    cin >> nMatematika;
    cout << "Nilai Bahasa Inggris : ";
    cin >> nBahasaInggris;

    cout<<"No\tNama\tStatus\t"<<endl;

    
    if (nMatematika > 80 || nMatematika + nBahasaInggris / 2 > 70 ){
        status = "Diterima";
    }
    else {
        status = "Ditolak";
    }


 cout<<"No\tNama\tStatus\t"<<endl;

    for(i = 1; i <= jumlah; i++) {
        
        cout<<i<<"\t"<<arr[i]<<"\t"<< status <<""<<endl;

    }

}