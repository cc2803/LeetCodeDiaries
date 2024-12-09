#include <iostream>
using namespace std;

class stack{
    public:
        int stackSize=5;
        int s[5]={};
        int top=-1;

        bool isempty(){
            return top==-1;
        }

        bool isfull(){
            return top==stackSize-1;
        }

        void push(int value){
                s[++top]=value;
                cout<<"Value pushed to stack"<<endl;
        }

       void pop(){
                cout<<"Popped value: "<<s[top]<<endl;
                top--;
                cout<<"Value popped"<<endl;
        }
    
        void display(){
                cout<<"STACK ELEMENTS ARE:"<<endl;
                for(int i=top;i>=0;i--){
                    cout<<s[i]<<" ";
                }
                cout<<endl;
        }

};

int main(){
    
    stack s;
    while(1){
        int choice;
        cout<<"Enter your choice:\n 1-push\n 2-pop\n 3-display\n Any other key to exit."<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            int n;
            if(s.isfull()) cout<<"Sorry stack is full!, cant push more!"<<endl;
            else{
            cout<<"Enter value to be pushed: "<<endl;
            cin>>n;
            s.push(n);
            }
            break;
        
        case 2:
        if(s.isempty()) cout<<"Sorry stack is empty!, nothing to pop"<<endl;
        else s.pop();
            break;
        
        case 3:
        if(s.isempty()) cout<<"Sorry stack is empty!, nothing to display"<<endl;
        else s.display();
            break;

        default:
            cout<<"Exiting..."<<endl;
            exit(0);
            break;
        }  
    }

    return 0;
}