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
int res;
int check(tree T) {
	if (!T)return 0;
	int sumLeft = check(T->pleft);
	int sumRight = check(T->pright);
	if (!T->pleft && !T->pright)return T->data;
	if (!T->pleft)return sumRight + T->data;
	if (!T->pright)return sumLeft + T->data;
	if (T->pleft && T->pright) {
		res = max(res, sumLeft + sumRight + T->data);
		return max(sumLeft, sumRight) + T->data;
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
        res = INT_MIN;
        check(t);
        cout << res << endl;
    }

    return 0;
}
