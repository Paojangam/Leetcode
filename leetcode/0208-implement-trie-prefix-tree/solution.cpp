class Trie{
    struct Node{
        Node* next[26]={};
        bool end=0;
    };
    Node* root;
public:
    Trie(){root=new Node();}
    
    void insert(string s){
        Node* cur=root;
        for(char c:s){
            if(!cur->next[c-'a'])cur->next[c-'a']=new Node();
            cur=cur->next[c-'a'];
        }
        cur->end=1;
    }
    
    bool search(string s){
        Node* cur=root;
        for(char c:s){
            if(!cur->next[c-'a'])return 0;
            cur=cur->next[c-'a'];
        }
        return cur->end;
    }
    
    bool startsWith(string s){
        Node* cur=root;
        for(char c:s){
            if(!cur->next[c-'a'])return 0;
            cur=cur->next[c-'a'];
        }
        return 1;
    }
};

