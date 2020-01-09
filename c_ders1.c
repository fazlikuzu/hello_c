/* Bu çok satırlı bir yorumdur.
   Kodunuza her zaman yorum yazın*/

// Tek satır yorum

// Süslü parantezler arasındaki program derlendikten sonra
// buradan devam edecek

#include <stdio.h> //  printf, scanf için
#include <string.h> //  strcpy için

// define ile sabitler tanımlayabilirsiniz
// Derleyiciye ADSOYAD yerine gelecek tanımlamayı bildirir. 

#define ADSOYAD "Fazli Kuzu"

// Her programın bir "main" fonksiyonu olmalıdır
// main fonksiyonu bilgisayarın kodunuzu işletmeye başladığı yerdir
// Eğer main'den çağrılmayan bir fonksiyonunuz varsa 
// Bunlar hiç çalıştırılmazlar

// Bu, bu programdaki her fonksiyondan erişebileceğiniz "global" 
// bir değişkendir

int globalVar = 101;

main()
{
	// Değişkenler hafızada gerekli verileri tutmak için kullanılan alanlardır
	// Bir değişken ismi harf ile başlamalıdır ama daha sonra 
	// rakam, harf veya alt çizgi içerebilir.

	// Bir "char" 256 tekli karakterden herhangi birini tutabilir
	// Tüm karakterler tırnak içinde gösterillir ''
	// Bir rakamı "char" olarak kaydederseniz matematiksel hesaplamalar 
	// için kullanamazsınız


	char ilkHarf = 'F';

	// Bir "int" -32,768 ile 32,767 arasındaki tüm tamsayıları alabilir 

	int yas = 36;
	
	// Daha büyük ya da daha küçük sayılar için "long int" kullanabilirsiniz
	
	long int cokBuyukSayi = -32767126;

	// "float" kesirli sayılar için kullanılır

	float piDegeri = 3.14159265359;
	
	// "double" "float"'dan daha detaylı sayılar için kullanılır
	
	double gercekPi = 3.1415926535897932384626433832795028841971;
	
	printf("\n");

	// Çoğu c fonksiyon isminde büyük harf yer almaz
	// printf() tırnak içindeki ifadeyi ekrana yazar 
	// \n bir sonraki satıra geçmek için kullanılır
	// Ayrıca: \t - tab, \\ - backslash, \" - Tırnak

	printf("Bu ekrana yazılacak!\n\n");

	// %d verilen karakteri int olarak atar 

	printf("Ben %d yasindayim\n\n", yas);
	
	// %ld is a conversion character for long ints
	
	printf("Big Number %ld\n\n", superBigNum);

	// %f is a conversion character for floats and doubles
	// You can define the number of decimal places as well
	// Size goes from -3.4 * 10^38 to 3.4 * 10^38

	printf("Pi = %.5f\n\n", piValue);
	
	// As you can see the computer representation of a float
	// is imprecise. If you need precision it is best to store
	// decimals as ints
	
	printf("Big Pi = %.20f\n\n", reallyBigPi);
	
	// %c is the conversion character for chars
	
	printf("The first letter of my name is %c\n\n", firstLetter);
	
	// %s is used for strings
	
	printf("My name is %s\n\n", "Derek");
	
	// To create a String you instead create char arrays
	// Every char array has a \0 String Terminator as the last 
	// character, so always make your char arrays at least 1
	// character longer then you need
	
	char myName[12] = "Derek Banas";
	
	// You could also do this char myName[] = "Derek Banas";
	
	printf("My name is %s\n\n", myName);
	
	// You can't assign a new value to a char array
	// You would use strcpy for that
	
	strcpy(myName, "Bob Smith");
	
	printf("My name is %s\n\n", myName);
	
	// scanf() is used to get input from the user
	// You must use the & ampersand before the
	// variable unless you're using %s
	
	char middleInitial;
	
	printf("What is your middle initial? ");
	
	scanf(" %c", &middleInitial);
	
	// You can only except more then one value if you
	// define exactly what you expect to get
	
	char firstName[30], lastName[30];
	
	printf("What is your name? ");
	
	scanf(" %s %s", firstName, lastName);
	
	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);
	
	
	
	// You can also except a / if you know the user will enter it
	
	int month, day, year;
	
	printf("Whats your birth date? ");
	
	scanf(" %d/%d/%d", &month, &day, &year);
	
	printf("Birth Date %d/%d/%d\n\n", month, day, year);
	
	// C Programming Math
	// +, -, *, /, and sometimes % (% only with ints)
	
	int num1 = 12, num2 = 15, numAns;
	
	float decimal1 = 1.2, decimal2 = 1.5, decimalAns;
	
	printf("Integer Calculation %d\n\n", num2 / num1);
	
	printf("Float Calculation %f\n\n", decimal2 / decimal1);
	
	printf("Modulus %d\n\n", num2 % num1);
	
	// Use parentheses when needed
	// Order of Operations
	// Parentheses
	// - Negative Sign, ! Not, ++ Increment, -- Decrement
	// * Multiplication, / Division, % Modulus
	// + Addition, - Subtraction
	// Relational Operators : <, >, <=, >=
	
	printf("Without Parentheses %d\n\n", 3 + 6 * 10);
	
	printf("With Parentheses %d\n\n", (3 + 6) * 10);
	
	int randomNum = 1;
	
	// There are shortcut ways to perform calculations
	// +=, -=, *=, /=, %=, ++, --
	
	printf("1 += 2 : %d\n\n", randomNum, randomNum += 2);
	
	// We didn't do it this way because the addition takes
	// place first 
	
	printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);
	
	// ++ and -- work differently depending on where they are
	
	int exNum = 1;
	
	printf("++%d : %d\n\n", exNum, ++exNum);
	
	exNum = 1;
	
	printf("%d++ : %d\n\n", exNum, exNum++);
	
	// If you ever need to cast one data type to another
	// just put (dataType) before it to cast
	
	int numberEx = 12;
	
	float numberEx2 = 1.234;
	
	int numberEx3 = numberEx / numberEx2;
	
	printf("numberEx / numberEx2 : %f\n\n", (float) numberEx3);
    
	return 0;
}