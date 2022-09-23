//#### Kullanıcıdan veri alma kısmı
cout << "Satır sayısını gir: ";
int line, alfa;
cin >> line;
cin.ignore();
cout << "Yıldız artış sayısını gir: ";
cin >> alfa;
int beta=alfa; //beta = artış miktarı
cin.ignore();
//#### Kullanıcıdan veri alma kısmı

//#### pramit oluşturma kısmı

for(int i=1;i <= line; ++i) {  // Yıldız koyulacak satır sayısı belirleme
 for(int j=1;j <= alfa; ++j) { // alfa değişkenine eşit olana kadar yıldız yazdırma.
     //alfa = satırda var olacak yıldız sayısı
     //j = alfa kontrol değişkeni.
     cout << "*";
    }
 alfa+=beta;
 cout << endl;
}

//#### pramit oluşturma kısmı
