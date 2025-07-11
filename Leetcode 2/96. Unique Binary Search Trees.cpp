//#include <vector>
//#include <iostream>
//
//int numTrees(int n) {
//    std::vector<int> dp(n + 1, 0);
//    dp[0] = 1;
//    dp[1] = 1;
//
//    for (int nodes = 2; nodes <= n; ++nodes) {
//        for (int root = 1; root <= nodes; ++root) {
//            dp[nodes] += dp[root - 1] * dp[nodes - root];
//        }
//    }
//
//    return dp[n];
//}
//
//int main() {
//    int n = 3;
//    int result = numTrees(n);
//    std::cout << "Number of unique BSTs with " << n << " nodes: " << result << std::endl;
//    return 0;
//}
