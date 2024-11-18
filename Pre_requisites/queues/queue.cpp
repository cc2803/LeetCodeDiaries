#include <iostream>
using namespace std;

class Queue{

    public:
    int q[5]={};
    int start=0;
    int end=-1;

    bool isempty(){
            return end<start;
        }

    bool isfull(){
            return end==sizeof(q)/sizeof(int)-1;
        }

    void enQueue(int value){
        end++;
        q[end]=value;
        cout<<"Value enqueued to queue"<<endl;
    }
    
    void deQueue(){
        cout<<"dequeued value: "<<q[start]<<endl;
        start++;
        cout<<"Value dequeued"<<endl;
    }

    void display(){
        cout<<"QUEUE ELEMENTS ARE:"<<endl;
        for(int i=start;i<=end;i++){
        cout<<q[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    
    Queue q;
    while(1){
        int choice;
        cout<<"Enter your choice:\n 1-enqueue\n 2-dequeue\n 3-display"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            int n;
            if(q.isfull()) cout<<"Sorry queue is full!, cant enqueue more!"<<endl;
            else{
            cout<<"Enter value to be enqueued: "<<endl;
            cin>>n;
            q.enQueue(n);
            }
            break;
        
        case 2:
        if(q.isempty()) cout<<"Sorry queue is empty!, nothing to dequeue"<<endl;
        else q.deQueue();
            break;
        
        case 3:
        if(q.isempty()) cout<<"Sorry queue is empty!, nothing to display"<<endl;
        else q.display();
            break;

        default:
            cout<<"Exiting..."<<endl;
            exit(0);
            break;
        }  
    }

    return 0;
}