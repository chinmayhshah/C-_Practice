//Stacks
//Bracket balance
#include <iostream>
#include <vector>
using namespace std;

class StackX
{
    private:
            int maxSize;
            vector<char> StackVect;
            int top;
    
    public:
    
    
    StackX(int max) :maxSize(max),top(-1) //constructor
    {
        StackVect.resize(maxSize);
    }
    
    void push (char x){
        StackVect[++top] = x;
    }
    
    char pop (){
        return StackVect[top--];
    }
    
    char peek()    {
        return StackVect[top];
    }
    
    bool isEmpty(){
        return (top == -1);
    }

};

class BracketCheck
{
    private:
        string input;
    public:
        BracketCheck(string in): input(in)
        {   }
        
        void check()
        {
            //create the stack and according to input string
            int stackSize= input.length();
            StackX checkStack(stackSize);
            int isClosingBracket =false;
            char ch,chx;
            
            for (int j=0;j<stackSize;j++){
                ch=input[j];
                switch(ch){
                    case '{':
                    case '[':
                    case '(':
                        checkStack.push(ch);
                        //cout <<"Pushed: " <<ch<<endl;
                        isClosingBracket=true;
                        break;
                    case '}':
                    case ']':
                    case ')':
                        //cout<<"ending bracket: "<<ch<<endl;
                        chx=checkStack.pop();
                        //cout<<"POP: " <<chx<<endl;
                        if((chx == '{' && ch == '}')||(chx=='('&& ch==')')||(chx=='[' && ch==']')){
                            isClosingBracket=true;
                            //cout <<"Closing bracket matches";
                        }
                        else{
                            isClosingBracket=false;
                            //cout <<"Closing bracket does not match";
                        }    
                        break;
                        
                    default:
                        cout <<"Other charac";
                }
                
                /*
                if(isClosingBracket==false){
                    cout <<"breaking loop";
                    break;
                }
                isClosingBracket=false;
                */
        }
        if(!isClosingBracket)
        {
            cout<<"Mismatch bracket";    
        }
        else if (!checkStack.isEmpty())
        {
            cout<<"Issue bracket balances";    
        }
        else
            cout << "OK";
        
                
    }
            
};

int main()
{
    
    string input;
    
    while(true){
        
        cout<< "Enter a string with demilator";
        cout<< endl;
        cin >> input ;
        if(input.length()<=1)
          break;
        
        BracketCheck theCheck(input);
        theCheck.check();
        
    }
    
    return 0;
    
}
