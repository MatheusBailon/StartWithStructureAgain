#include <iostream>
#include <string>

using namespace std;

void showReference(int &n) {
    cout << "The value received at showReference function: " << n << endl;
    n = 22;
}

void showValue(int n) {
    cout << "Value received at showValue " << n << endl;
    n = 30;
}

float circleArea(float radius) {
    //2ir

    return radius*radius * 3.14;
}

int addNumber(int a, int b) {
    return a + b;
}

void RenameTypes() {
    typedef string DingDingDing;

    DingDingDing name = "Ding Ding Ding";
    string Kakrato = "agora vai"; 

    cout << name << endl;
    cout << Kakrato << endl;
}

void NowUsingEnum() {

    enum weekDays {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };
    cout << sunday;
}

void UsingUnion() {

    union SucoDeLaranja {
        int width;
        int height;
    };

    SucoDeLaranja orange;

    orange.width = 3;
    orange.height = 5;

    cout << "This is my value" << orange.width;
}

void ArrayTest() {

    int number[5] = { 2,3,4,5 };

    cout << number[4] << endl;

    number[1] = 13;

    cout << number[1] << endl << endl;
}

void StartingWithStructure() {

    //Beginig wit Structure
    struct Student {
        int id;
        float mark;
        string name;
    };

    Student Matheus;

    Matheus.id = 15;
    Matheus.mark = 10.5;
    Matheus.name = "Matheus Henrique";

    cout << Matheus.name;
}

void CreatingArraisOfStructure() {

    struct Car {
        int year;
        string model;
        string mark;
    };

    Car collection[4];

    collection[3] = { 200, "Modelo Marotones", "Nao sei para que serve esse eh benm longo mas vamo ve ate quando" };

    for (int i = 0; i < 3; i++) {
        cout << "Start the car " << i+1 << endl;
        cout << "Inform the car model: \n";
        getline(cin, collection[i].model);

        cout << "Inform the car year: " << endl;
        cin >> collection[i].year;

        cout << "Inform the car mark: " << endl;
        cin >> collection[i].mark;

        cout << "Finish car "<< i+1 << endl << endl;
    }
    cout << "This is the list the cars";

    for (int i = 0; i < 4; i++) {
        
        cout << "Car number " << i + 1 << endl;
        cout << collection[i].model << endl;
        cout << collection[i].year  << endl;
        cout << collection[i].mark;

        cout << endl << endl;
    }
}