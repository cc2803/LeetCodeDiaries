#include <iostream>
using namespace std;

class Queue{

    public:
    int q[5]={};
    int start=-1;
    int end=-1;
    int size=sizeof(q)/sizeof(int);

    bool isempty(){
            return start==-1 && end==-1;
        }

    bool isfull(){
            return (end+1)%size==start;
        }

    void enQueue(int value){
        if(isempty()){
            start=0;
            end=0;
        }
        end=(end+1)%size;
        q[end]=value;
        cout<<"Value enqueued to queue"<<endl;
    }
    
    void deQueue(){
        cout<<"dequeued value: "<<q[start]<<endl;
        start=(start+1)%size;
        cout<<"Value dequeued"<<endl;
    }

    void display(){
        cout<<"QUEUE ELEMENTS ARE:"<<endl;
        int i=start;
        while (i != end) {
        cout << q[i] << " ";
        i = (i + 1) % size;  // Wrap around using modulo
    }
    cout << q[end] << endl;  // Display the last element
}
};

int main(){
    
    Queue q;
    while(1){
        int choice;
        cout<<"Enter your choice:\n 1-enqueue\n 2-dequeue\n 3-display\n Any other Key to exit."<<endl;
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