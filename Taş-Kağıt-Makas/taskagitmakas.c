#include <stdio.h>
#include <stdlib.h>
#include <time.h>





void islemFonksiyonu();

void hataFonksiyonu();

void cikisFonksiyonu();


int main() {
	


islemFonksiyonu();

	
	
	
	
	getch(0);
	return 0;
}


void hataFonksiyonu(){
	
	
	printf("Hatali tuslama yaptiniz!\n Lutfen tekrar deneyiniz!\n\n");
	
	
}


void cikisFonksiyonu(){
	
	system("CLS");
	system("COLOR 7");
	printf("CIKIS YAPILIYOR...\t3");
	sleep(1);
	printf("\tCIKIS YAPILIYOR...\t2");
	sleep(1);
	printf("\tCIKIS YAPILIYOR...\t1");
	sleep(1);
	printf("\tCIKIS YAPILIYOR...\t0");
	
	exit(0);
	
	
}



void islemFonksiyonu(){
	
	int islem;
	int oyunbitis;
	int tkm;
	int erzincanlirobot;
	int oyunsayac;
	int i;
	int j;
	int tekraroyna;
	
	i=0;
	j=0;
	oyunsayac=0;
	
	islemsec:
		
		system("COLOR 2");
		
	printf("TAS - KAGIT - MAKAS\n\n\n\n");
	printf("[1]OYNA\n\n[2]NASIL OYNANIR\n\n[3]YAPIMCI\n\n[4]CIKIS\n\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:									//OYNA 
			
			system("CLS");
			printf("Oyun kacta bitsin?\n");
			scanf("%d",&oyunbitis);
			
			system("CLS");
			

			printf("OYUN BASLIYOR...\t5\n");
			sleep(1);
			printf("OYUN BASLIYOR...\t4\n");
			sleep(1);
			printf("OYUN BASLIYOR...\t3\n");
			sleep(1);
			printf("OYUN BASLIYOR...\t2\n");
			sleep(1);
			printf("OYUN BASLIYOR...\t1\n");
			sleep(1);
			printf("OYUN BASLIYOR...\t0\n\n\n");
			
			
			system("CLS");
			
			
			
			taskagitmakas:
				
			
				
			printf("Lutfen birini seciniz:\n[1]TAS\t[2]KAGIT\t[3]MAKAS\n\n");
			scanf("%d",&tkm);
			printf("\n\n\n");
			
			
			srand(time(NULL));
			erzincanlirobot=rand()%2;
			
			if(tkm==1){											// SEN
				
				printf("Senin sectigin = TAS\n");
				
			}
			
			else if(tkm==2){
				
				printf("Senin sectigin = KAGIT\n");
				
			}
			
			else if(tkm==3){
				
				printf("Senin sectigin = MAKAS\n");
				
			}
			
			else{
				
				hataFonksiyonu();
				goto taskagitmakas;
				
			}

			
			if(erzincanlirobot==0){										//ROBOT
				
				printf("Erzincanli'nin sectigi = TAS\n\n");
				
			}
			
			else if(erzincanlirobot==1){
				
				printf("Erzincanli'nin sectigi = KAGIT\n\n");
				
			}
			
			else{
				
				printf("Erzincanli'nin sectigi = MAKAS\n\n");
				
			}
		
			
		if(tkm==1 && erzincanlirobot==0 || tkm==2 && erzincanlirobot==1 || tkm==3 && erzincanlirobot==2){
		
		i++;
		j++;
		
		printf("BERABERE, DURUM --> \t %d - %d \n",i,j);
		
		
	}
	
		else if(tkm==2 && erzincanlirobot==0 || tkm==3 && erzincanlirobot==1 || tkm==1 && erzincanlirobot==2){
			
			i++;
			printf("TEBRIKLER, DURUM --> \t %d - %d \n",i,j);
			
		}
		
		
		else if(tkm==1 && erzincanlirobot==1 || tkm==2 && erzincanlirobot==2 || tkm==3 && erzincanlirobot==0){
			
			j++;
			printf("Bu Raundu Erzincanlii Kazandi, DURUM --> \t %d - %d \n",i,j);
			
		}
		
	oyunsayac++;
	
	if(oyunsayac<oyunbitis){
		
		goto taskagitmakas;
		
	}
	
	else if(oyunsayac>=oyunbitis){
		
		
		if(i>j){
			
			tekrarislem:
				
			printf("TEBRIKLERRRR, Erzincanli robotunu alt ederek oyunu kazandiniz...\n\n\n");
			printf("[1]TEKRAR OYNA\t[2]CIKIS\n");
			scanf("%d",&tekraroyna);
			
			system("CLS");
			
			switch(tekraroyna){
				
				case 1:
					
					goto taskagitmakas;
					break;
					
				case 2:
					cikisFonksiyonu();
				
				default:
					
					hataFonksiyonu();
					goto tekrarislem;
			}
			
			
		}
		
		
		else if(i<j){
			
			tekrarislem2:
				
			printf("MAAALEESEEFFF, Erzincanli robotunu alt edemedinizz...\n\n\n");
			printf("[1]TEKRAR OYNA\t[2]CIKIS\n");
			scanf("%d",&tekraroyna);
			
			system("CLS");
			
			switch(tekraroyna){
				
				case 1:
					
					goto taskagitmakas;
					break;
					
				case 2:
					cikisFonksiyonu();
				
				default:
					
					hataFonksiyonu();
					goto tekrarislem2;
			}			
			
			
			
		}
		
		
		else{
			
			tekrarislem3:
				
			printf("BERABEREEEE, Erzincanli robotunu ile berabere kaldinizz...\n\n\n");
			printf("[1]TEKRAR OYNA\t[2]CIKIS\n");
			scanf("%d",&tekraroyna);
			
			system("CLS");
			
			switch(tekraroyna){
				
				case 1:
					
					goto taskagitmakas;
					break;
					
				case 2:
					cikisFonksiyonu();
				
				default:
					
					hataFonksiyonu();
					goto tekrarislem3;
			}
			
		}
		
		
	}
	
	
	break;
	
	
		case 2:
			
			system("CLS");
			system("COLOR 7");
			printf(" --> Oncelikle kac kere oynamak istediginizi seciyorsunuz.\n");
			printf(" --> Daha sonra TAS - KAGIT - MAKAS 'dan birini seciyorsunuz...\n\n\n");
			printf(" -->\tIYI OYUNLAR\t<-- \n\n");
			
			sleep(5);
			system("CLS");
			
			goto islemsec;
			system("COLOR 2");
			
			
	break;
	
	
	
		case 3:
	system("CLS");
	system("COLOR 1");
	printf("© copyright\n");
	printf("@yusuwyildirim");
	
	sleep(3);
	system("CLS");
	goto islemsec;
	
	
	break;
	
	
		
		case 4:
			
			cikisFonksiyonu();
			
			
		default:
			
			hataFonksiyonu();
			
			goto islemsec;
	
	
}


}




