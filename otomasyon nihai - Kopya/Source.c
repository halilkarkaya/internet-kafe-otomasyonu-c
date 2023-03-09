#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	char ad[43];//ad secimi
	int yas;//yas secimi icin
	char sayi;//kural  onay icin
	int sec;//bilgisayar mi market mi
	int borc = 0;// borc icin
	char icecek;//menu  icin
	int bilgsec;//bilgisayar secimi icin
	int elemanSec;//ps5 bilgisayarvb sectimek icin
	int premiumtt[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int x;//oturmak istedigi masayi sectimek icin
	int premiumt[20] = { 21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };
	int premium[20] = { 41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60 };
	int gariban[40] = { 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80 };
	int ps5;//ps5 oyunu sectirmek icin
	int ps4;//ps 4 oyunu sectirmek icin
	int vr;//vr oyunu sectirmek icin
	int film;//cocuklara film sectirmek icn
	int saart1;//ps5 ps4 ps3 sure secimi icin
	time_t tarih;
	system("color b");
	
	







	FILE* kural1;

	char kur;
	kural1 = fopen("kurallar.txt", "r+");//kurallari göstermek için
	do
	{

		kur = getc(kural1); //txt kurallar
		printf("%c", kur);

	} while (kur!= EOF); 

	fclose(kural1);

	for (;;)
	{
		scanf("%c", &sayi);                    //kurallari onaylamasi icin

		if (sayi == '1')
			break;
		else
		{
			printf("\thata yaptiniz 1 'e basin");
		}
	}




	system("cls");
	printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n\n\t\t\t\t\t\t\t\t\t ZAFER INTERNET KAFEYE HOS GELDINIZ \n\n\n");
	time(&tarih);
	struct tm* z = localtime(&tarih);

	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\ttarih= %d.", z->tm_mday);
	printf("%d", z->tm_mon);
	printf(".%d\n", z->tm_year + 1900);
	
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tsaat = %d", z->tm_hour);
	printf(":%d", z->tm_min);








	FILE* bilgiler;
	bilgiler = fopen("kullanici_bilgisi.txt", "a");

	printf("\n\n\t Adinizi  girin:\t");
	scanf("%s", &ad);
	printf("\t Yasinizi girin:\t");
	scanf("%d", &yas);
	fprintf(bilgiler, "\n_______________________________________");
	fprintf(bilgiler, "\n\nkullanicinin giris yaptigi tarih %d.", z->tm_mday);
	fprintf(bilgiler, "%d.", z->tm_mon);
	fprintf(bilgiler, "%d", z->tm_year+1900);
	fprintf(bilgiler, "\n\nkullanicinin giris yaptigi saat %d:", z->tm_hour);
	fprintf(bilgiler, "%d\n\n", z->tm_min);
	fprintf(bilgiler, "kullanicinin adi  = %s\n",ad);
	fprintf(bilgiler, "kullanicinin yasi = %d\n",yas);
	

	fclose(bilgiler);
	system("cls");







	if (12 < yas)
	{

		FILE* secim;
		char secenek;
		secim = fopen("secım.txt", "r+");       //zafer market mi bilgisayar odasi icin mi
		do
		{

			secenek= getc(secim); 
			printf("%c", secenek);

		} while (secenek != EOF);
		fclose(secim);






		scanf("%d", &sec);
		system("cls");
		switch (sec)
		{
		case 1:

		{FILE* menu1;                 

		char karakter;
		menu1 = fopen("menu.txt", "r+");
		do
		{

			karakter = getc(menu1);
			printf("%c", karakter);

		} while (karakter != EOF);//Dosya Sonu veya EOF, bir dosya veya veri kümesinin sonunu gösteren dosya işaretçisi için özel bir adlandırmadır.

		fclose(menu1);
		}
		




		bilgiler = fopen("kullanici_bilgisi.txt", "a");//kullanicinin aldiği yiyecek icecegi  txt'ye yazdirmak icin

			for (;;) {
				scanf("%c", &icecek);
				if (icecek == '1')
				{
					printf("\tCIKIS YAPTINIZ.\n");
					printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
					break;
				}

				else if (icecek == 'a')
				{
					borc += 5;
					printf("Cay aldiniz.                     ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler,"cay aldi\n");
				}
				else  if (icecek == 'b')
				{
					borc += 20;
					printf("Kahve espresso aldiniz.          ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "kahve espresso aldi\n");
				}
				else if (icecek == 'c')
				{
					borc += 20;
					printf("Kahve Cappuccino aldiniz.        ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Cappuccino  aldi\n");
				}
				else if (icecek == 'd')
				{
					borc += 20;
					printf("Turk kahvesi aldiniz.            ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "turk kahvesi aldi\n");
				}
				else if (icecek == 'e')
				{
					borc += 5;
					printf("Zafer gazoz aldiniz.             ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "zafer gazoz  aldi\n");
				}
				else if (icecek == 'f') {
					borc += 5;
					printf("Zafer gazoz meyve aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Zafer gazoz meyve aldi\n");
				}
				else if (icecek == 'g')
				{
					borc += 10;
					printf("kola aldiniz.                    ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "kola aldi\n");
				}
				else if (icecek == 'h') {
					borc += 10;
					printf("Fanta aldiniz.                   ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "fanta aldi\n");
				}
				else if (icecek == 'i')
				{
					borc += 8;
					printf("Didi aldiniz.                    ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "didi aldi\n");
				}
				else if (icecek == 'j') {
					borc += 18;
					printf("Nescafe Xpress aldiniz.          ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Nescafe Xpress aldi\n");
				}
				else if (icecek == 'k') {
					borc += 15;
					printf("Ketcapli Cips aldiniz.           ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Ketcapli cips aldi\n");
				}
				else if (icecek == 'm') {
					borc += 15;
					printf("Acili Cips aldiniz.              ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Acili Cips aldi\n");
				}
				else if (icecek == 'n') {
					borc += 15;
					printf("Sade Cips aldiniz.               ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Sade Cips aldi\n");
				}
				else if (icecek == 'o') {
					borc += 5;
					printf("Popkek Cikolatali aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "popkek cikolatali aldi\n");
				}
				else if (icecek == 'p') {
					borc += 5;
					printf("Popkek limonlu aldiniz.          ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "popkek limonlu aldi\n");
				}
				else if (icecek == 'r') {
					borc += 16;
					printf("Torku Ruseymli 3'lu aldiniz.     ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Torku Ruseymli 3'lu aldi\n");
				}
				else if (icecek == 's') {
					borc += 5;
					printf("Ulker Cikolatali Gofret aldiniz. ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Ulker Cikolatali Gofret aldi\n");
				}
				else if (icecek == 't') {
					borc += 5;
					printf("Kinder Sut Dilimi aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Kinder Sut Dilimi \n");
				}
				else if (icecek == 'u') {
					borc += 3;
					printf("Eti puf aldiniz.                ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Eti Puf aldi \n");
				}
				else if (icecek == 'v') {
					borc += 7;
					printf("Gong  aldiniz.                  ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
					fprintf(bilgiler, "Gong aldi \n");
				}

				else
				{

				}

			}
			fclose(bilgiler);



		case 2:system("cls");                           
		FILE* secim11; 
		char ssecenek;                            //bilgisayar ps5 vb. sectirmek icin
		secim11 = fopen("secim2.txt", "r+");         
		do
		{

			ssecenek = getc(secim11);
			printf("%c", ssecenek);

		} while (ssecenek != EOF);
			






		    scanf("%d", &elemanSec);
			system("cls");
			switch (elemanSec)
			{
			case 1: {FILE* bilgio;
				char bilgise;
				bilgio = fopen("bilgi_ozellik.txt", "r+");  //4 cesit bilgisayari ekrana bastirmasi icin
				do
				{

					bilgise = getc(bilgio);
					printf("%c", bilgise);

				} while (bilgise != EOF);
				fclose(bilgio);
			}				
			
		
				  bilgiler = fopen("kullanici_bilgisi.txt","a");     //hangi masaya ve kaç saat oturdugunu yazdirmasi icin

				scanf("%d", &bilgsec);
				system("cls");
				switch (bilgsec)
				{
				case 1:for (int i = 0; i < 20; i++)
				{
					printf("\t%d\n", premiumtt[i]);

				}
					  printf("\tOturmak istediginiz masayi secin.\n");
					  scanf("%d", &x);
					  fprintf(bilgiler, "premium++ oturdugu masa %d\n",x);
					  int saart;  
					  if (x <= 20 && 0 < x)
					  {
						  system("cls");
						  printf("\t%d numarali masaya oturmadan once surenizi secin.\n", x);
						  printf("\tKac saat oynayacaginizi secin.\n\n ");
						  printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
						  scanf("%d", &saart);
						  switch (saart)
						  {
						  case 1:printf("30dk");                                  //premium ++
							  borc += 25; 
							  fprintf(bilgiler,"30dklik aldi ");
							  break;
						  case 2:printf("1 saat");
							  borc += 50;
							  fprintf(bilgiler, "1 saatlik aldi ");
							  break;
						  case 3:printf("1 saat 30dk");
							  borc += 75;
							  fprintf(bilgiler, "1 saat 30dklik aldi ");
							  break;
						  case 4:printf("2 saat");
							  borc += 100;
							  fprintf(bilgiler, "2saatlik aldi");
							  break;
						  case 5:printf("2 saat 30dk");
							  borc += 125;
							  fprintf(bilgiler, "2 saat 30dklik aldi ");
							  break;
						  case 6:printf("3 saat");
							  borc += 150;
							  fprintf(bilgiler, "3saatlik aldi ");
							  break;
						  case 7:printf("3 saat 30dk");
							  borc += 175;
							  fprintf(bilgiler, "3 saat 30dklik aldi ");
							  break;
						  case 8:printf("4 saat ");
							  borc += 200;
							  fprintf(bilgiler, "4 saatlik aldi ");
							  break;
						  case 9:printf("4 saat 30dk");
							  borc += 225;
							  fprintf(bilgiler, "4 saat 30dklik aldi ");
							  break;
						  case 10:printf("5 saat");
							  borc += 250;
							  fprintf(bilgiler, "5 saatlik aldi ");
							  break;
						  case 11:printf("5 saat 30dk");
							  borc += 275;
							  fprintf(bilgiler, "5 saat 30dklik aldi ");
							  break;
						  case 12:printf("6 saat");
							  borc += 300;
							  fprintf(bilgiler, "6 saatlik aldi ");
							  break;
						  case 13:printf("6 saat 30dk");
							  borc += 325;
							  fprintf(bilgiler, "6 saat 30dklik aldi ");
							  break;
						  case 14:printf("7 saat ");
							  borc += 350;
							  fprintf(bilgiler, "7 saatlik aldi ");
							  break;
						  case 15:printf("7 saat 30dk");
							  borc += 375;
							  fprintf(bilgiler, "7 saat 30dklik aldi ");
							  break;
						  case 16:printf("8 saat");
							  borc += 400;
							  fprintf(bilgiler, "8 saatlik aldi ");
							  break;
						  default:  fprintf(bilgiler, "yanlis bir süre secimi yapti");
							  break;
						  }

					  }
					  else
					  {
						  printf("\tYanlis bir secim yaptiniz");
						
					  }


					  break;


				case 2: for (int i = 0; i < 20; i++)            //premıum+
				{
					printf("\t%d\n", premiumt[i]);

				}
					  
					  printf("\tOturmak istediginiz masayi secin\n");
					  scanf("%d", &x);
					  fprintf(bilgiler, "premium+ oturdugu masa %d\n", x);
					  if (x <= 40 && 20 < x)
					  {
						  system("cls");
						  printf("\t%d numarali masaya oturmadan once surenizi secin\n", x);
						  printf("\tKac saat oynayacaginizi secin.\n\n ");

						  printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
						  scanf("%d", &saart);
						  switch (saart)
						  {
						  case 1:printf("30dk");
							  borc += 20;
							  fprintf(bilgiler, " 30dklik aldi\n ");
							  break;
						  case 2:printf("1 saat");
							  borc += 40;
							  fprintf(bilgiler, "1 saat aldi\n ");
							  break;
						  case 3:printf("1 saat 30dk");
							  borc += 80;
							  fprintf(bilgiler, "1 saat 30dklik aldi\n ");
							  break;
						  case 4:printf("2 saat");
							  borc += 100;
							  fprintf(bilgiler, "2 saatlik aldi\n ");
							  break;
						  case 5:printf("2 saat 30dk");
							  borc += 120;
							  fprintf(bilgiler, "2 saat 30dklik aldi\n ");
							  break;
						  case 6:printf("3 saat");
							  borc += 140;
							  fprintf(bilgiler, "3 saatlik aldi\n ");
							  break;
						  case 7:printf("3 saat 30dk");
							  borc += 160;
							  fprintf(bilgiler, "3 saat 30dklik aldi\n ");
							  break;
						  case 8:printf("4 saat ");
							  borc += 180;
							  fprintf(bilgiler, "4 saatlik aldi\n ");
							  break;
						  case 9:printf("4 saat 30dk");
							  borc += 200;
							  fprintf(bilgiler, "4 saat 30dklik aldi\n ");
							  break;
						  case 10:printf("5 saat");
							  borc += 220;
							  fprintf(bilgiler, "5 saat aldi\n ");
							  break;
						  case 11:printf("5 saat 30dk");
							  borc += 240;
							  fprintf(bilgiler, "5 saat 30dklik aldi\n ");
							  break;
						  case 12:printf("6 saat");
							  borc += 260;
							  fprintf(bilgiler, "6 saatlik aldi\n ");
							  break;
						  case 13:printf("6 saat 30dk");
							  borc += 280;
							  fprintf(bilgiler, "6 saat 30dklik aldi\n ");
							  break;
						  case 14:printf("7 saat ");
							  borc += 300;
							  fprintf(bilgiler, "7 saatlik aldi\n ");
							  break;
						  case 15:printf("7 saat 30dk");
							  borc += 320;
							  fprintf(bilgiler, "7 saat 30dklik aldi\n ");
							  break;
						  case 16:printf("8 saat");
							  borc += 340;
							  fprintf(bilgiler, "8 saatlik aldi\n ");
							  break;
						  default:  fprintf(bilgiler, "yanlis bir süre secimi yapti");
							  break;
						  }

					  }
					  else
					  {
						  printf("\tYanlis bir secim yaptiniz.\n");
						  
					  }
					  break;

				case 3:for (int i = 0; i < 20; i++)                             //premıum
				{
					printf("\t%d\n", premium[i]);

				}
					  printf("\tOturmak istediginiz masayi secin.\n");
					  scanf("%d", &x);
					  fprintf(bilgiler, "premium oturdugu masa %d\n", x);
					  if (x <= 60 && 40 < x)
					  {
						  system("cls");
						  printf("\t%d numarali masaya oturmadan once surenizi secin.\n\n", x);
						  printf("Kac saat oynayacaginizi secin.\n\n ");


						  printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
						  scanf("%d", &saart);
						  switch (saart)
						  {
						  case 1:printf("30dk");
							  borc += 15;
							  fprintf(bilgiler, "30dklik aldi\n ");
							  break;
						  case 2:printf("1 saat");
							  borc += 30;
							  fprintf(bilgiler, "1 saat aldi\n ");
							  break;
						  case 3:printf("1 saat 30dk");
							  borc += 45;
							  fprintf(bilgiler, "1 saat 30dklik aldi\n ");
							  break;
						  case 4:printf("2 saat");
							  borc += 60;
							  fprintf(bilgiler, "2 saatlik aldi\n ");
							  break;
						  case 5:printf("2 saat 30dk");
							  borc += 75;
							  fprintf(bilgiler, "2 saat 30dklik aldi\n ");
							  break;
						  case 6:printf("3 saat");
							  borc += 90;
							  fprintf(bilgiler, "3 saatlik aldi\n ");
							  break;
						  case 7:printf("3 saat 30dk");
							  borc += 105;
							  fprintf(bilgiler, "3 saat 30dklik aldi\n ");
							  break;
						  case 8:printf("4 saat ");
							  borc += 120;
							  fprintf(bilgiler, "4 saatlik aldi\n ");
							  break;
						  case 9:printf("4 saat 30dk");
							  borc += 135;
							  fprintf(bilgiler, "4 saat 30dklik aldi\n ");
							  break;
						  case 10:printf("5 saat");
							  borc += 150;
							  fprintf(bilgiler, "5 saat aldi\n ");
							  break;
						  case 11:printf("5 saat 30dk");
							  borc += 165;
							  fprintf(bilgiler, "5 saat 30dklik aldi\n ");
							  break;
						  case 12:printf("6 saat");
							  borc += 180;
							  fprintf(bilgiler, "6 saatlik aldi\n ");
							  break;
						  case 13:printf("6 saat 30dk");
							  borc += 195;
							  fprintf(bilgiler, "6 saat 30dklik aldi\n ");
							  break;
						  case 14:printf("7 saat ");
							  borc += 210;
							  fprintf(bilgiler, "7 saatlik aldi\n ");
							  break;
						  case 15:printf("7 saat 30dk");
							  borc += 225;
							  fprintf(bilgiler, "7 saat 30dklik aldi\n ");
							  break;
						  case 16:printf("8 saat");
							  borc += 240;
							  fprintf(bilgiler, "8 saatlik aldi\n ");
							  break;
						  default:  fprintf(bilgiler, "yanlis bir süre secimi yapti");
							  break;
						  }

					  }
					  else
					  {
						  printf("\tYanlis bir secim yaptiniz.");
					  }
					   
					  break;
				case 4:for (int i = 0; i < 20; i++)                      //gariban
				{
					printf("\t%d\n", gariban[i]);

				}
					  printf("Oturmak istediginiz masayi secin. ");
					  scanf("%d", &x);
					  fprintf(bilgiler, "gariban oturdugu masa %d\n", x);
					  if (x <= 80 && 60 < x)
					  {
						  system("cls");
						  printf("%d numarali masaya oturmadan once surenizi secin", x);
						  printf("Kac saat oynayacaginizi secin.\n\n ");

						  printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
						  scanf("%d", &saart);
						  switch (saart)
						  {
						  case 1:printf("30dk");
							  borc += 5;
							  fprintf(bilgiler, " 30dklik aldi\n ");
							  break;
						  case 2:printf("1 saat");
							  borc += 10;
							  fprintf(bilgiler, "1 saat aldi\n ");
							  break;
						  case 3:printf("1 saat 30dk");
							  borc += 15;
							  fprintf(bilgiler, "1 saat 30dklik aldi\n ");
							  break;
						  case 4:printf("2 saat");
							  borc += 20;
							  fprintf(bilgiler, "2 saatlik aldi\n ");
							  break;
						  case 5:printf("2 saat 30dk");
							  borc += 25;
							  fprintf(bilgiler, "2 saat 30dklik aldi\n ");
							  break;
						  case 6:printf("3 saat");
							  borc += 30;
							  fprintf(bilgiler, "3 saatlik aldi\n ");
							  break;
						  case 7:printf("3 saat 30dk");
							  borc += 35;
							  fprintf(bilgiler, "3 saat 30dklik aldi\n ");
							  break;
						  case 8:printf("4 saat ");
							  borc += 40;
							  fprintf(bilgiler, "4 saatlik aldi\n ");
							  break;
						  case 9:printf("4 saat 30dk");
							  borc += 45;
							  fprintf(bilgiler, "4 saat 30dklik aldi\n ");
							  break;
						  case 10:printf("5 saat");
							  borc += 50;
							  fprintf(bilgiler, "5 saat aldi\n ");
							  break;
						  case 11:printf("5 saat 30dk");
							  borc += 55;
							  fprintf(bilgiler, "5 saat 30dklik aldi\n ");
							  break;
						  case 12:printf("6 saat");
							  borc += 60;
							  fprintf(bilgiler, "6 saatlik aldi\n ");
							  break;
						  case 13:printf("6 saat 30dk");
							  borc += 65;
							  fprintf(bilgiler, "6 saat 30dklik aldi\n ");
							  break;
						  case 14:printf("7 saat ");
							  borc += 70;
							  fprintf(bilgiler, "7 saatlik aldi\n ");
							  break;
						  case 15:printf("7 saat 30dk");
							  borc += 75;
							  fprintf(bilgiler, "7 saat 30dklik aldi\n ");
							  break;
						  case 16:printf("8 saat");
							  borc += 80;
							  fprintf(bilgiler, "8 saatlik aldi\n ");
							  break;
						  default:printf("hata yaptiniz");
							  break;
						  }

					  }
					  else
					  {
						  printf("Yanlis bir secim yaptiniz.");
					  }
					  break;


				default:printf("Hatali bir islem yaptiniz.");
					break;
				}//bligisayar seçimi için

				fclose(bilgiler);
				break;
			case 2:system("cls");
				bilgiler = fopen("kullanici_bilgisi.txt", "a");
				fprintf(bilgiler, "ps5e oturdu\n");
				printf("\n\n\n\n\n\n\n\t\t\t\tPLAY STATION 5\n");
				printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");



				printf("\n\t1=God Of War Ragnarok\n\n");

				printf("\t2=Fifa 2023\n\n");

				printf("\t3=Call Of Duty Modern Warfere II\t\t\t\t\t 40TL\n\n");

				printf("\t4=NBA 2K23\n\n");

				printf("\t5=Elden Ring\n\n");

				printf("\t6=Spider-Man: Miles Morales\n\n");

				printf("\t7=Fifa 2022\n\n");



				printf("\tOynamak istediginiz oyunu secin: ");
				scanf("%d", &ps5);                                                 //ps5 oyun secimi

				system("cls");
				switch (ps5)
				{
				case 1:printf("\t1 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, "God Of War Ragnarok oyununu secti\n");
					break;

				case 2:printf("\t2 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, "Fifa 2023 oyununu secti\n");
					break;

				case 3:printf("\t3 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, "Call Of Duty Modern Warfere II oyununu secti\n");
					break;

				case 4:printf("\t4 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, " NBA 2K23 oyununu secti\n");
					break;

				case 5:printf("\t5 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, " Elden Ring oyununu secti\n");
					break;

				case 6:printf("\t6 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, " Spider-Man: Miles Morales oyununu secti\n");
					break;

				case 7:printf("\t7 numarali ps5'e oturmadan once surenizi secin.");
					fprintf(bilgiler, " Spider-Man: Miles Morales oyununu secti\n");
					break;

				default:printf("\tHata yaptiniz.");
					break;
				}
				
				printf("\n\n\t\tNe kadar oynamak istediginizi secin\n\n");
				printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
				scanf("%d", &saart1);
				switch (saart1)
				{
				case 1:printf("30dk");
					borc += 20;                                      //ps5 sure secimi
					fprintf(bilgiler, " 30dklik aldi\n ");
					break;
				case 2:printf("1 saat");
					borc += 40;
					fprintf(bilgiler, "1 saat aldi\n ");
					break;
				case 3:printf("1 saat 30dk");
					borc += 80;
					fprintf(bilgiler, "1 saat 30dklik aldi\n ");
					break;
				case 4:printf("2 saat");
					borc += 100;
					fprintf(bilgiler, "2 saatlik aldi\n ");
					break;
				case 5:printf("2 saat 30dk");
					borc += 120;
					fprintf(bilgiler, "2 saat 30dklik aldi\n ");
					break;
				case 6:printf("3 saat");
					borc += 140;
					fprintf(bilgiler, "3 saatlik aldi\n ");
					break;
				case 7:printf("3 saat 30dk");
					borc += 160;
					fprintf(bilgiler, "3 saat 30dklik aldi\n ");
					break;
				case 8:printf("4 saat ");
					borc += 180;
					fprintf(bilgiler, "4 saatlik aldi\n ");
					break;
				case 9:printf("4 saat 30dk");
					borc += 200;
					fprintf(bilgiler, "4 saat 30dklik aldi\n ");
					break;
				case 10:printf("5 saat");
					borc += 220;
					fprintf(bilgiler, "5 saat aldi\n ");
					break;
				case 11:printf("5 saat 30dk");
					borc += 240;
					fprintf(bilgiler, "5 saat 30dklik aldi\n ");
					break;
				case 12:printf("6 saat");
					borc += 260;
					fprintf(bilgiler, "6 saatlik aldi\n ");
					break;
				case 13:printf("6 saat 30dk");
					borc += 280;
					fprintf(bilgiler, "6 saat 30dklik aldi\n ");
					break;
				case 14:printf("7 saat ");
					borc += 300;
					fprintf(bilgiler, "7 saatlik aldi\n ");
					break;
				case 15:printf("7 saat 30dk");
					borc += 320;
					fprintf(bilgiler, "7 saat 30dklik aldi\n ");
					break;
				case 16:printf("8 saat");
					borc += 340;
					fprintf(bilgiler, "8 saatlik aldi\n ");
					break;
				default: printf("hatalı bir secim yaptiniz");
					break;
				}
				break;
				fclose(bilgiler);
			case 3:system("cls");

				bilgiler = fopen("kullanici_bilgisi.txt", "a");
				fprintf(bilgiler, "ps4'e oturdu\n");
				
				printf("\n\n\n\n\n\t\t\t\tPLAY STATION 4\n");
				printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");

				printf("\n\t1=God Of War Ragnarok\n\n");

				printf("\t2=Dying Light 2\n\n");

				printf("\t3=Call Of Duty Modern Warfere II\n\n");

				printf("\t4=NBA 2K23\t\t\t\t\t\t\t\t\t30TL\n\n");

				printf("\t5=Elden Ring\n\n");

				printf("\t6=Spider-Man: Miles Morales\n\n");

				printf("\t7=Fifa 2022\n\n");

				printf("\tOynamak istediginiz oyunu secin:");
				scanf("%d", &ps4);                                       //ps4 oyun secimi
				system("cls");
				switch (ps4)
				{
				case 1:printf("1 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "God Of War Ragnarok oyununu secti\n");
					break;

				case 2:printf("2 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "Dying Light 2 oyununu secti\n");
					break;

				case 3:printf("3 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "Call Of Duty Modern Warfere II oyununu secti\n");
					break;

				case 4:printf("4 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "NBA 2K23 oyununu secti\n");
					break;

				case 5:printf("5 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "Elden Ring oyununu secti\n");
					break;

				case 6:printf("6 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "Spider-Man: Miles Morales oyununu secti\n");
					break;

				case 7:printf("7 numarali ps4'e oturmadan once surenizi secin \n");
					fprintf(bilgiler, "Fifa 2022 oyununu secti\n");
					break;

				default:printf("hatali bir tuslama yaptiniz ");
					break;
				}
				printf("\n\t\tNe kadar oynamak istediginizi secin\n\n");
				printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
				scanf("%d", &saart1);
				system("cls");
				switch (saart1)                                //ps4 sure secimi
				{
				case 1:printf("30dk");
					borc += 15;
					fprintf(bilgiler, "30dklik aldi\n ");
					break;
				case 2:printf("1 saat");
					borc += 30;
					fprintf(bilgiler, "1 saat aldi\n ");
					break;
				case 3:printf("1 saat 30dk");
					borc += 45;
					fprintf(bilgiler, "1 saat 30dklik aldi\n ");
					break;
				case 4:printf("2 saat");
					borc += 60;
					fprintf(bilgiler, "2 saatlik aldi\n ");
					break;
				case 5:printf("2 saat 30dk");
					borc += 75;
					fprintf(bilgiler, "2 saat 30dklik aldi\n ");
					break;
				case 6:printf("3 saat");
					borc += 90;
					fprintf(bilgiler, "3 saatlik aldi\n ");
					break;
				case 7:printf("3 saat 30dk");
					borc += 105;
					fprintf(bilgiler, "3 saat 30dklik aldi\n ");
					break;
				case 8:printf("4 saat ");
					borc += 120;
					fprintf(bilgiler, "4 saatlik aldi\n ");
					break;
				case 9:printf("4 saat 30dk");
					borc += 135;
					fprintf(bilgiler, "4 saat 30dklik aldi\n ");
					break;
				case 10:printf("5 saat");
					borc += 150;
					fprintf(bilgiler, "5 saat aldi\n ");
					break;
				case 11:printf("5 saat 30dk");
					borc += 165;
					fprintf(bilgiler, "5 saat 30dklik aldi\n ");
					break;
				case 12:printf("6 saat");
					borc += 180;
					fprintf(bilgiler, "6 saatlik aldi\n ");
					break;
				case 13:printf("6 saat 30dk");
					borc += 195;
					fprintf(bilgiler, "6 saat 30dklik aldi\n ");
					break;
				case 14:printf("7 saat ");
					borc += 210;
					fprintf(bilgiler, "7 saatlik aldi\n ");
					break;
				case 15:printf("7 saat 30dk");
					borc += 225;
					fprintf(bilgiler, "7 saat 30dklik aldi\n ");
					break;
				case 16:printf("8 saat");
					borc += 240;
					fprintf(bilgiler, "8 saatlik aldi\n ");
					break;
				default: printf("hatalı bir secim yaptiniz");
					break;
				}
				break;
				
				fclose(bilgiler);

			case 4:system("cls");

				bilgiler = fopen("kullanici_bilgisi.txt", "a");

				fprintf(bilgiler, "VR secti \n ");

				printf("\n\n\n\n\n\t\t\t\t\tVR GOZLUK\n\n");
				printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");

				printf("\t1=Resident Evil 7\n\n");

				printf("\t2=Batman Arkham VR \n\n");

				printf("\t3=Iron Man\n\n");

				printf("\t4=Half-Life: Alyx\t\t\t\t\t40TL\n\n");

				printf("\t5=Creed: Rise to Glory\n\n");

				printf("\t6=Farpoint\n\n");

				printf("\t7=DOOM VFR\n\n");


				printf("\n\t\t Oynamak istediginiz oyunu secin:\n");
				scanf("%d", &vr);
				system("cls");
				switch (vr)
				{
				case 1:printf("\n\t1 numarali vr odasina gitemden once surenizi secin\n");
					fprintf(bilgiler, " Resident Evil 7 oyununu secti\n ");
					break;

				case 2:printf("\n\t2 numarali vr odasina gitmeden once surenizi secin.\n");
					fprintf(bilgiler, " Batman Arkham VR oyununu secti\n ");
					break;

				case 3:printf("\n\t3 numarali vr odasina gitemden once surenizi secin.\n");
					fprintf(bilgiler, "Iron Man oyununu secti\n ");
					break;

				case 4:printf("\n\t4 numarali vr odasina gitemden once surenizi secin.\n");
					fprintf(bilgiler, "Half-Life: Alyx oyununu secti\n ");
					break;

				case 5:printf("\n\t5 numarali vr odasina gitemden once surenizi secin.\n");
					fprintf(bilgiler, " Creed: Rise to Glory oyununu secti\n ");
					break;

				case 6:printf("\n\t6 numarali vr odasina gitemden once surenizi secin.\n");
					fprintf(bilgiler, " Farpoint oyununu secti\n ");
					break;

				case 7:printf("\n\t7 numarali vr odasina gitemden once surenizi secin.\n");
					fprintf(bilgiler, " DOOM VFR oyununu secti\n ");
					break;

				default:printf("Hata yaptiniz.");
					break;



				}
				printf("\n\t\tNe kadar oynamak istediginizi secin\n");
				printf("\t\t1=30dk\n\n\t\t2=1saat\n\n\t\t3=1 saat 30 dk\n\n\t\t4= 2 saat\n\n\t\t5= 2 saat 30dk\n\n\t\t6= 3 saat\n\n\t\t7= 3 saat 30dk\n\n\t\t8= 4 saat\n\n\t\t9= 4 saat 30 dk\n\n\t\t10= 5 saat\n\n\t\t11= 5 saat 30dk\n\n\t\t12= 6 saat\n\n\t\t13= 6 saat 30 dk\n\n\t\t14= 7 saat\n\n\t\t15= 7 saat 30dk\n\n\t\t16= 8 saat\n\n\t\t");
				scanf("%d", &saart1);
				system("cls");                          //vr sure secimi
				switch (saart1)
				{
				case 1:printf("30dk");
					borc += 20;
					fprintf(bilgiler, " 30dklik aldi\n ");
					break;
				case 2:printf("1 saat");
					borc += 40;
					fprintf(bilgiler, "1 saat aldi\n ");
					break;
				case 3:printf("1 saat 30dk");
					borc += 80;
					fprintf(bilgiler, "1 saat 30dklik aldi\n ");
					break;
				case 4:printf("2 saat");
					borc += 100;
					fprintf(bilgiler, "2 saatlik aldi\n ");
					break;
				case 5:printf("2 saat 30dk");
					borc += 120;
					fprintf(bilgiler, "2 saat 30dklik aldi\n ");
					break;
				case 6:printf("3 saat");
					borc += 140;
					fprintf(bilgiler, "3 saatlik aldi\n ");
					break;
				case 7:printf("3 saat 30dk");
					borc += 160;
					fprintf(bilgiler, "3 saat 30dklik aldi\n ");
					break;
				case 8:printf("4 saat ");
					borc += 180;
					fprintf(bilgiler, "4 saatlik aldi\n ");
					break;
				case 9:printf("4 saat 30dk");
					borc += 200;
					fprintf(bilgiler, "4 saat 30dklik aldi\n ");
					break;
				case 10:printf("5 saat");
					borc += 220;
					fprintf(bilgiler, "5 saat aldi\n ");
					break;
				case 11:printf("5 saat 30dk");
					borc += 240;
					fprintf(bilgiler, "5 saat 30dklik aldi\n ");
					break;
				case 12:printf("6 saat");
					borc += 260;
					fprintf(bilgiler, "6 saatlik aldi\n ");
					break;
				case 13:printf("6 saat 30dk");
					borc += 280;
					fprintf(bilgiler, "6 saat 30dklik aldi\n ");
					break;
				case 14:printf("7 saat ");
					borc += 300;
					fprintf(bilgiler, "7 saatlik aldi\n ");
					break;
				case 15:printf("7 saat 30dk");
					borc += 320;
					fprintf(bilgiler, "7 saat 30dklik aldi\n ");
					break;
				case 16:printf("8 saat");
					borc += 340;
					fprintf(bilgiler, "8 saatlik aldi\n ");
					break;
				default: printf("hatalı bir secim yaptiniz");
					break;
				}
				break;

			}	fclose(bilgiler);

		default:printf("hata yaptiniz");
			break;
		}
	
		
		getchar();
		char odeme;
		system("cls");                                                         //odeme alma ekrani
		if (borc==0)
		{
			printf("\n\t\tborcunuz yoktur");
		
		}
		else {
			printf("\t\t\t\t\t\t\t\3Odeme yontemi seciniz:\n\n\n");
			printf("\t\t\t\t  1=kart\n");
			printf("\t\t\t\t\3 2=nakit\n\n");
			printf("\t\t\t\t\1\3\2  Borc = %d  ", borc);
			for (;;)
			{
				scanf("%c", &odeme);

				if (odeme == '1') {
					printf("\t\3\3\3sistemde yasanan veri tabani eksikliginden dolayi bu islem su an kullanilamaz \3\3\3");
				}
				else if (odeme == '2') {
					printf("\t\t\t\ borcunuzu gorevliye teslim edin");
					break;

				}
				else {


				}
			}
		}
		int sifre = 123457;     //7 sasirtamaca olsun diye
		printf("\n___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
		printf("\n\n\t\tKullanicilarin verilerini gormek istiyorsaniz sifreyi girin =>\n");
		printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
		scanf("%d", &sifre);
		if (sifre == 123457)
		{
			bilgiler = fopen("kullanici_bilgisi.txt", "r+");
			char yazdir_bilgi;
			bilgiler = fopen("kullanici_bilgisi.txt", "r+");
			do
			{

				yazdir_bilgi = getc(bilgiler);
				printf("%c", yazdir_bilgi);

			} while (yazdir_bilgi != EOF);
			fclose(bilgiler);
		}
		else {
			printf("yanlis sifre giris yapamazsiniz yapamazsiniz");


		}
	}  
	else//cocuklara ozel alan
	{//cilekli cikolatali baklavali milkshake
	int menu11;
	printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
	printf("\n\n\t\t\t\t\t\t\t\t\t \1\1\1 ZAFER KIDS'e HOS GELDINIZ \1\1\1 \n\n\n");
	printf("MERHABA %s 12 yasindan kucuk oldugun icin internet kafemizde sadece listede olan filmlerden izleyebilirsin.\n ", ad);

	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\ 1=Zafer Market\n\t\t\t\t\t\t\t\t 2=Film\n");
	scanf("%d", &menu11);
	switch (menu11)
	{
	case 1:
		system("cls");

		bilgiler = fopen("kullanici_bilgisi.txt", "a");





		FILE* menu2;

		char karakter1;
		menu2 = fopen("cocuk_menu.txt", "r+");//cocuk menüsünü ekrana yazdırmak icin
		do
		{

			karakter1 = getc(menu2);
			printf("%c", karakter1);

		} while (karakter1 != EOF);

		for (;;) {
			scanf("%c", &icecek);
			if (icecek == '1')
			{
				printf("\tCIKIS YAPTINIZ.\n");
				printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
				break;
			}

			else if (icecek == 'a')
			{
				borc += 5;
				printf("Cay aldiniz.                     ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "cay aldi\n");
			}
			else  if (icecek == 'b')
			{
				borc += 20;
				printf("Cilekli milksahke aldiniz.          ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Cilekli milksahke aldi\n");
			}
			else if (icecek == 'c')
			{
				borc += 20;
				printf("Cikolatali milksahke aldiniz.        ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Cikolatali milksahke aldi\n");
			}
			else if (icecek == 'd')
			{
				borc += 20;
				printf("Turk kahvesi aldiniz.            ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "turk kahvesi aldi\n");
			}
			else if (icecek == 'e')
			{
				borc += 5;
				printf("Zafer gazoz aldiniz.             ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "zafer gazoz  aldi\n");
			}
			else if (icecek == 'f') {
				borc += 5;
				printf("Zafer gazoz meyve aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Zafer gazoz meyve aldi\n");
			}
			else if (icecek == 'g')
			{
				borc += 10;
				printf("kola aldiniz.                    ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "kola aldi\n");
			}
			else if (icecek == 'h') {
				borc += 10;
				printf("Fanta aldiniz.                   ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "fanta aldi\n");
			}
			else if (icecek == 'i')
			{
				borc += 8;
				printf("Didi aldiniz.                    ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "didi aldi\n");
			}
			else if (icecek == 'j') {
				borc += 20;
				printf("Baklavali milksahke aldiniz.     ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Baklavali milksahke aldi\n");
			}
			else if (icecek == 'k') {
				borc += 15;
				printf("Ketcapli Cips aldiniz.           ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Ketcapli cips aldi\n");
			}
			else if (icecek == 'm') {
				borc += 15;
				printf("Acili Cips aldiniz.              ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Acili Cips aldi\n");
			}
			else if (icecek == 'n') {
				borc += 15;
				printf("Sade Cips aldiniz.               ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Sade Cips aldi\n");
			}
			else if (icecek == 'o') {
				borc += 5;
				printf("Popkek Cikolatali aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "popkek cikolatali aldi\n");
			}
			else if (icecek == 'p') {
				borc += 5;
				printf("Popkek limonlu aldiniz.          ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "popkek limonlu aldi\n");
			}
			else if (icecek == 'r') {
				borc += 16;
				printf("Torku Ruseymli 3'lu aldiniz.     ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Torku Ruseymli 3'lu aldi\n");
			}
			else if (icecek == 's') {
				borc += 5;
				printf("Ulker Cikolatali Gofret aldiniz. ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Ulker Cikolatali Gofret aldi\n");
			}
			else if (icecek == 't') {
				borc += 5;
				printf("Kinder Sut Dilimi aldiniz.       ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Kinder Sut Dilimi \n");
			}
			else if (icecek == 'u') {
				borc += 3;
				printf("Eti puf aldiniz.                ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Eti Puf aldi \n");
			}
			else if (icecek == 'v') {
				borc += 7;
				printf("Gong  aldiniz.                  ===============TOPLAM BORCUNUZ===============\n\t\t\t\t\t\t%dTL\n", borc);
				fprintf(bilgiler, "Gong aldi \n");
			}

			else
			{

			}


		}
		fclose(bilgiler);
	case 2:	system("cls");
		bilgiler = fopen("kullanici_bilgisi.txt", "a");
		printf("\n\n\n\n\n\n\n\tFILMLER\n");
		printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n");
		printf("\t1= Evde Tek Basina\n\t2= Orumcek-Adam: Orumcek evreninde\n\t3= Ratatuy\n\t4= Arabalar\n\t5= Ejdarhani nasil egitirsin ?\t\t\t\t BUTUN FILMLER 15 TL\n\t6= Coco\n\t7= Jumanji\n\t8= Oyuncak Hikayesi\n\t9=  6super kahraman\n\t10= Bolt \n\t");

		scanf("%d", &film);

		switch (film)
		{
		case 1:borc += 15;
			printf(" 101 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, " Evde Tek Basina filmini secti");
			break;


		case 2:borc += 15;
			printf(" 102 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "Orumcek-Adam: Orumcek evreninde filmini secti");
			break;

		case 3:borc += 15;
			printf(" 103 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, " Ratatuy filmini secti");
			break;

		case 4:borc += 15;
			printf(" 104 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "Arabalar filmini secti");
			break;

		case 5:borc += 15;
			printf(" 105 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "Ejdarhani nasil egitirsin filmini secti");
			break;

		case 6:borc += 15;
			printf(" 106 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, " Coco filmini secti");
			break;

		case 7:borc += 15;
			printf(" 107 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "jumanji filmini secti");
			break;

		case 8:borc += 15;
			printf(" 108 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "Oyuncak Hikayesi filmini secti");
			break;

		case 9:borc += 15;
			printf(" 109 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, "6super kahraman filmini secti");
			break;

		case 10:borc += 15;
			printf(" 110 numarali bilgisayara oturun.        ============TOPLAM BORCUNUZ=============\n\t\t\t\t\t%dTL\n", borc);
			fprintf(bilgiler, " Bolt filmini secti");
			break;


		default:printf("Hata yaptiniz.");
			break;
		}
		fclose(bilgiler);
	default:

		getchar();
		char odeme;
		system("cls");

		if (borc == 0)
		{
			printf("\n\t\tborcunuz yoktur");

		}
		else {
			printf("\t\t\t\t\t\t\t\3Odeme yontemi seciniz:\n\n\n");
			printf("\t\t\t\t  1=kart\n");
			printf("\t\t\t\t\3 2=nakit\n\n");
			printf("\t\t\t\t\1\3\2  Borc = %d  ", borc);
			for (;;)
			{
				scanf("%c", &odeme);

				if (odeme == '1') {
					printf("\t\3\3\3sistemde yasanan veri tabani eksikliginden dolayi bu islem su an kullanilamaz\3\3\3");
				}
				else if (odeme == '2') {
					printf("\t\t\tborcunuzu gorevliye teslim edin\nborc= %d", borc);
					break;

				}
				else {


				}
			}
		}

	}
	
	int sifre=123457;     //7 sasırtamaca olsun diye
	printf("\n\n\tKullanicilarin verilerini gormek istiyorsaniz sifreyi girin =>\n");
	scanf("%d", &sifre);
	if (sifre == 123457)
	{
		bilgiler = fopen("kullanici_bilgisi.txt", "r+");
		char yazdir_bilgi;
		bilgiler = fopen("kullanici_bilgisi.txt", "r+");
		do
		{

			yazdir_bilgi = getc(bilgiler);
			printf("%c", yazdir_bilgi);

		} while (yazdir_bilgi != EOF);
		fclose(bilgiler);
	  }
	else {
		printf("yanlis sifre giris yapamazsiniz yapamazsiniz");


	}
    




	}



	} 