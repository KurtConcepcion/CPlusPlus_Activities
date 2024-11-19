#include <iostream>

using namespace std;

int main(){
    string name[5];
    int age[5];
    float grade[5];
    int option;
    int student=0 ;

    do{
        cout << "Student Information System:" <<endl;
        cout << "1. Add Student:" <<endl;
        cout << "2. View All Student:" <<endl;
        cout << "3. Calculate Average Grade:" <<endl;
        cout << "4. Exit:";
        cout << "Choose an option (1-4):";
        cin >> option;

        switch (option){
        case 1:
        if (student >=5){
            cout << "Student limit reached!" <<endl;
        }else   {
        cout << "Enter Student name:";
        cin >> name[student];
        cout << "Enter Age:";
        cin >> age[student];
        cout << "Enter grade:";
        cin >> grade[student];
        student++;
        cout << "Student added successfully!"<<endl;
        while((grade[5] <0) || (grade[5] >=100)){
                if (grade[5] >0 || grade[5] <=100){
                    cout << "Invalid Grade." << endl;}
                }
         }break;
        case 2:
            if (student ==0){
                cout << "No students to display."<<endl;
            }else(student >= 5); {
            for (int i=0; i <student; i++){
                cout << "Name:"<< name[i]<< ", Age:"<< age[i] << ", Grade:" << grade[i] <<endl;}
            }break;
            case 3:
                if (student ==0){
                    cout << "No Student to Calculate for."<<endl;
                }else (student >=5);{
            float total =0;
            for (int i=0; i<student; i++){
                total += grade[i];}
                cout << "Average Grade:" << (student ==0 ? 0 :total / student) << endl;
                }break;
            case 4:
                cout << "Thank you for using the student Information System!";
                break;
            default:
                int exit();
        }
    }while (option !=4);

    return 0;
}
