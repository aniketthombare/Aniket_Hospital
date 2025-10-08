#include<iostream>
using namespace std;
class Hospital{
    // Abstract class representing a hospital
public:
    virtual void viewdata() = 0; // Pure virtual function

};
class Patient : public Hospital{
    // Derived class representing a patient
public:
    void viewdata(){
        cout<<"Patient 1"<<endl;
        cout<<"Patient 2"<<endl;
        cout<<"Patient 3"<<endl;    
        cout<<"Patient 4"<<endl;
        cout<<"Patient 5"<<endl;
    }

};
class Doctor : public Hospital{
    // Derived class representing a doctor
   public:
    void viewdata(){
        cout<<"Doctor 1"<<endl;
        cout<<"Doctor 2"<<endl;
        
    }
};
class Appointment : public Hospital{
    // Derived class representing an appointment
    public:
    void viewdata(){
        cout<<"Appointment 1"<<endl;
        cout<<"Appointment 2"<<endl;
        cout<<"Appointment 3"<<endl;    
        cout<<"Appointment 4"<<endl;
        cout<<"Appointment 5"<<endl;
    }
};
int main(){
    cout<<"Welcome to Hospital Data log"<<endl;
    Patient p;
    Doctor d;
    Appointment a;
    
    p.viewdata();
    d.viewdata();
    a.viewdata();

    
    int numpatients=0;
    cout<<"Enter number of patients (max 10): ";
    cin>>numpatients;

   int a_number=1;
   int d_number;
   
    
    do{

    

    cout<<"Select a patient number(ascending order start from 1) :";
    int p_number;
    cin>>p_number;
    
    // cout<<"Select a doctor :";
    
    // cin>>d_number;
    
    // cout<<"Select an appointment :";
    
    // cin>>a_number;
    // for(int a_number=1;a_number<=numpatients;a_number++)
    // {
    if (p_number%2==0)
    {
        d_number=2;
        cout<<"You are patient number "<<p_number<<", with Doctor "<<d_number<<", in Appointment slot "<<a_number<<endl;

    }
    else
    {
        d_number=1;
        cout<<"You are patient number "<<p_number<<", with Doctor "<<d_number<<", in Appointment slot "<<a_number<<endl;
        

    }
    cout<<"Your appointment is setup with Doctor "<<d_number<<", you are Patient number "<<p_number<<" in Appointment slot "<<a_number<<endl;
    a_number++;
    numpatients--;
// }
    }while(numpatients<=10 || numpatients>0 );
    // cout<<"1. Patient"<<endl;
    // cout<<"2. Doctor"<<endl;
    // cout<<"3. Appointment"<<endl;
    //     cout<<"Select an option: ";
    //     int option;
    //     cin>>option;
    //     if(option == 1)
    //     {
    //         Patient p;
    //         p.viewdata();
    //         int p_number;
    //         cout<<"select a patient :";
    //         cin>>p_number;
    //         cout<<"Patient "<<p_number<<" is selected"<<endl;

    //     }
    //     else if(option == 2)
    //     {
    //         Doctor d;
    //         d.viewdata();
    //         int d_number;
    //         cout<<"select a doctor :";
    //         cin>>d_number;
    //         cout<<"Doctor "<<d_number<<" is selected"<<endl;
    //     }
    //     else if(option == 3)
    //     {
    //         Appointment a;
    //         a.viewdata();
    //         int a_number;
    //         cout<<"select an appointment :";    
    //         cin>>a_number;
    //         cout<<"Appointment "<<a_number<<" is selected"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"Invalid option"<<endl;
    //     }



        // f1.result();
        // Hospital* h = nullptr; 
        // switch(option){
        //     case 1:
        //         h = new Patient();
        //         cout<<"List of Patients:"<<endl;
        //         h->data();
        //         break;
        //     case 2:
        //         h = new Doctor();
        //         break;
        //     case 3:
        //         h = new Appointment();
        //         break;
        //     default:
        //         cout<<"Invalid option"<<endl;
        //         return 0;
        // }

    return 0;
}