/*  Rotate and array(n) in clockwise direction by k places
    * using constant space
    * (k<n)
*/


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


void reverseArray(int* arr, int start, int end){

    int i=start;
    int j=end;

    while(i<j){
        // swap arr[i] and arr[j]
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];

        i++; 
        j--;
    }
}

int main() {
    
    CHGSTREAM

    int t;
    cin >> t;

    while(t--){
        int size;
        cin >> size;

        int arr[size];
        int k;

        for(int i=0; i<size; i++){
            cin >> arr[i];
        }
        
        cin >> k;

        reverseArray(arr, 0, size-1);
        reverseArray(arr, 0, k-1);
        reverseArray(arr, k, size-1);

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
8
1 3 4 5 6 8 9 4
3

Output:
8 9 4 1 3 4 5 6 

/*


/*
COMMENTS:
*/