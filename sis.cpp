#include<iostream>
#include<fstream>
char *datafile="students.txt";
using namespace std;
void writedatatofile();
void readthefile();
class student{
    public:
    int roll;
    char name[100];
    char fname[100];
    private:
    char phone[15];
    int marks[3];
    float gpa;  
    public:
    

    void displaydata(){
        cout<<"\nRoll Number:"<<roll;
        cout<<"\nStudent Name:"<<name;
        cout<<"\nStudent's Father Name:"<<fname;
        cout<<"\nStudent's Phone:"<<phone;
        cout<<"\nMarks :"<<marks[0]<<"\n"<<marks[1]<<"\n"<<marks[2];
        cout<<"\nStudent's GPA:"<<gpa;

    }

    void displayinline(){
        cout<<"\nRoll Number:"<<roll;
        cout<<" "<<name;
        cout<<" "<<fname;
        cout<<""<<phone;
        cout<<" "<<marks[0]<<"\n"<<marks[1]<<"\n"<<marks[2];
        cout<<" "<<gpa;
    }
    
       
};
student::void addstudent(int roll){
        roll=roll;
        fileio writetofile;
        cout<<"enter student name";
        cin>>name;
        cout<<"enter Father Name";
        cin>>fname;
        cout<<"enter Phone Number";
        cin>>phone;
        cout<<"Enter 3 Sub Marks";
        cin>>marks[0]>>marks[1]>>marks[2];
        cout<<"Enter GPA";
        cin>>gpa;
    }

class fileio{
    public:
    void writedatatofile(char *filename,char *data){
	ofstream file;
	int i;
	file.open(filename,ios::out);
	for(i=0;i<101;i++)
	{
		if(s[i].roll==0)
		continue;
		file<<data;
	}
	file.close();
    }
    void readaline(char *filename){
	ifstream data;
	int i;
	string line;
	data.open("*filename",ios::in);
	while(data){
		getline(data,line);
		cout<<line;
	}
	data.close();
    }
};

int main(){
    int opt,rollno;
    student s[100];
    s[1].
    cout<<"Student Information System";
    while(1){  
    cout<<"\nEnter Option Number\n1. to Add Student Details";
    cout<<"\n2. to View Student Details";
    cout<<"\n3. to Display All Students Details";
    cout<<"\nPress Ctrl + C to Exit";    
    cin>>opt;
    switch(opt){
        case 1:
            cout<<"\nenter the roll number";
            cin>>rollno;
            s[rollno].roll=rollno;
        break;
        case 2:
            cout<<"\nenter the roll number of the student to view details";
            cin>>rollno;
            s[rollno].displaydata();
        break;
        case 3:
            for(int i=0;i<100;i++){
                s[i].displayinline();
            }
            break;
        default:
        cout<<"Invalid Option Please retry";
    }

    }
    return 0;
}
