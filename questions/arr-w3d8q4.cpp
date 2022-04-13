/*  Reverse an array of size n using constant extra space */


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
        int size;
        cin >> size;
        int arr[size];
        int s,e;

        cout << "Original array " << endl;
        for(int i=0; i<size; i++){
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        cout << endl;

        cin >> s;
        cin >> e;

        int i=s;
        int j=e;

        while(i<j){
            // swap arr[i] and arr[j]
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];

            i++; 
            j--;
        }

        cout << "Reversed array from index {"<< s<< "," << e << "}" <<endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

    }


    return 0;
}


/*
Time Complexity : O(n)
Space Complexity : O(1)
*/


/*
Input:

1
9
3 1 5 6 9 5 4 8 3
2 7
  
Output:

Original array 
3 1 5 6 9 5 4 8 3 
Reversed array from index {2,7
3 1 8 4 5 9 6 5 3 


/*


/*
COMMENTS:
*/