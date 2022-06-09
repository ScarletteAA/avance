#ifndef TALLER1_NODE_H
#define TALLER1_NODE_H
class Node{
    private:
    Persona p;
    Node* next;

    public:
    Node();//constructor
    Node(Persona p);//constructor con la persona
    void setNext(Node* node);
    Node* getNext();
    ~Node();//destructor

};

#endif //TALLER1_NODE_H