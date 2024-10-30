/*  DERS 1
#include <iostream>

using namespace std;

int main() 
{

	cout << "Merhaba C++ Proglamlama Dili\n" << endl;
	// string ifadenin arkasýna yazýlan \n kodu 1 boþ line birakmaya yariyor. kac tane \n koyarsan o kadar bos line koyar. cout << "Merhaba C++" << endl; yaparsakta 
	// buradaki endl ayný islevi gorecek.
	
	return 0;


}
*/



/*  DERS 2 
#include <iostream>

using namespace std;

int main()
{
	string isim;  // declaration tanimlama
	isim = "Mustafa"; // initialization atama    eger ki istersek declaration + initialization seklinde de yapabiliriz. string isim = "Mustafa"; seklinde.

	int yas = 19; // declaration + initialization     eger ki istersek declaration + initialization yapabiliriz. ex= int yas = 19; gibi.
	      

	cout << "Bir zamanlar " << isim << " isminde bir genc varmis. " << endl << isim << " " << yas << " yasindaymis.\n";

	isim = "Veli"; // eger ki bu sekilde arada yeni bir degisken eklersen alttaki satirlarda bu gecerli olur.
	yas = 22;

	cout << isim << " ismini sever ancak bulundugu" << " " << yas << " yasini sevmezmis.Daha yasli olmak istermis.\n";
		return 0; 




} */

/*             DERS 3  DEGISKENLERDE DIKKAT EDILMESI GEREKENLER
#include <iostream>

using namespace std;

int main()
{
	// Degisken isimlerde bazi kurallar:
	// - Degisken isimlerde ilk harf kesinlikle rakam olamaz.
	// - Degisken isimlerinde Turkce karakter kullanmayiniz.
	// - Degisken isimlerinde arada bosluk olamaz.
	// - Degisken isimlerinde arada nokta vb. karakterler kullanilmaz.

	// - Degisken isimlerini camelCase standartina yazmamiz tavsiye edilir.


	int dogumYili = 1980;
	int birinciSinavNotu = 97;


	return 0;


} 
*/


/*                  DERS 4
#include <iostream>

using namespace std;

int main()
{

	string isim = "Kaan Kaya";
	int dogumYili = 1980;
	float sayisalNotOrtalamasi = 3.47f; // float ifadelerde sonuna f koyulmasi tavsiye ediliyor.
	double pi = 3.141592;     // double daha hassas islemler icin gerekli pi sayisi ya da cografi islemler gibi.
	bool sinifiGectiMi = true; // bool veri tipinde sadece true ya da false kullanilir. true yaparsak 1 false yazarsak 0 sonucuna ulasiriz.
	char notOrtalamasiHarf = 'B'; // char tipine atamasini yaparken tek tirkak kullanilir 'B' gibi. Ayrica ASCII Table kullanilarak da yazilabilir.
	char sinifaGoreOrtalamasi = 65; // bu sekilde de kullanabiliriz. ASCII tablosuna bakarak istedigimiz harfi ya da belli basli ifadeleri yazabiliriz.
	int quizNot1 = 72;
	int quizNot2 = 51;
	float quizOrtalama = (float) (quizNot1 + quizNot2) / 2; // sonucu ondalik sekilde gormek istiyorsak bu sekilde yapmaliyiz.
						// float eklersek egerki buradaki ifadeleri floata donusturur yoksa yine sonucu int ifade olarak yapmak icin kusurati siler.
	// yukaridaki yaptigimiz islemi farkli sekilde int olan quizNot1 veya quizNot2 yi yada ikisinide float yaparakta yapabiliriz.
	// ex: float quizNot1 = 72.0f;   nokta 0 koymamiz gerekiyor cunku bu bir float ifade.
	//     intt = quizNot2 = 51; 
	//     float quizOrtalama = (quizNot1 + quizNot2) / 2;   bu sekilde yapmis olsakta yine ayni sekilde kusuratli sonuca ulasabiliriz.



	cout << "Merhaba sayin: " << isim << endl;
	cout << "Dogum yili: " << dogumYili << endl;
	cout << "Sayisal Not Ortalamasi: " << sayisalNotOrtalamasi << endl;
	cout << "Ogrenci sinifi gecti mi: " << sinifiGectiMi << endl;
	cout << "Not Ortalamasi: " << notOrtalamasiHarf << endl;
	cout << "Sinif Ortalamasina gore not ortalamasi: " << sinifaGoreOrtalamasi << endl;
	cout << "Quiz notlari ortalamasi: " << (quizNot1 + quizNot2) / 2 << endl;   // islemi bu sekilde yaparsak kusurati saymaz.
	                                       // yukaridaki sonuc 61.5 olmasina ragmen 61 cikar. 
	cout << "Quiz notlari kusuratli ortalamasi: " << quizOrtalama << endl;
	

	int x = 12;
	int y = 10;
	int z = 12 % 10 ;     // % : mod (modulus) operatoru bir sayiyi bir sayiya boldugumuzde kalani gostermek icin kullaniriz.
	cout << z << endl;
	
	return 0;


}

*/

/*           DERS 5
#include <iostream>

using namespace std;

int main()
{
	int x = 12;
	int y = 10;
	int z = x % y;
	cout << z << endl;

	return 0;
}
*/

/*                  DERS 6
#include <iostream>

using namespace std;

int main()
{
	string isim;
	int en, boy, alan;



	cout << "Lutfen adinizi yaziniz: ";  // user friendly
	cin >> isim;
	cout << "Merhaba " << isim << " Geometrik hesaplama programlamina hosgeldin!\n\n";
	cout << "Lutfen dikdortgenin enini giriniz: ";
	cin >> en;
	cout << "Lutgen dikdortgenin boyunu giriniz: ";
	cin >> boy;

	// hesaplama
	alan = en * boy;

	cout << "Sayin " << isim << " isleminizin sonucu: " << alan << endl;

	return 0;
}
*/



/*     CMATYH KUTUPHANESI DERSI 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	int sonuc4, x, y;
	cout << "Lutfen ussu alinacak sayiyi giriniz x: ";
	cin >> x;
	cout << "Lutfen ussu giriniz y: ";
	cin >> y;
	
	sonuc4 = pow(x, y); // uslu ifade kullanmak icin pow komutunu kullaniyoruz mesela burada 2 nin 3 uncu kuvvetini aliyor.
	cout << "sonuc: " << sonuc4 << endl;
	

	int sonuc;
	sonuc = floor(4.7); // floor parantezi icine yazdigimiz sayiyi yakin altindaki sayiya yuvarlar.
	cout << "sonuc: " << sonuc << endl;

	int sonuc2;
	sonuc2 = ceil(3.3); // ceil parantezi icindeki yazdigimiz sayiyi yakin ustundeki sayiya yuvarlar.
	cout << "sonuc: " << sonuc2 << endl;

	int sonuc3;
	sonuc3 = round(2.3); // round sayiyi yakin oldugu tam sayiya yuvarlar.
	cout << "sonuc: " << sonuc3 << endl;

	return 0;
}
*/


#include <iostream>

using namespace std;

int main()
{




}