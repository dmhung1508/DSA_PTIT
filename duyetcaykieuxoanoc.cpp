#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* pleft;
    struct node* pright;

    node(int x) {
        this->data = x;
        pleft = pright = NULL;
    }
};

typedef struct node NODE;
typedef NODE* tree;

void makenode(tree t, int n1, int n2, char c) {
    if (c == 'R') {
        t->pright = new node(n2);
    } else {
        t->pleft = new node(n2);
    }
}

void nhap(tree t, int n1, int n2, char c) {
    if (t == NULL) {
        return;
    }
    if (t->data == n1) {
        makenode(t, n1, n2, c);
    } else {
        if (t->pleft) {
            nhap(t->pleft, n1, n2, c);
        }
        if (t->pright) {
            nhap(t->pright, n1, n2, c);
        }
    }
}

void check(tree t) {
    stack<tree> s1,s2;
    s1.push(t);
    while (s1.size() || s2.size()){
        while (s1.size()){
            tree p= s1.top();
            s1.pop();
            cout << p-> data <<" ";
            if (p->pright!= NULL) s2.push(p->pright);
            if (p-> pleft != NULL) s2.push(p-> pleft);
        }
        while (s2.size()){
            tree p= s2.top();
            s2.pop();
            cout << p-> data <<" ";
            if (p->pleft!= NULL) s1.push(p->pleft);
            if (p-> pright != NULL) s1.push(p-> pright);
        }
    }
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        tree t = NULL;
        for (int i = 1; i <= n; i++) {
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if (t == NULL) {
                t = new NODE(n1);
            }
            nhap(t, n1, n2, c);
        }
        check(t);
        cout << endl;
    }

    return 0;
}
