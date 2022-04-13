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

        cout << "Original array " << endl;
        for(int i=0; i<size; i++){
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        cout << endl;

        int i=0;
        int j=size-1;

        while(i<j){
            // swap arr[i] and arr[j]
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];

            i++; 
            j--;
        }

        cout << "Reversed array " << endl;
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
6
3 4 2 3 6 7
  
Output:

Original array 
3 4 2 3 6 7 
Reversed array 
7 6 3 2 4 3 

/*


/*
COMMENTS:
*/