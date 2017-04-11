//Use same bit of code for different data types 

#include <iostream>
using namespace std;

/*
template <class T>
void output(const T &n){
    cout << n<< endl;
}
*/
//using template function 
//swap using template
template <class T>
void mySwap(T &a,T &b){
    T temp = a;
    a =b;
    b =temp;
}

//using template class
template <class T>
class A{
    private:
        T data;
    public:
        A(const T & init);
        void output();
    
};

template <class T>
A<T>::A(const T & init)
{
    data = init;
}
//template for usage for different data types 
template <class T>
void A<T>::output()
{
    cout <<"Not a Char " <<data <<endl;
}

//Use for specilaized data 
template <>
void A<char>::output(){
    cout << "char data " << data <<endl;
}





int main() {
	//code
	/*
	int Arr[] = {1,2,4,5,6};
	char ch[] = {'a','e','i','o','u'};
	//output(10);
	//output(3.14);
	//output("Hi");

	mySwap(Arr[1],Arr[4]);
	mySwap(ch[1],ch[4]);
	for(int i=0;i<5;i++){
	    cout << Arr[i] ;
	    cout << ch[i] << endl;
	}
	*/
	A<int> Bint(10);
	A<char> BChar('c');
	A<float> BFloat(3.24);
	Bint.output();
	BChar.output();
	BFloat.output();
	
	
	return 0;
}