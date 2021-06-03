#include <stdio.h>
#include <strings.h>

const float PI = 3.14;
#define MAX 20

struct Dreick{
    int a,b,c;
};

typedef struct{
    char vorname[MAX];
    char nachname[MAX];
    int alter;
} Mensch;

void HelloWorld();
int printString(char* String);
int add(int a, int b);
int dreieck_umfang(struct Dreick obj);
int dreieck_umfang_pnt(struct Dreick* obj);
void Aufgabe1();
void Aufgabe2_a();
double PI_zza(int Radius);
void Aufgabe4();
void Aufgabe7();

Mensch new_mensch(char vorname [], char nachname [], int alter);

int fak(n){
    if (n != 1) return n * fak(n-1);
    else return 1;
}

int mul(int* a, int* b){
    return *a * *b;
}

int main() {
    //Aufgabe1();
    //Aufgabe2_a();
    //printf("Pizza Flaeche ist: %e",(double) PI_zza(12));
    //Aufgabe4();
    //printf("%i\n", fak(3));
    //struct Dreick obj;
    //obj.a = 3;
    //obj.b = 5;
    //obj.c = 4;
    //printf("%i\n",dreieck_umfang(obj));
    //printf("%i\n",dreieck_umfang_pnt(&obj));
    //int a = 2;
    //int b = 3;
    //printf("%i",mul(&a, &b));
    Aufgabe7();
    return 0;
}

void Aufgabe1(){
    char String[100];
    HelloWorld();
    strcpy(String, "Hello");
    printString(String);
}

void Aufgabe2_a(){
    int a,b,Ergebniss;
    scanf("%i",&a);
    scanf("%i",&b);
    Ergebniss = add(a,b);
    printf("%i", Ergebniss);
}
double PI_zza(int Radius){
    return PI*(Radius*Radius);
}
int passwort_vergleich(char eingabe []){
    char passwd [] = "C-Programmierung";
    int i;
    if (strlen(eingabe) != strlen(passwd)) return -1;

    for (i; i < strlen(passwd); i++)
        if (eingabe[i] != passwd[i]) return -1;

    return 0;
}
void Aufgabe4(){
    char eingabe [150];
    printf("passwort eingabe :");
    scanf("%s",&eingabe);
    printf("%i", passwort_vergleich(eingabe));
}

int dreieck_umfang(struct Dreick obj){
    return obj.a + obj.b +obj.c;
}

int dreieck_umfang_pnt(struct Dreick* obj){
    return obj->a + obj->b +obj->c;
}

Mensch new_mensch(char vorname [], char nachname [], int alter){
    Mensch newMensch;
    newMensch.alter = alter;
    strcpy(newMensch.vorname, vorname);
    strcpy(newMensch.nachname, nachname);

    return newMensch;
}

void printMensch(Mensch* obj){
    printf("Vorname: %s Nachname: %s Alter: %i \n", obj->vorname,obj->nachname,obj->alter);
}

void Aufgabe7(){
    Mensch Personen [3];
    char vorname [MAX], nachname [MAX];
    int alter = 0;
    for(int i = 0; i<3; i++){
        printf("Vorname Person %i:", i+1);
        scanf("%s", &vorname);
        printf("Nachname Person %i:", i+1);
        scanf("%s", &nachname);
        printf("Alter Person %i:", i+1);
        scanf("%i", &alter);
        Personen[i] = new_mensch(vorname,nachname,alter);
    }
    for (int i = 0; i<3; i++) printMensch(&Personen[i]);

    // Evtl falls man das Objekt verändern will.
}

void HelloWorld(){
    printf("Hello, World!\n");
}
int printString(char* String){
    printf("%s\n", String);
    return 0;
}

int add(int a, int b){
    return a+b;
}