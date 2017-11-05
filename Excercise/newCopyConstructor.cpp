#include <iostream>
#include<cstring>
using namespace std;

class String {
    private:
        char * str;
        int size;
    public:
        String(const char *str_new){
            size = strlen(str_new);
            str = new char[size +1];
            strcpy(str,str_new); 
        }
        ~String(){delete []str;}
        
        String(const String& old_str){
            size = old_str.size;
            str = new char [size+1];
            strcpy(str,old_str.str);
            
        }
        void print(){cout <<str<<endl;}
        void change (const char * str1){
            delete []str;
            size = strlen(str);
            str = new char[size+1];
            strcpy(str,str1);
        }
        
    
};

int main(){
    
    String s1("Chinmay");
    s1.print();
    String s2(s1);
    s2.print();
    s2.change("Shah");
    s2.print();
    s1.print();
}
/*

with Copy Constructor 
Chinmay
Chinmay
Shah
Chinmay

withour Copy Constructor
Chinmay
Chinmay
Shah
Shah
*/
