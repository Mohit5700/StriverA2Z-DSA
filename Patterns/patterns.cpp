#include<bits/stdc++.h>
using namespace std;

/*
    * * * *
    * * * *
    * * * *
    * * * *
*/
void pattern1 (int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j<=n; j++) {
            if(j <= n) {
                cout <<"* ";
            }
        }
        cout << endl;
    }
}

/*
    * 
    * * 
    * * * 
    * * * *
*/
void pattern2 (int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << "* ";
        }
        cout << endl;
    }

}

/*
    1
    1 2
    1 2 3
    1 2 3 4
*/
void pattern3 (int n) {
    for(int i = 1; i <= n; i++) {
        int count = 1;
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << count++ <<" ";

        }
        cout << endl;
    }
}

/*
    1
    2 2
    3 3 3
    4 4 4 4
*/
void pattern4 (int n) {
    for(int i = 1; i <= n; i++) {
        int count = i;
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << count <<" ";
        }
        cout << endl;
    }
}

/*
    * * * * 
    * * * 
    * * 
    * 
*/
void pattern5 (int n) {
    for(int i = 1; i<= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= n + 1 - i) cout << "* ";
        }
        cout << endl;
    }
}

/*
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/
void pattern6 (int n) {
    for(int i = 1; i <= n; i++) {
        int count = 1;
        for(int j = 1; j <= n; j++) {
            if(j <= n - i + 1) cout << count++ << " ";
        }
        cout << endl;
    }
}

/*
     *     
    ***    
   *****   
  *******
*/
void pattern7 (int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * n - 1; j++) {
            if(j >= n - i + 1 && j <= n + i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

/*
     ******* 
      *****
       ***
        *  
*/
void pattern8 (int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * n - 1; j++) {
            if(j >= i && j <= 2 * n - i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

/*
    *  
   ***
  ***** 
  *****  
   ***
    * 
*/
void pattern9 (int n) {
    int k = 0;
    for (int i = 1; i <= n * 2; i++) {
        if (i <= n) k++;
        else if (i > n + 1) k--;
        for (int j = 1; j <= n * 2 - 1; j++) {
            if(j >= n + 1 - k && j <= n - 1 + k) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

/*
    *  
    **
    *** 
    ****
    ***
    **
    * 
*/
void pattern10 (int n) {
    for (int i = 1; i <= n * 2 - 1; i++) {
        for(int j = 1; j <= n; j++) {
            if(i <= n) {
                if(j <= i) cout << "*";
                else cout <<" ";
            } else {
                if(j <= n * 2 - i) cout <<"*";
                else cout << " ";
            }
        }
        cout << endl;
    }
}

/*
    1
    0 1
    1 0 1
    0 1 0 1
*/

void pattern11 (int n) {
    int flag;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) flag = 0;
        else flag = 1;
        for(int j = 1; j <= n; j++) {
            if(j <= i) {
                cout << flag << " ";
                flag = !flag;
            }
        }
        cout << endl;
    }
}

/*
    1      1
    12    21
    123  321
    12344321
*/
void pattern12 (int n) {
    int k = n;
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * n; j++) {
            if(j <= i || j >= n + k) {
                if(j <= n) cout << num++;
                else cout << --num;
            } 
            else cout << " ";
        }
        cout << endl;
        k--;
    }
}

/*
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
*/
void pattern13 (int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << num++ << " ";
        }
        cout << endl;
    }
}

/*
    A 
    A B 
    A B C 
    A B C D 
    A B C D E 
*/
void pattern14 (int n) {
    for(int i = 1; i <= n; i++) {
        char ch= 'A';
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << ch++ << " ";
        }
        cout << endl;
    }
}

/*
    A B C D E 
    A B C D 
    A B C 
    A B 
    A 
*/
void pattern15 (int n) {
    for(int i = 1; i <= n; i++) {
        char ch= 'A';
        for(int j = 1; j <= n; j++) {
            if(j <= n + 1 - i) cout << ch++ << " ";
        }
        cout << endl;
    }
}

/*
    A 
    B B 
    C C C 
    D D D D 
    E E E E E 
*/
void pattern16 (int n) {
    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

/*
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
*/
void pattern17 (int n) {
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= 2 * n - 1; j++) {
            if(j >= n + 1 - i && j <= n - 1 + i) {
                if(j < n) cout << ch++;
                else cout << ch--;
            }
            else cout << " ";
        }
        cout << endl;
    }
}

/*
    E 
    D E 
    C D E 
    B C D E 
    A B C D E 
*/
void pattern18(int n) {
    int num = n;
    for(int i = 1; i <= n; i++) {
        char ch = 'A' + (num - 1);
        for(int j = 1; j <= n; j++) {
            if(j <= i) cout << ch++ <<" ";
        }
        num--;
        cout << endl;
    }
}

/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/
void pattern19 (int n) {
    int k = 0;
    for(int i = 1; i <= 2 * n; i++) {
        if(i <= n) k++;
        else if (i > n + 1) k--;
        for(int j = 1; j <= 2 * n; j++) {
            if(j <= n + 1 - k || j >= n + k) cout <<"*";
            else cout << " ";
        }
        cout << endl;
    }
}

/*
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/
void pattern20 (int n) {
    for(int i = 1; i <= 2 * n - 1; i++) {
        for(int j = 1; j <= 2 * n; j++) {
            if(i <= n) {
                if(j <= i || j >= (2 * n + 1) - i) cout <<"*";
                else cout << " ";
            } else {
                if(j <= 2 * n - i || j >= i + 1) cout <<"*";
                else cout <<" ";
            }
        }
        cout << endl;
    }
}

/*
    ******
    *    *
    *    *
    *    *
    *    *
    ******
*/
void pattern21 (int n) {
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) cout <<"*";
            else cout <<" ";
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout <<  endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
    cout << endl;
    pattern6(n);
    cout << endl;
    pattern7(n);
    cout << endl;
    pattern8(n);
    cout << endl;
    pattern9(n);
    cout<<endl;
    pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern12(n);
    cout << endl;
    pattern13(n);
    cout << endl;
    pattern14(n);
    cout << endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout << endl;
    pattern19(n);
    cout << endl;
    pattern20(n);
    cout << endl;
    pattern21(n);
    cout << endl;
}
