#include <iostream>
#include <vector>
using namespace std;

int count_k_countdowns(int n, int k, vector<int> arr) {
    int count = 0;
    for (int i = 0; i <= n - k; i++) {
        bool is_k_countdown = true;
        for (int j = i; j < i + k; j++) {
            if (arr[j] != k - (j - i)) {
                is_k_countdown = false;
                break;
            }
        }
        if (is_k_countdown) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; case_num++) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = count_k_countdowns(n, k, arr);
        cout << "Case #" << case_num << ": " << ans << endl;
    }
    return 0;
}
