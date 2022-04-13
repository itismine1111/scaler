/*  Array of size n and integer k. Return true of there exists 2 elements a[i] and a[j] such that (a[i] + a[j] = k) and (i != j)  */


#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define debug(val) printf("check%d\n",val)
#define PB push_back
#define MP make_pair
#define ll long long
#define CHGSTREAM \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main() {
    
    CHGSTREAM
    int t;

    cin >> t;

    while(t--){

        int size; int k;
        int result = 0; //false

        cin >> size;
        int arr[size];

        for(int i=0; i<size; i++){
            cin >> arr[i];
        }

        cin >> k;

        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(arr[i] + arr[j] == k){
                    result = 1;
                }
            }
        }
        
        result==1 ? cout<<"true"<<endl : cout<<"false"<<endl;
    }

    return 0;
}


/*
Time Complexity : O(n^2)
We can do it in a better time complexity using different data structures as well
*/


/*
Input:

->test-cases
->size
->array elements
->k

4 
7
-3 -2 6 8 4 8 5
6
7
-3 -2 6 8 4 8 5
10
7
-3 -2 6 8 4 8 5
11
7
-3 -2 6 8 4 8 5
21

Output:

true
true
true
false

/*


/*
COMMENTS:
*/