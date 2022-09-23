cout << "Döngü miktarı gir: ";
int loop, i;
i=1;
cin >> loop;
cout << "Döngü miktarını gir: ";
int loop, i;
cin >> loop;
cin.ignore();
i=1;
while(i <= loop) {
  cout << "##########\nBir veri gir: ";
  string text;
  getline(cin, text);
  cout << "Girilen veri: " << text << "\nDöngü : " << i << endl;
  ++i;
}
