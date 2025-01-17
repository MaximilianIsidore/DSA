#include <iostream>
#include <cstring>
using namespace std;

class Student{

    private:
        char* name;
        int* marks;

    public:

        Student(const char* name): name {strdup(name)}{
            marks = new int[5];

            for(int i=0;i<5;i++) marks[i] = 0;
        }

        Student(Student & obj){
            name = strdup(obj.name);
            marks = new int[5];
            for(int i=0; i<5; i++){
                marks[i] = obj.marks[i];
            }
        }

        ~Student(){
            delete marks;
            free(name);
        }

        void getName(){
            cout<<name<<"\n";
        }

        void setMarks(const int *arr){
            for(int i=0; i<5; i++){
                marks[i] = arr[i];
            }
        }

        void getMarks(){
            for(int i=0; i<5; i++){
                cout<<marks[i]<<" ";
            }
            cout<<"\n";
        }
};

int main(){
    int a[5] {80, 90, 85, 97, 100};

    Student s1 = Student("sam");
    s1.getName();
    s1.setMarks(a);
    s1.getMarks();

    Student* s2 = new Student(s1);
    s2->getName();
    s2->setMarks(a);
    s2->getMarks();
    return 0;
}