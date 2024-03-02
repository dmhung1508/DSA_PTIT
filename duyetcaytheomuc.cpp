#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *pleft;
    struct node *pright;

    node(int data) {
        this->data = data;
        this->pleft = NULL;
        this->pright = NULL;
    }
};

typedef struct node NODE;
typedef NODE* TREE;

void makenode(TREE t, int n1, int n2, char c) {
    if (c == 'R') {
        t->pright = new NODE(n2);
    } else {
        t->pleft = new NODE(n2);
    }
}

void nhap(TREE t, int n1, int n2, char c) {
    if (t == NULL) {
        return;
    }
    if (t->data == n1) {
        makenode(t, n1, n2, c);
    } else {
        nhap(t->pleft, n1, n2, c);
        nhap(t->pright, n1, n2, c);
    }
}

void levbel(TREE t) {
    queue<TREE> st;
    st.push(t);
    while (!st.empty()) {
        TREE p = st.front();
        st.pop();
        cout << p->data << " ";
        if (p->pleft != NULL) {
            st.push(p->pleft);
        }
        if (p->pright != NULL) {
            st.push(p->pright);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        TREE t = NULL; 
        for (int i = 1; i <= n; i++) {
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if (t == NULL) {
                t = new NODE(n1);
            }
            nhap(t, n1, n2, c);
        }
        levbel(t);
        cout << endl;
    }

    return 0;
}
